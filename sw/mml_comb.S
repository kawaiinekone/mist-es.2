// mml_comb.S — Exhaustive MML permission truth-table exerciser for MIST-ES SECURE.
// Cycles through PMP configurations to cover all cases in mml_perm.
.section .text.init, "ax"
.globl _start

_start:
    la   t0, mtrap
    csrw mtvec, t0

    # region0: code [0, 64KB), L|X|R
    li   t0, 0x00001FFF
    csrw pmpaddr0, t0
    # region1: tohost, L|W|R
    li   t0, 0x08000000
    csrw pmpaddr1, t0
    # region2: test address @ 0x8000_1000 (NA4)
    li   t0, 0x20000400
    csrw pmpaddr2, t0

    # Test all 16 permission combinations
    # 0b0000, 0b0001, 0b0010, 0b0011, 0b0100, 0b0101, 0b0110, 0b0111,
    # 0b1000, 0b1001, 0b1010, 0b1011, 0b1100, 0b1101, 0b1110, 0b1111
    # pmp2cfg is in pmpcfg0 bits [23:16]
    # base: cfg0=0x9D, cfg1=0x93

    li   s0, 0x80001000  # test address
    li   s1, 0           # loop index 0..15

perm_loop:
    # Build pmp2cfg: (s1[3]<<7) | (2<<3) [NA4] | (s1[2:0])
    andi t0, s1, 8
    slli t0, t0, 4       # L bit at bit 7
    ori  t0, t0, 0x10    # NA4 mode (A=2, bit 4:3 = 2<<3 = 0x10)
    andi t1, s1, 7
    or   t0, t0, t1      # low 3 bits R,W,X
    slli t0, t0, 16      # shift to pmp2cfg position
    li   t1, 0x0000939D
    or   t0, t0, t1
    csrw pmpcfg0, t0

    # Enable MML (bit 0 of mseccfg)
    li   t0, 1
    csrw 0x747, t0

    # Probe load
    lw   t2, 0(s0)

cont_after_trap:
    addi s1, s1, 1
    li   t0, 16
    blt  s1, t0, perm_loop

    # Done, write 1 to tohost
    li   t0, 0x20000000
    li   t1, 1
    sw   t1, 0(t0)
1:  j 1b

mtrap:
    # On trap, advance to cont_after_trap
    la   t6, cont_after_trap
    csrw mepc, t6
    mret
