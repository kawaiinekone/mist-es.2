# ==============================================================================
# Makefile — Hardware Benchmark Suite for MIST-ES & 3-SIPP-ESR
# ==============================================================================

CC      := /home/shubhi/bin/riscv-none-elf-gcc
OBJCOPY := riscv64-linux-gnu-objcopy
OBJDUMP := riscv64-linux-gnu-objdump
PYTHON  := python3

BUILD_DIR := build
SRC_DIR   := src

COMMON_FLAGS := -O2 -g -Wall -ffreestanding -fno-pic -fno-pie \
                -fno-stack-protector -nostdlib -nostartfiles \
                -Wl,--no-relax -Wl,-gc-sections \
                -I$(SRC_DIR) -T $(SRC_DIR)/link_hw.ld

LIBGCC := /home/shubhi/bin/libgcc_rv32.a

all: $(BUILD_DIR)/hw_bench_mist_es.mem $(BUILD_DIR)/hw_bench_3sipp_esr.mem

# ---- MIST-ES Target (RV32I_Zicsr) -------------------------------------------
$(BUILD_DIR)/hw_bench_mist_es.elf: $(SRC_DIR)/crt0_hw.S $(SRC_DIR)/hw_benchmark_suite.c $(SRC_DIR)/link_hw.ld
	@mkdir -p $(BUILD_DIR)
	$(CC) -march=rv32i_zicsr -mabi=ilp32 -DTARGET_MIST_ES \
		$(COMMON_FLAGS) $(SRC_DIR)/crt0_hw.S $(SRC_DIR)/hw_benchmark_suite.c \
		$(LIBGCC) -o $@
	$(OBJDUMP) -d -S $@ > $(BUILD_DIR)/hw_bench_mist_es.dump

$(BUILD_DIR)/hw_bench_mist_es.bin: $(BUILD_DIR)/hw_bench_mist_es.elf
	$(OBJCOPY) -O binary $< $@

$(BUILD_DIR)/hw_bench_mist_es.mem: $(BUILD_DIR)/hw_bench_mist_es.bin
	$(PYTHON) $(SRC_DIR)/bin2hex.py $< $@
	@echo "[SUCCESS] Generated MIST-ES Hardware Firmware Image: $@"

# ---- 3-SIPP-ESR Target (RV32IMC_Zicsr) --------------------------------------
$(BUILD_DIR)/hw_bench_3sipp_esr.elf: $(SRC_DIR)/crt0_hw.S $(SRC_DIR)/hw_benchmark_suite.c $(SRC_DIR)/link_hw.ld
	@mkdir -p $(BUILD_DIR)
	$(CC) -march=rv32imc_zicsr -mabi=ilp32 -DTARGET_3SIPP_ESR \
		$(COMMON_FLAGS) $(SRC_DIR)/crt0_hw.S $(SRC_DIR)/hw_benchmark_suite.c \
		$(LIBGCC) -o $@
	$(OBJDUMP) -d -S $@ > $(BUILD_DIR)/hw_bench_3sipp_esr.dump

$(BUILD_DIR)/hw_bench_3sipp_esr.bin: $(BUILD_DIR)/hw_bench_3sipp_esr.elf
	$(OBJCOPY) -O binary $< $@

$(BUILD_DIR)/hw_bench_3sipp_esr.mem: $(BUILD_DIR)/hw_bench_3sipp_esr.bin
	$(PYTHON) $(SRC_DIR)/bin2hex.py $< $@
	@echo "[SUCCESS] Generated 3-SIPP-ESR Hardware Firmware Image: $@"

# ---- Verification in Verilator Simulation -----------------------------------
sim_mist_es: $(BUILD_DIR)/hw_bench_mist_es.bin
	@echo "Running pre-silicon verification of MIST-ES hardware workload..."
	/tmp/mist_es_sim_shubhi/Vbench_obj/Vbench_top --imem $(BUILD_DIR)/hw_bench_mist_es.bin --dmem $(BUILD_DIR)/hw_bench_mist_es.bin --cycles 5000000

sim_3sipp_esr: $(BUILD_DIR)/hw_bench_3sipp_esr.hex
	@echo "Running pre-silicon verification of 3-SIPP-ESR hardware workload..."
	/tmp/3sipp_sim/Vthree_sipp_es_soc +imem=$(BUILD_DIR)/hw_bench_3sipp_esr.hex +dmem=$(BUILD_DIR)/hw_bench_3sipp_esr.hex +max-cycles=5000000

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean sim_mist_es sim_3sipp_esr
