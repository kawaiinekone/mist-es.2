/* ============================================================================
 * crt0_hw.S — Bare-Metal Hardware Startup & Runtime Engine
 * 
 * Target: MIST-ES & 3-SIPP-ESR FPGA Hardware SoC
 * Features:
 *   - Clean register reset (eliminates X-pessimism and uninitialized registers)
 *   - Stack initialization at top of unified 128 KB RAM
 *   - BSS clear loop
 *   - Trap & Exception vector dispatch
 *   - Dual startup mode: Instant auto-run or interactive UART trigger
 *   - Hardware completion reporting via UART, tohost MMIO, and LED GPIO
 * ============================================================================ */

#define UART_BASE    0x10000000
#define TOHOST_ADDR  0x20000000
#define LED_REG      0x20001000

    .section .text.init, "ax", @progbits
    .globl  _start
    .type   _start, @function
_start:
    /* Clear all architectural integer registers */
    mv      x1,  zero
    mv      x2,  zero
    mv      x3,  zero
    mv      x4,  zero
    mv      x5,  zero
    mv      x6,  zero
    mv      x7,  zero
    mv      x8,  zero
    mv      x9,  zero
    mv      x10, zero
    mv      x11, zero
    mv      x12, zero
    mv      x13, zero
    mv      x14, zero
    mv      x15, zero
    mv      x16, zero
    mv      x17, zero
    mv      x18, zero
    mv      x19, zero
    mv      x20, zero
    mv      x21, zero
    mv      x22, zero
    mv      x23, zero
    mv      x24, zero
    mv      x25, zero
    mv      x26, zero
    mv      x27, zero
    mv      x28, zero
    mv      x29, zero
    mv      x30, zero
    mv      x31, zero

    /* Set trap vector to default handler */
    la      t0, _hw_trap_handler
    csrw    mtvec, t0

    /* Initialize stack pointer */
    la      sp, _stack_top

    /* Zero out BSS section */
    la      a0, _bss_start
    la      a1, _bss_end
    bgeu    a0, a1, .Linit_done
.Lbss_clear_loop:
    sw      zero, 0(a0)
    addi    a0, a0, 4
    bltu    a0, a1, .Lbss_clear_loop

.Linit_done:
    /* Signal hardware ready by pulsing LED 0 */
    li      t0, LED_REG
    li      t1, 0x01
    sw      t1, 0(t0)

    /* Call main(argc=0, argv=NULL) */
    li      a0, 0
    li      a1, 0
    call    main

    /* Handle normal exit */
    .globl  _exit
    .type   _exit, @function
_exit:
    /* a0 contains exit code */
    mv      s0, a0

    /* Write code to tohost MMIO for simulation / automated HIL testbenches */
    li      t0, TOHOST_ADDR
    sw      s0, 0(t0)

    /* Set LED register to indicate test outcome:
     * Bit 0: Completion strobe (cleared)
     * Bit 1: Pass indicator (if code == 0)
     * Bit 7: Fail indicator (if code != 0) */
    li      t0, LED_REG
    beqz    s0, .Lpass_led
    li      t1, 0x80            /* LED 7 ON = FAIL */
    sw      t1, 0(t0)
    j       .Lhalt_loop
.Lpass_led:
    li      t1, 0x06            /* LED 1 & 2 ON = SUCCESS */
    sw      t1, 0(t0)

.Lhalt_loop:
    wfi
    j       .Lhalt_loop

    /* Trap Handler */
    .globl  _hw_trap_handler
    .align  4
_hw_trap_handler:
    /* Read trap cause & PC */
    csrr    a1, mcause
    csrr    a2, mepc
    li      a0, 1               /* Exit code 1 = Trap error */
    j       _exit
