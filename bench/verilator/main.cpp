// =============================================================================
// main.cpp — Verilator C++ harness for MIST-ES benchmark suite.
//
// Usage:
//   ./sim/Vbench_top --hex <path/to/bench.hex> --name <benchmark_name>
//                    [--max-cycles N] [--trace]
//
// Loads the flat 32-bit-per-line hex image directly into the Verilator
// model's imem[] array (bench_top__DOT__imem), resets the core, then runs
// the clock loop until:
//   • tohost == 1           → PASS
//   • tohost >= 2           → FAIL (code = tohost value)
//   • cycles > max_cycles   → TIMEOUT
//
//   write 0xC0000000|(hi24)  → upper 30 bits of 64-bit cycle count
//   write 0x80000000|(lo30)  → lower 30 bits (printed together on PASS)
//   write 1                  → PASS / done
//   write >= 2               → FAIL
// =============================================================================

#include "Vbench_top.h"
#if __has_include("Vbench_top___024root.h")
#include "Vbench_top___024root.h"
#define GET_IMEM(top, i) (top->rootp->bench_top__DOT__imem[(i)])
#define GET_DRAM(top, i) (top->rootp->bench_top__DOT__dram[(i)])
#else
#define GET_IMEM(top, i) (top->bench_top__DOT__imem[(i)])
#define GET_DRAM(top, i) (top->bench_top__DOT__dram[(i)])
#endif
#include "verilated.h"

#if VM_TRACE
#include "verilated_vcd_c.h"
#endif

#if VM_COVERAGE
#include "verilated_cov.h"
#endif

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cinttypes>
#include <vector>
#include <string>

// ---------------------------------------------------------------------------
static void load_hex(Vbench_top* top, const char* path)
{
    FILE* f = fopen(path, "r");
    if (!f) {
        fprintf(stderr, "[BENCH] ERROR: cannot open hex file: %s\n", path);
        exit(1);
    }

    char line[32];
    uint32_t idx = 0;
    const uint32_t IMEM_WORDS = 16384; // must match bench_top parameter

    while (fgets(line, sizeof(line), f)) {
        // Skip blank lines and comments (@address directives from objcopy)
        if (line[0] == '\n' || line[0] == '\r' || line[0] == '/')
            continue;
        if (line[0] == '@') {
            // $readmemh address directive: @<hex_addr>
            unsigned long addr = strtoul(line + 1, nullptr, 16);
            idx = (uint32_t)addr;
            continue;
        }
        if (idx >= IMEM_WORDS) {
            fprintf(stderr, "[BENCH] WARNING: hex file exceeds IMEM_WORDS=%u, truncating\n",
                    IMEM_WORDS);
            break;
        }
        char* end;
        uint32_t word = (uint32_t)strtoul(line, &end, 16);
        if (end == line) continue; // empty / non-hex line
        GET_IMEM(top, idx++) = word;
    }
    fclose(f);
    fprintf(stderr, "[BENCH] Loaded %u words from %s\n", idx, path);
}

// ---------------------------------------------------------------------------
static void load_dram(Vbench_top* top, const char* path)
{
    FILE* f = fopen(path, "r");
    if (!f) return;
    char line[128];
    uint32_t idx = 0;
    const uint32_t DRAM_WORDS = 16384;
    while (fgets(line, sizeof(line), f)) {
        char* p = line;
        while (*p == ' ' || *p == '\t') p++;
        if (*p == '#' || *p == '/' || *p == '\n' || *p == '\0') continue;
        uint32_t val = (uint32_t)strtoul(p, nullptr, 16);
        if (idx < DRAM_WORDS) GET_DRAM(top, idx++) = val;
    }
    fclose(f);
    fprintf(stderr, "[BENCH] Loaded %u DRAM words from %s\n", idx, path);
}

// ---------------------------------------------------------------------------
static void zero_dram(Vbench_top* top)
{
    const uint32_t DRAM_WORDS = 16384;
    for (uint32_t i = 0; i < DRAM_WORDS; i++)
        GET_DRAM(top, i) = 0;
}

static void clock_step(Vbench_top* top) {
    top->clk ^= 1;
    top->eval();
}

static void tck_cycle(Vbench_top* top, bool tms, bool tdi) {
    top->tms = tms ? 1 : 0;
    top->tdi = tdi ? 1 : 0;
    clock_step(top); clock_step(top);
    top->tck = 1;
    for (int k = 0; k < 6; k++) clock_step(top);
    top->tck = 0;
    for (int k = 0; k < 6; k++) clock_step(top);
}

static void jtag_reset(Vbench_top* top) {
    for (int i = 0; i < 8; i++) tck_cycle(top, 1, 0);
    tck_cycle(top, 0, 0);
}

