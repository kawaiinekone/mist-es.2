# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vbench_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vbench_top \
	Vbench_top__1 \
	Vbench_top__2 \
	Vbench_top__3 \
	Vbench_top__4 \
	Vbench_top__5 \
	Vbench_top__6 \
	Vbench_top__7 \
	Vbench_top__8 \
	Vbench_top__9 \
	Vbench_top__10 \
	Vbench_top__11 \
	Vbench_top__12 \
	Vbench_top__13 \
	Vbench_top__14 \
	Vbench_top__15 \
	Vbench_top__16 \
	Vbench_top__17 \
	Vbench_top__18 \
	Vbench_top__19 \
	Vbench_top_mist_es_pmp__N8 \
	Vbench_top_mist_es_pmp__N8__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vbench_top__Slow \
	Vbench_top__1__Slow \
	Vbench_top__2__Slow \
	Vbench_top__3__Slow \
	Vbench_top__4__Slow \
	Vbench_top__5__Slow \
	Vbench_top__6__Slow \
	Vbench_top__7__Slow \
	Vbench_top__8__Slow \
	Vbench_top__9__Slow \
	Vbench_top__10__Slow \
	Vbench_top__11__Slow \
	Vbench_top__12__Slow \
	Vbench_top__13__Slow \
	Vbench_top__14__Slow \
	Vbench_top__15__Slow \
	Vbench_top_mist_es_pmp__N8__Slow \
	Vbench_top_mist_es_pmp__N8__1__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vbench_top__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vbench_top__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_cov \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
