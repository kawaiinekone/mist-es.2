# Interrupt verification test for MIST-ES (CLINT timer + software interrupts)
.section .text
.globl _start

_start:
    li sp, 0x80002000
    la t0, trap_handler
    csrw mtvec, t0

    # Enable MSIE (bit 3) and MTIE (bit 7) in mie (CSR 0x304)
    li t0, 0x88
    csrs mie, t0

    # Enable global interrupts: mstatus.mie (bit 3, CSR 0x300)
    li t0, 0x08
    csrs mstatus, t0

    # 1. Trigger Software Interrupt via CLINT msip (0x02000000)
    li t1, 0x02000000
    li t2, 1
    sw t2, 0(t1)     # Assert msip -> triggers soft IRQ

    # Wait for trap handler to handle and clear
    nop
    nop
    nop
    nop

    # 2. Trigger Timer Interrupt via CLINT mtimecmp (0x02004000)
    li t1, 0x02004000
    li t2, 10        # Set small mtimecmp
    sw t2, 0(t1)
    sw zero, 4(t1)

wait_timer:
    nop
    nop
    j wait_timer

done_test:
    # Success write to tohost (0x20000000 = 1)
    li t0, 0x20000000
    li t1, 1
    sw t1, 0(t0)
1:  j 1b

trap_handler:
    csrr t3, mcause
    # Check if software interrupt (mcause = 0x80000003)
    li t4, 0x80000003
    beq t3, t4, handle_soft

    # Check if timer interrupt (mcause = 0x80000007)
    li t4, 0x80000007
    beq t3, t4, handle_timer

    # Unexpected trap
    li t0, 0x20000000
    li t1, 2
    sw t1, 0(t0)
2:  j 2b

handle_soft:
    # Clear msip
    li t5, 0x02000000
    sw zero, 0(t5)
    mret

handle_timer:
    # Set mtimecmp to infinity to clear timer interrupt
    li t5, 0x02004000
    li t6, -1
    sw t6, 0(t5)
    sw t6, 4(t5)
    # Redirect mepc to done_test
    la t5, done_test
    csrw mepc, t5
    mret
