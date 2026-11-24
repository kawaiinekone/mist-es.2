#!/usr/bin/env bash
# ============================================================================
# run_lint.sh — Strict Verilator (-Wall) lint check for MIST-ES RTL.
# Industry sign-off requirement: 0 warnings, 0 errors.
# ============================================================================
set -euo pipefail
cd "$(dirname "$0")/.."

echo "======================================================================="
echo "  MIST-ES Industry Verification: Verilator Strict Lint (-Wall)"
echo "======================================================================="

FLAGS="-Wall -sv -Irtl/common -Irtl --lint-only"
MODULES="rtl/common/mist_es_pkg.sv rtl/common/*.sv"

echo -n "[1/4] Linting mist_es_soc (SoC Top) ... "
verilator $FLAGS $MODULES rtl/mist_es_core.sv rtl/mist_es_debug.sv rtl/mist_es_soc.sv --top-module mist_es_soc
echo "PASS (0 warnings)"

echo -n "[2/4] Linting mist_es_core (Processor Core) ... "
verilator $FLAGS $MODULES rtl/mist_es_core.sv --top-module mist_es_core
echo "PASS (0 warnings)"

echo -n "[3/4] Linting mist_es_debug (RISC-V Debug Module) ... "
verilator $FLAGS $MODULES rtl/mist_es_debug.sv --top-module mist_es_debug
echo "PASS (0 warnings)"

echo -n "[4/5] Linting mist_es_axil_soc (AXI4-Lite Subsystem) ... "
verilator $FLAGS $MODULES rtl/mist_es_core.sv rtl/mist_es_axil.sv --top-module mist_es_axil_soc
echo "PASS (0 warnings)"

echo -n "[5/5] Linting bench_top [SECURE=1] (Secure SoC with PMP & ePMP) ... "
verilator $FLAGS -GSECURE=1\'b1 $MODULES rtl/mist_es_core.sv rtl/mist_es_debug.sv bench/verilator/bench_top.sv --top-module bench_top
echo "PASS (0 warnings)"

echo "-----------------------------------------------------------------------"
echo "All modules clean! Strict Lint sign-off: 0 warnings, 0 errors."
echo "======================================================================="
