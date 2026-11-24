// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbench_top.h for the primary calling header

#ifndef _VBENCH_TOP_MIST_ES_PMP__N8_H_
#define _VBENCH_TOP_MIST_ES_PMP__N8_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "Vbench_top__Dpi.h"

//==========

class Vbench_top__Syms;

//----------

VL_MODULE(Vbench_top_mist_es_pmp__N8) {
  public:
    
    // PORTS
    VL_IN8(priv_m,0,0);
    VL_IN8(mmwp,0,0);
    VL_IN8(mml,0,0);
    VL_IN8(do_r,0,0);
    VL_IN8(do_w,0,0);
    VL_IN8(do_x,0,0);
    VL_OUT8(fault,0,0);
    VL_INW(addrreg,255,0,8);
    VL_IN(addr,31,0);
    VL_IN64(cfg,63,0);
    
    // LOCAL SIGNALS
    CData/*7:0*/ match;
    CData/*7:0*/ allow;
    CData/*0:0*/ matched;
    CData/*0:0*/ sel_allow;
    CData/*7:0*/ unnamedblk1__DOT__c;
    CData/*1:0*/ unnamedblk1__DOT__A;
    CData/*0:0*/ unnamedblk1__DOT__L;
    CData/*0:0*/ unnamedblk1__DOT__X;
    CData/*0:0*/ unnamedblk1__DOT__W;
    CData/*0:0*/ unnamedblk1__DOT__R;
    CData/*0:0*/ unnamedblk1__DOT__perm;
    CData/*5:0*/ unnamedblk1__DOT__mp;
    CData/*2:0*/ unnamedblk1__DOT__rwx;
    IData/*31:0*/ i;
    IData/*31:0*/ unnamedblk1__DOT__pa;
    IData/*31:0*/ unnamedblk1__DOT__pa_prev;
    IData/*31:0*/ unnamedblk1__DOT__m;
    IData/*31:0*/ unnamedblk1__DOT__aw;
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vtogcov__priv_m;
    CData/*0:0*/ __Vtogcov__mmwp;
    CData/*0:0*/ __Vtogcov__mml;
    CData/*0:0*/ __Vtogcov__do_r;
    CData/*0:0*/ __Vtogcov__do_w;
    CData/*0:0*/ __Vtogcov__do_x;
    CData/*0:0*/ __Vtogcov__fault;
    CData/*7:0*/ __Vtogcov__match;
    CData/*7:0*/ __Vtogcov__allow;
    CData/*0:0*/ __Vtogcov__matched;
    CData/*0:0*/ __Vtogcov__sel_allow;
    CData/*5:0*/ __Vfunc_mml_perm__0__Vfuncout;
    CData/*3:0*/ __Vfunc_mml_perm__0__lrwx;
    CData/*5:0*/ __Vfunc_mml_perm__1__Vfuncout;
    CData/*3:0*/ __Vfunc_mml_perm__1__lrwx;
    WData/*255:0*/ __Vtogcov__addrreg[8];
    IData/*31:0*/ __Vtogcov__addr;
    QData/*63:0*/ __Vtogcov__cfg;
    
    // INTERNAL VARIABLES
  private:
    Vbench_top__Syms* __VlSymsp;  // Symbol table
  public:
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vbench_top_mist_es_pmp__N8);  ///< Copying not allowed
  public:
    Vbench_top_mist_es_pmp__N8(const char* name = "TOP");
    ~Vbench_top_mist_es_pmp__N8();
    
    // INTERNAL METHODS
    void __Vconfigure(Vbench_top__Syms* symsp, bool first);
    void _combo__TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if__3(Vbench_top__Syms* __restrict vlSymsp);
    void _combo__TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if__5(Vbench_top__Syms* __restrict vlSymsp);
    void _combo__TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls__4(Vbench_top__Syms* __restrict vlSymsp);
    void _combo__TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls__6(Vbench_top__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vbench_top__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _settle__TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if__1(Vbench_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls__2(Vbench_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