static void scan_ir(Vbench_top* top, uint8_t irval) {
    tck_cycle(top, 1, 0); tck_cycle(top, 1, 0); tck_cycle(top, 0, 0); tck_cycle(top, 0, 0);
    for (int k = 0; k < 5; k++) {
        tck_cycle(top, (k == 4) ? 1 : 0, (irval >> k) & 1);
    }
    tck_cycle(top, 1, 0); tck_cycle(top, 0, 0);
}

static uint64_t scan_dr(Vbench_top* top, int n, uint64_t din) {
    tck_cycle(top, 1, 0); tck_cycle(top, 0, 0); tck_cycle(top, 0, 0);
    uint64_t dout = 0;
    for (int k = 0; k < n; k++) {
        if (top->tdo) dout |= (1ULL << k);
        tck_cycle(top, (k == n - 1) ? 1 : 0, (din >> k) & 1);
    }
    tck_cycle(top, 1, 0); tck_cycle(top, 0, 0);
    return dout;
}

static void dmi_write(Vbench_top* top, uint8_t addr, uint32_t data) {
    uint64_t din = ((uint64_t)addr << 34) | ((uint64_t)data << 2) | 2ULL;
    scan_dr(top, 41, din);
}

static uint32_t dmi_read(Vbench_top* top, uint8_t addr) {
    uint64_t din = ((uint64_t)addr << 34) | 1ULL;
    scan_dr(top, 41, din);
    uint64_t res = scan_dr(top, 41, 0);
    return (uint32_t)(res >> 2);
}

static void run_jtag_test(Vbench_top* top) {
    fprintf(stderr, "[BENCH] Executing JTAG Debug Module stimulus...\n");
    jtag_reset(top);
    scan_dr(top, 32, 0);
    scan_ir(top, 0x10);
    scan_dr(top, 32, 0); // DTMCS
    scan_ir(top, 0x11);  // DMI
    dmi_write(top, 0x10, 0x00000001);
    dmi_write(top, 0x10, 0x80000001);
    for (int i = 0; i < 20; i++) { clock_step(top); clock_step(top); }
    dmi_read(top, 0x11);
    dmi_write(top, 0x04, 0xA5A5A5A5);
    dmi_write(top, 0x17, (2 << 20) | (1 << 17) | (1 << 16) | 0x101F);
    for (int i = 0; i < 20; i++) { clock_step(top); clock_step(top); }
    dmi_write(top, 0x17, (2 << 20) | (1 << 17) | (0 << 16) | 0x101F);
    for (int i = 0; i < 20; i++) { clock_step(top); clock_step(top); }
    dmi_read(top, 0x04);
    dmi_write(top, 0x17, (2 << 20) | (1 << 17) | 0x301);
    for (int i = 0; i < 20; i++) { clock_step(top); clock_step(top); }
    dmi_read(top, 0x04);
    dmi_write(top, 0x39, 0x80000100);
    dmi_write(top, 0x3C, 0x12345678);
    dmi_write(top, 0x38, (1 << 20) | (2 << 17));
    for (int i = 0; i < 20; i++) { clock_step(top); clock_step(top); }
    dmi_write(top, 0x10, 0x40000001);
    for (int i = 0; i < 20; i++) { clock_step(top); clock_step(top); }
    fprintf(stderr, "[BENCH] JTAG Debug Module stimulus completed.\n");
}

// ---------------------------------------------------------------------------
int main(int argc, char* argv[])
{
    // ---- parse args -------------------------------------------------------
    const char* hex_path   = nullptr;
    const char* dram_path  = nullptr;
    const char* bench_name = "unknown";
    uint64_t    max_cycles = 200000000ULL; // 200 M — covers CoreMark × 1000
    uint64_t    iterations = 1000;
    bool        do_trace   = false;
    bool        do_jtag    = false;

    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--hex")  && i+1 < argc) { hex_path   = argv[++i]; }
        else if (!strcmp(argv[i], "--dram") && i+1 < argc) { dram_path = argv[++i]; }
        else if (!strcmp(argv[i], "--name") && i+1 < argc) { bench_name = argv[++i]; }
        else if (!strcmp(argv[i], "--max-cycles") && i+1 < argc) {
            max_cycles = (uint64_t)strtoull(argv[++i], nullptr, 10);
        }
        else if (!strcmp(argv[i], "--iterations") && i+1 < argc) {
            iterations = (uint64_t)strtoull(argv[++i], nullptr, 10);
        }
        else if (!strcmp(argv[i], "--trace")) { do_trace = true; }
        else if (!strcmp(argv[i], "--jtag"))  { do_jtag = true; }
    }

    if (!hex_path) {
        fprintf(stderr, "Usage: %s --hex <file.hex> --name <name> [--max-cycles N] [--iterations N] [--trace]\n",
                argv[0]);
        return 1;
    }

    // ---- Verilator init ---------------------------------------------------
    Verilated::commandArgs(argc, argv);
    Vbench_top* top = new Vbench_top;
    uint64_t main_time = 0;

