# RISC-V Physical FPGA Hardware Benchmarking & Sign-Off Guide
**Target Cores:** `MIST-ES` (RV32I_Zicsr) & `3-SIPP-ESR` (RV32IMC_Zicsr)  
**Target Hardware:** Digilent Arty A7 (Artix-7 xc7a100tcsg324-1 / xc7a35ticsg324-1) & Custom FPGA Platforms  
**Operating Standard:** 20-Core Industrial Verification Baseline Framework  

---

## 1. Overview & Objectives

While simulation and logic synthesis provide theoretical PPA and functional verification, physical hardware execution is mandatory for final sign-off. This benchmark package deploys a bare-metal in-situ hardware workload directly into the FPGA Block RAM to measure:
1. **Real-Time Execution Speed:** Verifies cycle counts and throughput at actual silicon clock frequencies (50 MHz / 100 MHz).
2. **Oscilloscope Triggering & Dynamic Current Capture:** Uses a dedicated hardware GPIO strobe pin (`LED0`) to gate oscilloscope current probes and measure instantaneous switching power ($I_{dd}$ and $P_{\text{dyn}}$).
3. **Thermal Drift & Long-Duration Soak Testing:** Continuous stress loop to monitor timing margins and soft errors across temperature extremes (-40°C to +85°C).
4. **Physical Bus & Memory Latency:** Real-world BRAM read/write access times and peripheral response.

---

## 2. Hardware Memory Map & Peripheral Interface

Both `MIST-ES` and `3-SIPP-ESR` FPGA SoCs utilize the standardized address map below:

| Address Range | Device / Peripheral | Description | Hardware Pin / Behavior |
| :--- | :--- | :--- | :--- |
| `0x0000_0000` – `0x0001_FFFF` | Unified Block RAM | 128 KB unified code, rodata, data, and stack | Initialized at synthesis via `.mem` |
| `0x0200_0000` | CLINT (Core Local Interruptor) | `mtime` (0xBFF8), `mtimecmp`, `msip` | Hardware timer and software interrupts |
| `0x1000_0000` | Hardware UART | 115,200 baud, 8-N-1 (TX offset 0, RX offset 4) | Direct connection to USB-UART bridge |
| `0x2000_0000` | `tohost` Register | MMIO simulation & bring-up handshake | Pass/fail code output |
| `0x2000_1000` | GPIO / LED Control Register | 8-bit output register | Connected to board LEDs and test header |

### GPIO Pin Assignment for Laboratory Instrumentation:
- **Bit 0 (`LED0` / Arty Pin `H5`): Oscilloscope Trigger Strobe.**
  - Driven **HIGH** upon benchmark entry and pulled **LOW** upon benchmark exit.
  - Connect Oscilloscope Channel 1 probe here for hardware edge-triggering.
- **Bit 1 (`LED1` / Arty Pin `J5`): Heartbeat Monitor.**
  - Inverts state every 64 soak iterations to verify the CPU is active and not hung.
- **Bit 2 (`LED2` / Arty Pin `T9`): Sign-Off Pass Indicator.**
  - Driven **HIGH** once all mathematical and cryptographic checksums match golden vectors.
- **Bit 7 (`LED7` / Arty Pin `T10`): Error Assert Flag.**
  - Driven **HIGH** if an unhandled trap or memory corruption is detected.

---

## 3. Workload Compilation & Artifact Generation

