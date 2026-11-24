# test_security.S — Security, Zeroization, Constant-Time, Privilege, and Telemetry Workout for MIST-ES
.section .text
.globl _start

_start:
    la   t0, mtrap
    csrw mtvec, t0

    # 1. Counter & Architecture ID CSR reads
    csrr t1, 0xC00       # cycle
    csrr t2, 0xC80       # cycleh
    csrr t3, 0xC02       # instret
    csrr t4, 0xC82       # instreth
    csrr t5, 0xB00       # mcycle
    csrr t6, 0xB80       # mcycleh
    csrr a0, 0xB02       # minstret
    csrr a1, 0xB82       # minstreth
    csrr a2, 0xF11       # mvendorid
    csrr a3, 0xF12       # marchid
    csrr a4, 0xF14       # mhartid

    # 1b. Write to minstret / minstreth
    csrw 0xB02, a0       # minstret write
    csrw 0xB82, a1       # minstreth write

    # 2. Security CSR Read/Write & Telemetry (prior to locking)
    csrr s0, 0x7C0       # msec_ctrl
    csrr s1, 0x7C1       # mecc_status

    # Write-1-to-clear test on status
    li   t0, 0x08        # glitch_seen W1C
    csrw 0x7C0, t0
    li   t0, 0x04        # sec_ecc_trap_en_r = 1
    csrw 0x7C0, t0
    li   t0, 0x0355      # cerr_count = 0x55, cerr_seen & uerr_seen W1C
    csrw 0x7C1, t0

    # 2b. Bitmanip instructions (Zba/Zbb/Zbs)
    li   t0, 0x12345678
    .word 0x6052d293   # rori  t0, t0, 5
    .word 0x6982d293   # rev8  t0, t0
    .word 0x2872d293   # orc.b t0, t0

    # 2c. CSR read/write for mcause, mtval, mip
    csrr t0, mip
    csrw mcause, zero
    csrw mtval, zero

    # 2d. 16-bit to 32-bit alignment straddle to exercise S_FETCH2
    c.nop
    addi t0, t0, 1

    # 3. Constant-Time (CT) Mode Enable & Division
    li   t0, 2           # CT_EN = 1
    csrw 0x7C0, t0
    li   a0, 100
    li   a1, 0           # Division by zero under CT mode
    div  a2, a0, a1
    rem  a3, a0, a1
    li   a0, 0x80000000
    li   a1, -1          # Overflow division under CT mode
    div  a2, a0, a1
    # Disable CT mode
    csrw 0x7C0, zero

    # 4. Hardware Dynamic Zeroization (S_WIPE)
    # Preload registers with data
    li   a0, 0xDEADBEEF
    li   a1, 0xCAFEBABE
    li   a2, 0x12345678
    # Trigger hardware wipe (bit 0 of msec_ctrl)
    li   t0, 1
    csrw 0x7C0, t0
    # Hardware sequences 31 cycles in S_WIPE, wiping x1..x31
    nop
    nop
    nop

    # Restore mtvec after wipe (mtvec is preserved in CSR, but reload pointer)
    la   t0, mtrap
    csrw mtvec, t0

    # 5. RLB and Locked PMP Overwrite Test (ePMP)
    # Enable RLB (bit 2 of mseccfg 0x747) BEFORE locking any rule
    li   t0, 4
    csrw 0x747, t0
    # Now set entry 1 to locked
    li   t0, 0x80        # L=1, OFF
    csrw 0x3A0, t0
    # Write pmpaddr0 with RLB active (exercises line 280)
    li   t0, 0x20000000
    csrw 0x3B0, t0

    # 6. MPRV test (Modify PRiVilege, mstatus bit 17)
    csrr t0, mstatus
    li   t1, (1 << 17) | (3 << 11)   # MPRV=1, MPP=3
    or   t0, t0, t1
    csrw mstatus, t0
    # Dummy load with MPRV active
    lw   zero, 0(sp)
    # Clear MPRV
    li   t1, ~(1 << 17)
    and  t0, t0, t1
    csrw mstatus, t0

    # 7. Read-only CSR write fault test (exercises line 274)
    li   s2, 0
    csrw 0xC00, zero    # CSR 0xC00 is read-only -> causes illegal instruction trap (cause=2)
    # Handler will set s2 = 1 and return here

    # 8. U-Mode transition & Privilege Fault test (exercises lines 267-276, 286)
    # First, configure PMP entry 0 with NAPOT RWX to allow U-mode full address space
    li   t0, -1
    csrw 0x3B0, t0      # pmpaddr0 = 0xFFFFFFFF
    li   t0, 0x1F        # pmp0cfg: A=NAPOT (0x18), R=1, W=1, X=1 -> 0x1F
    csrw 0x3A0, t0

    # Set return target in mepc
    la   t0, u_mode_start
    csrw mepc, t0
    # Clear mstatus.MPP (bits 12:11 = 00 for User Mode)
    csrr t0, mstatus
    li   t1, ~(3 << 11)
    and  t0, t0, t1
    csrw mstatus, t0
    # MRET to enter User Mode!
    mret

u_mode_start:
    # --- Now running in User Mode (priv = 00) ---
    # Attempt M-mode CSR read from U-mode (causes priv_fault -> illegal instruction trap)
    csrr t0, mstatus
    # Handler will return here in U-mode
    # Now issue ECALL from U-mode (causes ecause = 8)
    ecall
    # Handler will return here in Machine Mode!

    # --- Back in Machine Mode (priv = 11) ---

    # 9. Security Lock & Blocked Write Test
    li   t0, 0x10        # LOCK = 1
    csrw 0x7C0, t0
    # Attempt to write 0 (should be blocked by hardware lock)
    csrw 0x7C0, zero

    # 10. Success: write 1 to tohost (0x20000000)
    li   t0, 0x20000000
    li   t1, 1
    sw   t1, 0(t0)
1:  j 1b

mtrap:
    csrr t6, mcause
    li   t5, 2           # Illegal instruction (expected from ro CSR write and U-mode CSR)
    beq  t6, t5, handle_illegal
    li   t5, 8           # ECALL from U-mode
    beq  t6, t5, handle_ecall_u

    # Unexpected trap: write 2 to tohost
    li   t0, 0x20000000
    li   t1, 2
    sw   t1, 0(t0)
2:  j 2b

handle_illegal:
    addi s2, s2, 1
    csrr t0, mepc
    addi t0, t0, 4       # Advance PC past illegal instruction
    csrw mepc, t0
    mret

handle_ecall_u:
    addi s3, s3, 1
    csrr t0, mepc
    addi t0, t0, 4       # Advance PC past ecall
    csrw mepc, t0
    # Set MPP = 3 (Machine Mode) so mret elevates back to M-mode
    csrr t0, mstatus
    li   t1, (3 << 11)
    or   t0, t0, t1
    csrw mstatus, t0
    mret
