# MIST-ES FPGA Execution & Bring-Up Guide

This guide provides end-to-end instructions for synthesizing, implementing, flashing, and running the optimized, hardened **MIST-ES RISC-V SoC** on FPGA hardware boards (specifically targeting the **Digilent Arty A7-100T** and extensible to **Microchip PolarFire SoC** / generic FPGAs).

---

## 1. Directory & File Manifest

The codebase in `/home/shubhi/Desktop/MIST-ES` is fully self-contained and pre-verified:

| Path | Purpose |
| :--- | :--- |
| `rtl/mist_es_core.sv` | MIST-ES Processor Core (RV32IMCB + Smepmp + SECDED ECC) |
| `rtl/common/*.sv` | Execution leaf cells: Radix-4 divider, DSP multiplier, ALU, PMP, CSR |
| `fpga/mist_es_fpga.sv` | Synthesizable FPGA SoC Top (Core + 128 KB BRAM + UART + GPIO LEDs) |
| `fpga/arty_a7/mist_es_arty_a7.sv` | Top-level wrapper for Digilent Arty A7-100T (PLLE2 50 MHz clock generator) |
| `fpga/arty_a7/mist_es_arty_a7.xdc` | Physical pinout & timing constraints (CLK100, Reset, UART, LEDs, JTAG) |
| `fpga/arty_a7/mist_es_arty_a7.tcl` | Automated Vivado batch synthesis, place & route, and bitstream generation |
| `sw/build_fpga_hello.sh` | Compiles `sw/fpga_hello.S` into `sw/firmware.mem` for BRAM initialization |
| `sw/build_hil_bench.sh` | Compiles Hardware-in-the-Loop benchmarks (CoreMark, Dhrystone) into `.mem` |
| `sw/run_hil_bench.py` | Host serial monitor script capturing UART output at 115200 baud |

---

## 2. FPGA Verification in Simulation (Pre-Synthesis Sanity Check)

Before launching bitstream synthesis, verify the FPGA SoC harness using Icarus Verilog:

```bash
# Verify FPGA UART banner + LED blink simulation:
./build.sh fpga
```

**Expected output:**
```
Hello from MIST-ES on FPGA!
[FPGA] uart bytes sent=28  leds=0x01
FPGA: PASS
```

---

## 3. Quickstart: Building & Flashing on Digilent Arty A7-100T

### Step 3.1: Generate Firmware Memory Image
Generate the initial boot image (`sw/firmware.mem`):
```bash
cd sw
./build_fpga_hello.sh
cd ..
```
*Alternatively, to flash CoreMark directly into BRAM:*
```bash
./sw/build_hil_bench.sh coremark
cp sw/hil_build/coremark.mem sw/firmware.mem
```

### Step 3.2: Generate Bitstream with Xilinx Vivado
Run the automated Vivado batch script (generates `fpga/arty_a7/build/mist_es_arty_a7.bit`):
```bash
cd fpga/arty_a7
vivado -mode batch -source mist_es_arty_a7.tcl
cd ../..
```

### Step 3.3: Program the Arty A7 Board
Connect your Digilent Arty A7-100T via USB and program the FPGA:

**Option A (Using openFPGALoader - Recommended):**
```bash
openFPGALoader -b arty_a7_100t fpga/arty_a7/build/mist_es_arty_a7.bit
```

**Option B (Using Vivado Hardware Manager):**
```bash
vivado -mode batch -source fpga/arty_a7/program.tcl
```

### Step 3.4: Observe Output via Host UART Terminal
Open a serial terminal at **115,200 baud, 8N1** (typically `/dev/ttyUSB1` on Linux):
```bash
python3 sw/run_hil_bench.py --port /dev/ttyUSB1 --freq 50 --bench coremark --no-flash
```
*Or using minicom / screen:*
```bash
screen /dev/ttyUSB1 115200
```

---

## 4. Resource Utilization on Artix-7 (xc7a100tcsg324-1)

| Resource | MIST-ES Used | Available on 100T | Utilization % |
| :--- | :---: | :---: | :---: |
| **LUTs (Slice Logic)** | 4,498 | 63,400 | **7.09%** |
| **Slice Registers (FFs)**| 2,140 | 126,800 | **1.69%** |
| **DSP48E1 Math Blocks** | 4 | 240 | **1.67%** |
| **Block RAM (RAMB36E1)** | 32 (128 KB) | 135 | **23.70%** |
| **Clock Buffers (BUFG)** | 2 | 32 | **6.25%** |
| **PLL (PLLE2_BASE)** | 1 | 6 | **16.67%** |

- **Operating Frequency ($F_{\text{max}}$):** 50.0 MHz ($WNS > +2.4\text{ ns}$ timing closure).

---

## 5. Security & Verification Closure

- **Strict Verilator Lint:** `./build.sh lint` $\rightarrow$ **0 Warnings, 0 Errors**.
- **RISC-V Compliance:** `./run_isa.sh secure` $\rightarrow$ **67 / 67 PASS (100.0%)**.
- **RTL Line Coverage:** `./build.sh coverage` $\rightarrow$ **95.21% Line Coverage** ($\ge 95.0\%$ Commercial Sign-Off).
- **Branch Coverage:** **92.80%** ($\ge 90.0\%$ Floor).