The workload suite is located in [`audit_results/hw_benchmark/`](file:///home/shubhi/Downloads/audit_results/hw_benchmark/).

To build the firmware images for both cores:
```bash
cd /home/shubhi/Downloads/audit_results/hw_benchmark
make clean
make
```

### Generated Artifacts in `build/`:
- `hw_bench_mist_es.mem`: 32-bit word-addressed memory initialization file for `MIST-ES` (RV32I_Zicsr).
- `hw_bench_3sipp_esr.mem`: 32-bit word-addressed memory initialization file for `3-SIPP-ESR` (RV32IMC_Zicsr).
- `hw_bench_*.elf` / `hw_bench_*.dump`: Fully disassembled binaries for verification and symbolic debugging.

---

## 4. FPGA Bitstream Synthesis (Vivado Batch Flow)

### Step 4.1: Deploy to `MIST-ES`
```bash
# 1. Copy the generated memory image to the MIST-ES firmware path
cp /home/shubhi/Downloads/audit_results/hw_benchmark/build/hw_bench_mist_es.mem \
   /home/shubhi/Downloads/MIST-ES-main/sw/firmware.mem

# 2. Run Vivado batch synthesis and place-and-route
cd /home/shubhi/Downloads/MIST-ES-main/fpga/arty_a7
vivado -mode batch -source mist_es_arty_a7.tcl
# Generated bitstream: fpga/arty_a7/build/mist_es_arty_a7.bit
```

### Step 4.2: Deploy to `3-SIPP-ESR`
```bash
# 1. Copy the generated memory image to the 3-SIPP-ESR firmware path
cp /home/shubhi/Downloads/audit_results/hw_benchmark/build/hw_bench_3sipp_esr.mem \
   /home/shubhi/Downloads/3-SIPP-ESR-main/sw/firmware.mem

# 2. Run Vivado batch synthesis and place-and-route
cd /home/shubhi/Downloads/3-SIPP-ESR-main/fpga/arty_a7
vivado -mode batch -source three_sipp_es_arty_a7.tcl
# Generated bitstream: fpga/arty_a7/build/three_sipp_es_arty_a7.bit
```

---

## 5. FPGA Programming (openFPGALoader or Vivado)

Connect the Digilent Arty A7 to the host computer via micro-USB.

```bash
# Using openFPGALoader:
openFPGALoader -b arty_a7_100t /path/to/bitstream.bit

# Or using Vivado Hardware Manager in batch mode:
vivado -mode batch -source program.tcl -tclargs /path/to/bitstream.bit
```

---

## 6. Oscilloscope & Current Measurement Setup

To perform physical power and energy characterization:

```
+-------------------------------------------------------------------------------+
|                       LABORATORY INSTRUMENTATION SETUP                        |
+-------------------------------------------------------------------------------+
|                                                                               |
|   +-----------------------+              +-----------------------+            |
|   |   Digilent Arty A7    |              |      Oscilloscope     |            |
|   |                       |              |                       |            |
|   |  LED0 (Pin H5) [Strobe] ------------>| Ch 1: Ext Trigger     |            |
|   |                       |              |                       |            |
|   |  V_core Current Shunt |              |                       |            |
|   |  (Jumper JP1 / 10 mO) --------------->| Ch 2: V_shunt (P_dyn) |            |
|   |                       |              |                       |            |
|   |  USB-UART Bridge      |              +-----------------------+            |
|   |  (FT2232 /dev/ttyUSB1)                                                    |
|   +-----------|-----------+                                                   |
|               |                                                               |
|               v (115200 Baud)                                                 |
|   +-----------------------+                                                   |
|   | Host PC Test Console  |                                                   |
|   | (host_hw_runner.py)   |                                                   |
|   +-----------------------+                                                   |
+-------------------------------------------------------------------------------+
```

1. **Trigger Channel (Ch 1):**
   - Probe: 10x passive probe on Arty A7 Pin `H5` (`LED0`).
   - Trigger Mode: Single-shot, Rising Edge, Threshold = 1.65V.
2. **Current Measurement Channel (Ch 2):**
   - Probe: High-bandwidth differential probe across the board core power shunt (or inline current sensing resistor).
   - Sensitivity: 1 mV / 10 mA.
3. **Measurements Captured During Strobe High:**
   - $\Delta T$ (Pulse Width): Exact physical duration in milliseconds.
   - Mean Voltage across shunt $\implies$ Mean core current $I_{\text{core}}$.
   - Dynamic Energy: $E = V_{\text{core}} \times \int_{0}^{\Delta T} I(t) \, dt$.

---

## 7. Automated Host Telemetry Capture

Run the Python telemetry runner to capture the UART stream, verify results, and export CSV logs:

```bash
cd /home/shubhi/Downloads/audit_results/hw_benchmark

# For MIST-ES @ 50 MHz:
python3 host/host_hw_runner.py --core MIST-ES --freq 50.0 --port /dev/ttyUSB1

# For 3-SIPP-ESR @ 50 MHz:
python3 host/host_hw_runner.py --core 3-SIPP-ESR --freq 50.0 --port /dev/ttyUSB1
```

### Expected Telemetry Output on UART:
```text
====================================================================
   RISC-V PHYSICAL HARDWARE IN-SITU BENCHMARK SUITE
   Target Core: 3-SIPP-ESR (3-Stage In-Order RV32IMACB)
   Interface: UART 115200 8-N-1 | Oscilloscope Trigger: LED0 (Pin 0)
====================================================================

+----------------------------------+---------------+---------+--------------+
| Benchmark Kernel                 | Hardware Cyc  | Work CPI| Figure-of-Merit|
+----------------------------------+---------------+---------+--------------+
| CoreMark (10 Iterations)         | 33898 cyc     | 1.104   | 2.95 CM/MHz  |
| Dhrystone 2.1 (500 Passes)       | 32800 cyc     | 1.100   | 0.86 DMIPS/M |
| STREAM COPY (256 Words)          | 645 cyc       |   N/A   | 158.00 MB/s  |
| STREAM TRIAD (256 Words)         | 708 cyc       |   N/A   | 108.00 MB/s  |
| Crypto: ChaCha20 (64 Bytes)      | 262 cyc       | 1.050   | 4.10 cyc/byte|
| Crypto: SHA-256 (64 Bytes)       | 301 cyc       | 1.080   | 4.70 cyc/byte|
| DSP: 16-Tap FIR Filter           | 1324 cyc      | 1.020   | 0.58 MAC/cyc |
| MLPerf Tiny: KWS INT8 Layer      | 581 cyc       | 1.040   | 1721.00 inf/s|
+----------------------------------+---------------+---------+--------------+

>> HARDWARE VALIDATION SUMMARY:
   Sink Hash Checksum: 0x5DFB3A1C
   Status: [PASSED - HARDWARE SIGN-OFF OK]
   Signal: Asserting LED2 (SUCCESS) & Setting Heartbeat

>> Entering Continuous Soak Mode (Thermal & PVT Monitoring)...
```

---

## 8. Continuous Soak Loop & Thermal Drift Protocol

Once the primary benchmark completes, both cores automatically transition into **Continuous Soak Mode**:
1. Continuously executes CoreMark iterations in an infinite loop to maintain maximum dynamic gate switching.
2. The Heartbeat pin (`LED1`) toggles every 64 iterations.
3. Every 10,000 iterations, a heartbeat packet is emitted over UART.
4. **Thermal Chamber Test Protocol:**
   - Ramp temperature from -40°C to +85°C over 4 hours.
   - Hold at +85°C for 24 hours under continuous soak.
   - Verify zero parity/ECC errors, no watchdog resets, and consistent cycle counts across the thermal profile.
