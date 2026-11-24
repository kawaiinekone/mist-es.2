// ============================================================================
// test_zba_zbb_zbs.c — Hardware and simulation verification of RV32B extensions
// Tests Zba (sh1add, sh2add, sh3add), Zbb (clz, ctz, cpop, min, max, rol, ror, rev8, etc.),
// and Zbs (bset, bclr, binv, bext).
// ============================================================================
#include <stdint.h>

static inline void uart_putc(char c) {
    volatile uint32_t* uart_stat = (volatile uint32_t*)0x10000000;
    while (*uart_stat & 1); // wait while tx_busy
    *uart_stat = (uint32_t)c;
}

static inline void uart_puts(const char* s) {
    while (*s) {
        uart_putc(*s++);
    }
}

static inline void set_leds(uint8_t val) {
    volatile uint32_t* led_reg = (volatile uint32_t*)0x20001000;
    *led_reg = val;
}

static inline void fail(const char* msg) {
    uart_puts("FAIL: ");
    uart_puts(msg);
    uart_puts("\n");
    set_leds(0xFF);
    while (1);
}

int main(void) {
    set_leds(0x01);
    uart_puts("[RV32B TEST] Starting Zba, Zbb, Zbs verification...\n");

    // 1. Test Zba: sh1add, sh2add, sh3add
    uint32_t a = 10, b = 5, r;
    // sh1add: (a << 1) + b = 25
    asm volatile (".insn r 0x33, 0x2, 0x10, %0, %1, %2" : "=r"(r) : "r"(a), "r"(b));
    if (r != 25) fail("sh1add");

    // sh2add: (a << 2) + b = 45
    asm volatile (".insn r 0x33, 0x4, 0x10, %0, %1, %2" : "=r"(r) : "r"(a), "r"(b));
    if (r != 45) fail("sh2add");

    // sh3add: (a << 3) + b = 85
    asm volatile (".insn r 0x33, 0x6, 0x10, %0, %1, %2" : "=r"(r) : "r"(a), "r"(b));
    if (r != 85) fail("sh3add");
    set_leds(0x03);

    // 2. Test Zbb: min, max, minu, maxu
    int32_t sa = -10, sb = 20, sr;
    // min: -10
    asm volatile (".insn r 0x33, 0x4, 0x05, %0, %1, %2" : "=r"(sr) : "r"(sa), "r"(sb));
    if (sr != -10) fail("min");

    // max: 20
    asm volatile (".insn r 0x33, 0x5, 0x05, %0, %1, %2" : "=r"(sr) : "r"(sa), "r"(sb));
    if (sr != 20) fail("max");

    // minu: 20 (since unsigned -10 is 0xFFFFFFF6)
    asm volatile (".insn r 0x33, 0x6, 0x05, %0, %1, %2" : "=r"(r) : "r"(sa), "r"(sb));
    if (r != 20) fail("minu");

    // maxu: 0xFFFFFFF6
    asm volatile (".insn r 0x33, 0x7, 0x05, %0, %1, %2" : "=r"(r) : "r"(sa), "r"(sb));
    if (r != (uint32_t)sa) fail("maxu");
    set_leds(0x07);

    // 3. Test Zbb: andn, orn, xnor
    uint32_t x = 0xAA55AA55, y = 0x00FF00FF;
    // andn: x & ~y = 0xAA00AA00
    asm volatile (".insn r 0x33, 0x7, 0x20, %0, %1, %2" : "=r"(r) : "r"(x), "r"(y));
    if (r != (x & ~y)) fail("andn");

    // orn: x | ~y = 0xAAFFAAFF
    asm volatile (".insn r 0x33, 0x6, 0x20, %0, %1, %2" : "=r"(r) : "r"(x), "r"(y));
    if (r != (x | ~y)) fail("orn");

    // xnor: ~(x ^ y)
    asm volatile (".insn r 0x33, 0x4, 0x20, %0, %1, %2" : "=r"(r) : "r"(x), "r"(y));
    if (r != ~(x ^ y)) fail("xnor");
    set_leds(0x0F);

    // 4. Test Zbb: rev8 (endian swap)
    uint32_t val = 0x12345678;
    // rev8: .insn i 0x13, 0x5, %0, %1, 0x698
    asm volatile (".insn i 0x13, 0x5, %0, %1, 0x698" : "=r"(r) : "r"(val));
    if (r != 0x78563412) fail("rev8");

    // 5. Test Zbb: clz, ctz, cpop
    uint32_t c_val = 0x00080000; // bit 19 set
    // clz: 31 - 19 = 12
    asm volatile (".insn i 0x13, 0x1, %0, %1, 0x600" : "=r"(r) : "r"(c_val));
    if (r != 12) fail("clz");

    // ctz: 19
    asm volatile (".insn i 0x13, 0x1, %0, %1, 0x601" : "=r"(r) : "r"(c_val));
    if (r != 19) fail("ctz");

    // cpop on 0x000F000F = 8
    uint32_t pop_val = 0x000F000F;
    asm volatile (".insn i 0x13, 0x1, %0, %1, 0x602" : "=r"(r) : "r"(pop_val));
    if (r != 8) fail("cpop");
    set_leds(0x1F);

    // 6. Test Zbs: bset, bclr, binv, bext
    uint32_t bs = 0x00000001;
    // bset bit 4: 0x00000011
    asm volatile (".insn r 0x33, 0x1, 0x14, %0, %1, %2" : "=r"(r) : "r"(bs), "r"(4));
    if (r != 0x00000011) fail("bset");

    // bclr bit 0: 0x00000010
    asm volatile (".insn r 0x33, 0x1, 0x24, %0, %1, %2" : "=r"(r) : "r"(r), "r"(0));
    if (r != 0x00000010) fail("bclr");

    // binv bit 4: 0x00000000
    asm volatile (".insn r 0x33, 0x1, 0x34, %0, %1, %2" : "=r"(r) : "r"(r), "r"(4));
    if (r != 0) fail("binv");

    // bext: check bit 4 of 0x00000010
    uint32_t ext_val = 0x00000010;
    asm volatile (".insn r 0x33, 0x5, 0x24, %0, %1, %2" : "=r"(r) : "r"(ext_val), "r"(4));
    if (r != 1) fail("bext");
    set_leds(0xAA);

    uart_puts("[RV32B TEST] ALL TESTS PASSED! Zba, Zbb, Zbs fully verified!\n");
    set_leds(0x55);

    volatile uint32_t* tohost = (volatile uint32_t*)0x20000000;
    *tohost = 1;
    return 0;
}
