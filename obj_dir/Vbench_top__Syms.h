// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VBENCH_TOP__SYMS_H_
#define _VBENCH_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vbench_top.h"
#include "Vbench_top_mist_es_pmp__N8.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vbench_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vbench_top*                    TOPp;
    Vbench_top_mist_es_pmp__N8     TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if;
    Vbench_top_mist_es_pmp__N8     TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls;
    
    // COVERAGE
    uint32_t __Vcoverage[6755];
    
    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_bench_top;
    VerilatedScope __Vscope_bench_top__u_core;
    VerilatedScope __Vscope_bench_top__u_core__g_pmp;
    VerilatedScope __Vscope_bench_top__u_core__g_pmp__u_pmp_if;
    VerilatedScope __Vscope_bench_top__u_core__g_pmp__u_pmp_if__unnamedblk1;
    VerilatedScope __Vscope_bench_top__u_core__g_pmp__u_pmp_ls;
    VerilatedScope __Vscope_bench_top__u_core__g_pmp__u_pmp_ls__unnamedblk1;
    VerilatedScope __Vscope_bench_top__u_core__g_rf_ecc__u_rf;
    VerilatedScope __Vscope_bench_top__u_core__u_alu;
    VerilatedScope __Vscope_bench_top__u_core__u_br;
    VerilatedScope __Vscope_bench_top__u_core__u_csr;
    VerilatedScope __Vscope_bench_top__u_core__u_csr__unnamedblk1;
    VerilatedScope __Vscope_bench_top__u_core__u_dec;
    VerilatedScope __Vscope_bench_top__u_core__u_imm;
    VerilatedScope __Vscope_bench_top__u_core__u_md;
    VerilatedScope __Vscope_bench_top__u_core__u_rvc;
    VerilatedScope __Vscope_bench_top__u_dbg;
    
    // CREATORS
    Vbench_top__Syms(Vbench_top* topp, const char* namep);
    ~Vbench_top__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