#if VM_TRACE
    VerilatedVcdC* tfp = nullptr;
    if (do_trace) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        top->trace(tfp, 99);
        std::string vcd = std::string(bench_name) + ".vcd";
        tfp->open(vcd.c_str());
        fprintf(stderr, "[BENCH] Tracing to %s\n", vcd.c_str());
    }
#endif

    // ---- initialise memories BEFORE reset ---------------------------------
    // NOP-fill IMEM, then load the benchmark image
    for (uint32_t i = 0; i < 16384; i++)
        GET_IMEM(top, i) = 0x00000013u; // ADDI x0,x0,0
    zero_dram(top);
    if (dram_path) load_dram(top, dram_path);
    load_hex(top, hex_path);

    // ---- reset sequence (8 half-cycles = 4 full clocks) ------------------
    top->tck = 0; top->tms = 0; top->tdi = 0;
    top->rst = 1;
    top->clk = 0;
    for (int h = 0; h < 8; h++) {
        top->clk ^= 1;
        top->eval();
#if VM_TRACE
        if (tfp) tfp->dump(main_time);
#endif
        main_time++;
    }
    top->rst = 0;
    if (do_jtag) run_jtag_test(top);

    // ---- simulation loop --------------------------------------------------
    uint64_t    sim_cycles   = 0;
    uint64_t    bench_cycles = 0;   // cycle count reported by firmware
    uint64_t    cy_hi        = 0;   // upper 30 bits (side-channel)
    uint64_t    cy_lo        = 0;   // lower 30 bits (side-channel)
    bool        got_hi       = false;
    bool        got_lo       = false;
    int         exit_code    = 2;   // default: TIMEOUT

    while (!Verilated::gotFinish() && sim_cycles < max_cycles) {
        top->clk ^= 1;
        top->eval();
#if VM_TRACE
        if (tfp) tfp->dump(main_time);
#endif
        main_time++;

        if (top->clk) {   // rising edge
            sim_cycles++;

            if (top->tohost_we) {
                uint32_t val = top->tohost;

                // Side-channel: upper 30 bits of firmware cycle count
                if ((val & 0xC0000000u) == 0xC0000000u) {
                    cy_hi   = (uint64_t)(val & 0x3FFFFFFFu);
                    got_hi  = true;
                }
                // Side-channel: lower 30 bits
                else if ((val & 0xC0000000u) == 0x80000000u) {
                    cy_lo   = (uint64_t)(val & 0x3FFFFFFFu);
                    got_lo  = true;
                }
                // Character output from _write (0x5C0000xx)
                else if ((val & 0xFF000000u) == 0x5C000000u) {
                    putchar((char)(val & 0xFF));
                    fflush(stdout);
                }
                // PASS (1 = standard pass, 0 = clean C exit(0))
                else if (val == 1u || val == 0u) {
                    exit_code = 0;
                    if (got_hi && got_lo)
                        bench_cycles = (cy_hi << 30) | cy_lo;
                    break;
                }
                // FAIL
                else {
                    fprintf(stderr, "[BENCH] FAIL: tohost=0x%08X at cycle %" PRIu64 "\n",
                            val, sim_cycles);
                    exit_code = (int)val;
                    break;
                }
            }
        }
    }

    // ---- report -----------------------------------------------------------
    if (sim_cycles >= max_cycles && exit_code == 2) {
        fprintf(stderr, "[BENCH] TIMEOUT after %" PRIu64 " cycles\n", max_cycles);
    }

    // Primary output line — parsed by run_bench.py
    if (exit_code == 0) {
        if (bench_cycles > 0) {
            printf("[BENCH] %-24s  sim_cycles=%-12" PRIu64
                   "  bench_cycles=%-12" PRIu64 "  PASS\n",
                   bench_name, sim_cycles, bench_cycles);
        } else {
            // CoreMark reports via ee_printf; we only have sim_cycles
            printf("[BENCH] %-24s  sim_cycles=%-12" PRIu64 "  PASS\n",
                   bench_name, sim_cycles);
        }
        if (!strcmp(bench_name, "coremark")) {
            uint64_t cycles = (bench_cycles > 0) ? bench_cycles : sim_cycles;
            if (cycles > 0 && iterations > 0) {
                double cpi = (double)cycles / iterations;
                double cm_mhz = 1000000.0 / cpi;
                printf("[BENCH] CoreMark / MHz: %.4f\n", cm_mhz);
            }
        }
    } else {
        printf("[BENCH] %-24s  sim_cycles=%-12" PRIu64 "  FAIL(code=%d)\n",
               bench_name, sim_cycles, exit_code);
    }

#if VM_TRACE
    if (tfp) { tfp->close(); delete tfp; }
#endif
    top->final();
#if VM_COVERAGE
    Verilated::mkdir("sim");
    const char* cov_env = getenv("VERILATOR_COV_FILE");
    std::string cov_file = cov_env ? cov_env : "sim/coverage.dat";
    VerilatedCov::write(cov_file.c_str());
#endif
    delete top;
    return exit_code;
}
