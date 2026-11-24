#!/usr/bin/env python3
"""
host_hw_runner.py — Industrial FPGA Hardware Benchmark Runner & Telemetry Parser

Connects to FPGA physical hardware (Digilent Arty A7 / custom RISC-V development board)
via USB-UART, synchronizes execution, parses microarchitectural counters, and logs
validated hardware characterization results.
"""

import sys
import os
import time
import argparse
import datetime
import re
import csv

try:
    import serial
    import serial.tools.list_ports
    HAS_SERIAL = True
except ImportError:
    HAS_SERIAL = False


def detect_fpga_port():
    """Auto-detect FTDI / USB-UART serial interface."""
    if not HAS_SERIAL:
        return None
    ports = list(serial.tools.list_ports.comports())
    candidates = []
    for p in ports:
        # Typical FTDI FT2232 / CP2102 / CH340 on FPGA development boards
        if "ttyUSB" in p.device or "ttyACM" in p.device or "COM" in p.device:
            candidates.append(p.device)
    if candidates:
        candidates.sort()
        # On Arty A7 dual-channel FTDI, Channel B (second port) is UART
        return candidates[-1]
    return None


def run_hardware_bench(port, baud=115200, freq_mhz=50.0, core_name="MIST-ES", timeout_sec=60, output_dir="./results"):
    print("=" * 75)
    print("  RISC-V PHYSICAL HARDWARE BENCHMARK CAPTURE & TELEMETRY ENGINE")
    print(f"  Target Core:      {core_name}")
    print(f"  Clock Frequency:  {freq_mhz} MHz")
    print(f"  Serial Port:      {port} @ {baud} 8-N-1")
    print(f"  Oscilloscope:     Trigger on GPIO LED0 (Active-High)")
    print("=" * 75)

    if not HAS_SERIAL:
        print("\n[ERROR] pyserial is not installed. Run: pip install pyserial")
        sys.exit(1)

    if not port:
        print("\n[ERROR] No serial port detected. Connect the FPGA board and verify /dev/ttyUSB*.")
        sys.exit(1)

    os.makedirs(output_dir, exist_ok=True)
    timestamp = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")
    log_file = os.path.join(output_dir, f"hw_bench_{core_name.lower()}_{timestamp}.log")
    csv_file = os.path.join(output_dir, f"hw_bench_{core_name.lower()}_{timestamp}.csv")

    try:
        ser = serial.Serial(port, baud, timeout=1.0)
    except Exception as e:
        print(f"\n[ERROR] Failed to open port {port}: {e}")
        sys.exit(1)

    # Flush input buffer
    ser.reset_input_buffer()
    print("\n[INFO] Connected. Listening for UART streaming telemetry...\n")

    lines = []
    start_time = time.time()
    benchmark_complete = False

    with open(log_file, "w") as lf:
        while True:
            raw_line = ser.readline()
            if raw_line:
                line_str = raw_line.decode("utf-8", errors="replace").rstrip()
                print(line_str)
                lf.write(line_str + "\n")
                lf.flush()
                lines.append(line_str)

                if "HARDWARE VALIDATION SUMMARY" in line_str:
                    benchmark_complete = True
                if "Entering Continuous Soak Mode" in line_str:
                    print("\n[INFO] Benchmark execution completed successfully. Entering soak loop.")
                    break

            if time.time() - start_time > timeout_sec:
                print("\n[WARNING] Benchmark capture timed out.")
                break

    ser.close()

    # Parse Metrics from Log
    results = []
    table_regex = re.compile(r"^\|\s*([^|]+?)\s*\|\s*(\d+)\s*cyc\s*\|\s*([^|]+?)\s*\|\s*([^|]+?)\s*\|$")
    for line in lines:
        m = table_regex.match(line.strip())
        if m:
            bench_name = m.group(1).strip()
            cyc = int(m.group(2).strip())
            cpi = m.group(3).strip()
            fom = m.group(4).strip()
            # Calculate physical time in microseconds: (cyc / freq_mhz)
            time_us = cyc / freq_mhz
            results.append({
                "Benchmark": bench_name,
                "Cycles": cyc,
                "CPI": cpi,
                "Figure_of_Merit": fom,
                "Duration_us": f"{time_us:.2f}"
            })

    # Write CSV
    if results:
        with open(csv_file, "w", newline="") as cf:
            writer = csv.DictWriter(cf, fieldnames=["Benchmark", "Cycles", "CPI", "Figure_of_Merit", "Duration_us"])
            writer.writeheader()
            writer.writerows(results)
        print(f"\n[SUCCESS] Captured {len(results)} hardware benchmark metrics.")
        print(f"  Log File: {log_file}")
        print(f"  CSV File: {csv_file}")
    else:
        print("\n[INFO] Raw logs saved to:", log_file)


def main():
    parser = argparse.ArgumentParser(description="RISC-V Physical Hardware Benchmarking Telemetry Runner")
    parser.add_argument("--port", default=None, help="Serial port (/dev/ttyUSB1, COM3, etc.)")
    parser.add_argument("--baud", type=int, default=115200, help="Baud rate (default: 115200)")
    parser.add_argument("--freq", type=float, default=50.0, help="FPGA Core Clock Frequency in MHz (default: 50.0)")
    parser.add_argument("--core", default="MIST-ES", choices=["MIST-ES", "3-SIPP-ESR"], help="Target core name")
    parser.add_argument("--timeout", type=int, default=30, help="Capture timeout in seconds (default: 30)")
    parser.add_argument("--out", default="./results", help="Directory for output logs and CSVs")

    args = parser.parse_args()
    port = args.port or detect_fpga_port()
    run_hardware_bench(port, args.baud, args.freq, args.core, args.timeout, args.out)


if __name__ == "__main__":
    main()
