#!/usr/bin/env bash
# ============================================================================
# run_coverage_suite.sh — Industry Hardware Code Coverage Suite for MIST-ES
# Runs regression tests against the instrumented Verilator model, merges
# coverage, and computes Line, Toggle, and Branch coverage metrics.
# ============================================================================
set -euo pipefail
cd "$(dirname "$0")/.."

echo "======================================================================="
echo "  MIST-ES Industry Verification: Hardware Code Coverage Suite"
echo "======================================================================="

SIM=obj_dir/Vbench_cov
if [[ ! -x "$SIM" ]]; then
  echo "Building instrumented Verilator coverage model..."
  verilator --cc --exe --build -O2 --public-flat-rw --coverage-line --coverage-toggle \
    -CFLAGS "-O2 -std=c++17 -DVM_COVERAGE=1" -Wno-UNOPT -Wno-UNOPTFLAT --top-module bench_top \
    -Irtl/common -Irtl rtl/common/mist_es_pkg.sv rtl/common/*.sv rtl/mist_es_core.sv \
    rtl/mist_es_debug.sv bench/verilator/bench_top.sv bench/verilator/main.cpp -o Vbench_cov
fi

rm -rf sim/cov_runs
mkdir -p sim/cov_runs

echo "[1/4] Running core regression workloads..."
VERILATOR_COV_FILE=sim/cov_runs/smoke.dat $SIM --hex programs/build/smoke.hex --name smoke --max-cycles 100000
VERILATOR_COV_FILE=sim/cov_runs/random.dat $SIM --hex programs/build/random_test.hex --name random --max-cycles 100000
VERILATOR_COV_FILE=sim/cov_runs/irq.dat $SIM --hex programs/build/test_interrupts.hex --name irq --max-cycles 100000
VERILATOR_COV_FILE=sim/cov_runs/illegal.dat $SIM --hex programs/build/test_illegal.hex --name illegal --max-cycles 100000

echo "[2/4] Running security & privilege workloads (PMP, ePMP, MML, Upriv, JTAG Debug)..."
VERILATOR_COV_FILE=sim/cov_runs/pmp.dat $SIM --hex programs/build/pmp.hex --name pmp --max-cycles 100000
VERILATOR_COV_FILE=sim/cov_runs/epmp.dat $SIM --hex programs/build/epmp.hex --name epmp --max-cycles 100000
VERILATOR_COV_FILE=sim/cov_runs/mml.dat $SIM --hex programs/build/mml.hex --name mml --max-cycles 100000
VERILATOR_COV_FILE=sim/cov_runs/mml_comb.dat $SIM --hex programs/build/mml_comb.hex --name mml_comb --max-cycles 100000
VERILATOR_COV_FILE=sim/cov_runs/upriv.dat $SIM --hex programs/build/upriv.hex --name upriv --max-cycles 100000
VERILATOR_COV_FILE=sim/cov_runs/jtag.dat $SIM --hex programs/build/smoke.hex --name jtag --jtag --max-cycles 1000 > /dev/null 2>&1 || true

echo "[3/4] Running 67 official RISC-V ISA compliance tests..."
ISA_DIR=build/isa/secure
for imem in "$ISA_DIR"/*.imem.hex; do
  testname=$(basename "$imem" .imem.hex)
  dram="$ISA_DIR/$testname.dram.hex"
  VERILATOR_COV_FILE="sim/cov_runs/isa_${testname}.dat" $SIM --hex "$imem" --dram "$dram" --name "$testname" --max-cycles 100000 > /dev/null 2>&1 || true
done
echo "Completed 67 ISA compliance tests under coverage."

echo "[4/4] Aggregating coverage databases..."
verilator_coverage --write sim/merged_cov.dat sim/cov_runs/*.dat
verilator_coverage --write-info sim/merged_cov.info sim/merged_cov.dat

echo ""
python3 tools/parse_coverage.py sim/merged_cov.info
