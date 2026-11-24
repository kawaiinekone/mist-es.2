// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench_top.h for the primary calling header

#include "Vbench_top.h"
#include "Vbench_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vbench_top) {
    Vbench_top__Syms* __restrict vlSymsp = __VlSymsp = new Vbench_top__Syms(this, name());
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if, Vbench_top_mist_es_pmp__N8);
    VL_CELL(__PVT__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls, Vbench_top_mist_es_pmp__N8);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vbench_top::__Vconfigure(Vbench_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vbench_top::~Vbench_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

// Coverage
void Vbench_top::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void Vbench_top::_settle__TOP__1(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_settle__TOP__1\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    ++(vlSymsp->__Vcoverage[2150]);
    ++(vlSymsp->__Vcoverage[2877]);
    ++(vlSymsp->__Vcoverage[2918]);
    ++(vlSymsp->__Vcoverage[3040]);
    ++(vlSymsp->__Vcoverage[3040]);
    ++(vlSymsp->__Vcoverage[3201]);
    ++(vlSymsp->__Vcoverage[3579]);
    ++(vlSymsp->__Vcoverage[3672]);
    ++(vlSymsp->__Vcoverage[3681]);
    ++(vlSymsp->__Vcoverage[3791]);
    ++(vlSymsp->__Vcoverage[4405]);
    ++(vlSymsp->__Vcoverage[5252]);
    ++(vlSymsp->__Vcoverage[5252]);
    ++(vlSymsp->__Vcoverage[5252]);
    ++(vlSymsp->__Vcoverage[5252]);
    ++(vlSymsp->__Vcoverage[5252]);
    ++(vlSymsp->__Vcoverage[5252]);
    ++(vlSymsp->__Vcoverage[5252]);
    ++(vlSymsp->__Vcoverage[5252]);
    ++(vlSymsp->__Vcoverage[5253]);
    ++(vlSymsp->__Vcoverage[5445]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5588]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5584]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5581]);
    ++(vlSymsp->__Vcoverage[5587]);
    ++(vlSymsp->__Vcoverage[5588]);
    ++(vlSymsp->__Vcoverage[5988]);
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__unnamedblk1__DOT__k = 1U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__unnamedblk1__DOT__k = 2U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__unnamedblk1__DOT__k = 3U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__unnamedblk1__DOT__k = 4U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__unnamedblk1__DOT__k = 5U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__unnamedblk1__DOT__k = 6U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__unnamedblk1__DOT__k = 7U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__unnamedblk1__DOT__k = 8U;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3580]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3581]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3582]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3583]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3584]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3585]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3586]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3587]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3588]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3589]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3590]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3591]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3592]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3593]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3594]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3595]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3596]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3597]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3598]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3599]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3600]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3601]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3602]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3603]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3604]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3605]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3606]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3607]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3608]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3609]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3610]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y))) {
        ++(vlSymsp->__Vcoverage[3611]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__y) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.do_x = 1U;
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.do_w = 0U;
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.do_r = 0U;
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.do_x = 0U;
    vlTOPp->bench_top__DOT__u_core__DOT__alu_y = vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y;
    if (((IData)(vlTOPp->clk) ^ vlTOPp->bench_top__DOT____Vtogcov__clk)) {
        ++(vlSymsp->__Vcoverage[0]);
        vlTOPp->bench_top__DOT____Vtogcov__clk = vlTOPp->clk;
    }
    if (((IData)(vlTOPp->rst) ^ vlTOPp->bench_top__DOT____Vtogcov__rst)) {
        ++(vlSymsp->__Vcoverage[1]);
        vlTOPp->bench_top__DOT____Vtogcov__rst = vlTOPp->rst;
    }
    if (((IData)(vlTOPp->tck) ^ vlTOPp->bench_top__DOT____Vtogcov__tck)) {
        ++(vlSymsp->__Vcoverage[2]);
        vlTOPp->bench_top__DOT____Vtogcov__tck = vlTOPp->tck;
    }
    if (((IData)(vlTOPp->tms) ^ vlTOPp->bench_top__DOT____Vtogcov__tms)) {
        ++(vlSymsp->__Vcoverage[3]);
        vlTOPp->bench_top__DOT____Vtogcov__tms = vlTOPp->tms;
    }
    if (((IData)(vlTOPp->tdi) ^ vlTOPp->bench_top__DOT____Vtogcov__tdi)) {
        ++(vlSymsp->__Vcoverage[4]);
        vlTOPp->bench_top__DOT____Vtogcov__tdi = vlTOPp->tdi;
    }
    vlTOPp->bench_top__DOT__rst = vlTOPp->rst;
    vlTOPp->bench_top__DOT__tck = vlTOPp->tck;
    vlTOPp->bench_top__DOT__tms = vlTOPp->tms;
    vlTOPp->bench_top__DOT__tdi = vlTOPp->tdi;
    vlTOPp->bench_top__DOT__clk = vlTOPp->clk;
    if ((1U & (~ ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
                  | (5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))))) {
        if ((3U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
            ++(vlSymsp->__Vcoverage[2874]);
        }
    }
    if (((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
         | (5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
        ++(vlSymsp->__Vcoverage[2876]);
    }
    if ((1U & (~ ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
                  | (5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))))) {
        if ((3U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
            ++(vlSymsp->__Vcoverage[2875]);
        }
    }
    if ((1U & (~ ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)) 
                  | (1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)))))) {
        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))) {
            ++(vlSymsp->__Vcoverage[3790]);
        }
    }
    if (((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)) 
         | (1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)))) {
        ++(vlSymsp->__Vcoverage[3788]);
    }
    if ((1U & (~ ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)) 
                  | (1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)))))) {
        if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))) {
            ++(vlSymsp->__Vcoverage[3789]);
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__msip) ^ vlTOPp->bench_top__DOT____Vtogcov__msip)) {
        ++(vlSymsp->__Vcoverage[366]);
        vlTOPp->bench_top__DOT____Vtogcov__msip = vlTOPp->bench_top__DOT__msip;
    }
    if (((IData)(vlTOPp->bench_top__DOT__mem_stall_q) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__mem_stall_q)) {
        ++(vlSymsp->__Vcoverage[552]);
        vlTOPp->bench_top__DOT____Vtogcov__mem_stall_q 
            = vlTOPp->bench_top__DOT__mem_stall_q;
    }
    if (((IData)(vlTOPp->bench_top__DOT__tohost_we_r) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_we_r)) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_we_r 
            = vlTOPp->bench_top__DOT__tohost_we_r;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_done) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_done)) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_done 
            = vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_done;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_mode)) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_mode 
            = vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_ebreakm) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_ebreakm)) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_ebreakm 
            = vlTOPp->bench_top__DOT__u_core__DOT__dcsr_ebreakm;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_busy) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_busy)) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_busy 
            = vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_busy;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_pending) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__step_pending)) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__step_pending 
            = vlTOPp->bench_top__DOT__u_core__DOT__step_pending;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_seen) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__step_seen)) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__step_seen 
            = vlTOPp->bench_top__DOT__u_core__DOT__step_seen;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__instr 
        = vlTOPp->bench_top__DOT__u_core__DOT__instr;
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__instr 
        = vlTOPp->bench_top__DOT__u_core__DOT__instr;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__done) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__done)) {
        ++(vlSymsp->__Vcoverage[3684]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__done 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__done;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__neg_quot) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__neg_quot)) {
        ++(vlSymsp->__Vcoverage[4186]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__neg_quot 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__neg_quot;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__neg_rem) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__neg_rem)) {
        ++(vlSymsp->__Vcoverage[4187]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__neg_rem 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__neg_rem;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_by_zero) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__div_by_zero)) {
        ++(vlSymsp->__Vcoverage[4188]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__div_by_zero 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_by_zero;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_overflow) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__div_overflow)) {
        ++(vlSymsp->__Vcoverage[4189]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__div_overflow 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_overflow;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__bypass_bit) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__bypass_bit)) {
        ++(vlSymsp->__Vcoverage[5908]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__bypass_bit 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__bypass_bit;
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__state))) {
        ++(vlSymsp->__Vcoverage[3717]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__state 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__state))) {
        ++(vlSymsp->__Vcoverage[3718]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__state 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__priv))) {
        ++(vlSymsp->__Vcoverage[5084]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__priv 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__priv)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__priv))) {
        ++(vlSymsp->__Vcoverage[5085]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__priv 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__priv)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tck_s) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tck_s))) {
        ++(vlSymsp->__Vcoverage[5781]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tck_s 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tck_s)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tck_s)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tck_s) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tck_s))) {
        ++(vlSymsp->__Vcoverage[5782]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tck_s 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tck_s)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tck_s)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_s) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tms_s))) {
        ++(vlSymsp->__Vcoverage[5783]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tms_s 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tms_s)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_s)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_s) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tms_s))) {
        ++(vlSymsp->__Vcoverage[5784]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tms_s 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tms_s)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_s)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_s) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tdi_s))) {
        ++(vlSymsp->__Vcoverage[5785]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tdi_s 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tdi_s)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_s)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_s) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tdi_s))) {
        ++(vlSymsp->__Vcoverage[5786]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tdi_s 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tdi_s)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_s)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_cause))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_cause 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_cause)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_cause)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_cause))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_cause 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_cause)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_cause)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_cause))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_cause 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_cause)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_cause)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__instr_len) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr_len))) {
        ++(vlSymsp->__Vcoverage[1448]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr_len 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr_len)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__instr_len)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__instr_len) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr_len))) {
        ++(vlSymsp->__Vcoverage[1449]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr_len 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr_len)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__instr_len)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__instr_len) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr_len))) {
        ++(vlSymsp->__Vcoverage[1450]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr_len 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr_len)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__instr_len)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__op_q))) {
        ++(vlSymsp->__Vcoverage[3719]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__op_q 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__op_q)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__op_q))) {
        ++(vlSymsp->__Vcoverage[3720]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__op_q 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__op_q)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__op_q))) {
        ++(vlSymsp->__Vcoverage[3721]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__op_q 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__op_q)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mseccfg))) {
        ++(vlSymsp->__Vcoverage[5214]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mseccfg 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mseccfg)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mseccfg))) {
        ++(vlSymsp->__Vcoverage[5215]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mseccfg 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mseccfg)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mseccfg))) {
        ++(vlSymsp->__Vcoverage[5216]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mseccfg 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mseccfg)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__state))) {
        ++(vlSymsp->__Vcoverage[1307]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__state 
            = ((0xeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__state))) {
        ++(vlSymsp->__Vcoverage[1308]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__state 
            = ((0xdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__state))) {
        ++(vlSymsp->__Vcoverage[1309]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__state 
            = ((0xbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__state))) {
        ++(vlSymsp->__Vcoverage[1310]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__state 
            = ((7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__state)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__bit_idx))) {
        ++(vlSymsp->__Vcoverage[4052]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__bit_idx 
            = ((0xeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__bit_idx)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__bit_idx))) {
        ++(vlSymsp->__Vcoverage[4053]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__bit_idx 
            = ((0xdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__bit_idx)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__bit_idx))) {
        ++(vlSymsp->__Vcoverage[4054]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__bit_idx 
            = ((0xbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__bit_idx)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__bit_idx))) {
        ++(vlSymsp->__Vcoverage[4055]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__bit_idx 
            = ((7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__bit_idx)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb 
        = (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                 >> 2U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked = 0U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked 
        = (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked) 
                 | (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                    >> 7U)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked 
        = (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked) 
                 | (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                    >> 0xfU)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked 
        = (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked) 
                 | (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                    >> 0x17U)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked 
        = (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked) 
                 | (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                    >> 0x1fU)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked 
        = (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked) 
                 | (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                    >> 7U)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked 
        = (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked) 
                 | (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                    >> 0xfU)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked 
        = (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked) 
                 | (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                    >> 0x17U)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked 
        = (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked) 
                 | (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                    >> 0x1fU)));
    vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q = (1U 
                                                 & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_s) 
                                                    >> 1U));
    vlTOPp->bench_top__DOT__tohost_we = vlTOPp->bench_top__DOT__tohost_we_r;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1451]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xfffeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1452]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xfffdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1453]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xfffbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1454]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xfff7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1455]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xffefU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1456]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xffdfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1457]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xffbfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1458]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xff7fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1459]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xfeffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1460]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xfdffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1461]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xfbffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1462]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xf7ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((0x1000U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1463]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xefffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (0x1000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((0x2000U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1464]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xdfffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (0x2000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((0x4000U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1465]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0xbfffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (0x4000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    if ((0x8000U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16) 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16))) {
        ++(vlSymsp->__Vcoverage[1466]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16 
            = ((0x7fffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lo16)) 
               | (0x8000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__busy 
        = (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state));
    if ((1U & (vlTOPp->bench_top__DOT__tohost_r ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (1U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((2U & (vlTOPp->bench_top__DOT__tohost_r ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (2U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((4U & (vlTOPp->bench_top__DOT__tohost_r ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (4U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((8U & (vlTOPp->bench_top__DOT__tohost_r ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (8U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__tohost_r 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x10U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__tohost_r 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x20U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__tohost_r 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x40U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__tohost_r 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x80U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__tohost_r 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x100U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__tohost_r 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x200U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__tohost_r 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x400U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__tohost_r 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x800U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__tohost_r 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x1000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__tohost_r 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x2000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__tohost_r 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x4000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__tohost_r 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x8000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__tohost_r 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x10000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__tohost_r 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x20000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__tohost_r 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x40000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__tohost_r 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x80000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__tohost_r 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x100000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__tohost_r 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x200000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__tohost_r 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x400000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__tohost_r 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x800000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__tohost_r 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x1000000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__tohost_r 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x2000000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__tohost_r 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x4000000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__tohost_r 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x8000000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__tohost_r 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x10000000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__tohost_r 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x20000000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__tohost_r 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x40000000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__tohost_r 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_r))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_r 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost_r) 
               | (0x80000000U & vlTOPp->bench_top__DOT__tohost_r));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1313]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1314]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1332]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1333]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1334]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1335]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1336]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1337]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1338]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1339]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1341]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1342]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dpc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc))) {
        ++(vlSymsp->__Vcoverage[1343]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dpc) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__dpc));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1344]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1345]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1346]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1347]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1351]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1352]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1353]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1354]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1355]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1356]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1357]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1358]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1359]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1360]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1361]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1362]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1363]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1364]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1365]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1366]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1367]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1368]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1369]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1370]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1371]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1373]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1374]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dscratch0) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__dscratch0));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1410]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1411]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1413]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1414]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[1415]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pc) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__pc));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1416]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1417]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1418]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1419]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1420]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1421]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1422]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1423]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1424]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1425]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1426]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1427]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1428]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1429]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1430]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1431]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1432]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1433]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1434]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1435]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1436]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1437]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1438]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1439]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1440]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1441]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1442]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1443]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1444]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1445]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1446]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[1447]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__instr) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__instr));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2518]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2519]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2520]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2521]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2522]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2523]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2524]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2525]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2526]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2527]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2528]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2529]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2530]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2531]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2532]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2533]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2534]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2535]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2536]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2537]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2538]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2539]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2540]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2541]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2542]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2543]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2544]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2545]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2546]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2547]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2548]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0))) {
        ++(vlSymsp->__Vcoverage[2549]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_w0) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__ld_w0));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3685]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3686]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3687]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3688]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3689]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3690]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3691]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3692]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3693]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3694]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3695]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3696]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3697]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3698]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3699]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3700]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3701]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3702]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3703]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3704]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3705]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3706]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3707]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3708]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3709]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3710]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3711]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3712]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3713]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3714]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3715]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result))) {
        ++(vlSymsp->__Vcoverage[3716]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__result) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3722]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3723]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3724]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3725]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3726]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3727]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3728]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3729]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3730]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3731]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3732]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3733]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3734]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3735]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3736]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3737]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3738]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3739]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3740]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3741]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3742]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3743]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3744]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3745]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3746]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3747]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3748]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3749]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3750]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3751]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3752]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q))) {
        ++(vlSymsp->__Vcoverage[3753]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_q) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3754]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3755]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3756]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3757]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3758]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3759]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3760]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3761]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3762]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3763]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3764]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3765]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3766]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3767]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3768]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3769]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3770]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3771]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3772]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3773]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3774]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3775]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3776]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3777]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3778]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3779]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3780]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3781]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3782]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3783]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3784]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q))) {
        ++(vlSymsp->__Vcoverage[3785]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_q) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4056]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4057]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4058]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4059]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4060]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4061]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4062]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4063]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4064]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4065]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4066]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4067]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4068]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4069]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4070]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4071]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4072]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4073]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4074]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4075]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4076]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4077]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4078]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4079]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4080]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4081]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4082]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4083]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4084]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4085]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4086]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag))) {
        ++(vlSymsp->__Vcoverage[4087]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_mag) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4088]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4089]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4090]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4091]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4092]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4093]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4094]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4095]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4096]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4097]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4098]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4099]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4100]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4101]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4102]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4103]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4104]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4105]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4106]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4107]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4108]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4109]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4110]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4111]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4112]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4113]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4114]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4115]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4116]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4117]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4118]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag))) {
        ++(vlSymsp->__Vcoverage[4119]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__divisor_mag) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4120]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4121]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4122]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4123]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4124]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4125]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4126]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4127]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4128]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4129]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4130]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4131]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4132]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4133]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4134]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4135]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4136]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4137]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4138]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4139]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4140]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4141]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4142]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4143]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4144]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4145]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4146]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4147]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4148]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4149]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4150]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q))) {
        ++(vlSymsp->__Vcoverage[4151]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__quotient_q) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4190]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4191]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4192]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4193]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4194]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4195]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4196]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4197]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4198]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4199]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4200]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4201]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4202]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4203]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4204]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4205]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4206]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4207]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4208]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4209]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4210]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4211]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4212]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4213]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4214]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4215]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4216]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4217]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4218]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4219]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4220]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw))) {
        ++(vlSymsp->__Vcoverage[4221]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__dividend_raw) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4732]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4733]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4734]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4735]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4736]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4737]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4738]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4739]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4740]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4741]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4742]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4743]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4744]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4745]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4746]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4747]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4748]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4749]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4750]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4751]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4752]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4753]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4754]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4755]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4756]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4757]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4758]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4759]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4760]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4761]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4762]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus))) {
        ++(vlSymsp->__Vcoverage[4763]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mstatus) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4764]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4765]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4766]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4767]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4768]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4769]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4770]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4771]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4772]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4773]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4774]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4775]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4776]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4777]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4778]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4779]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4780]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4781]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4782]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4783]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4784]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4785]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4786]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4787]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4788]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4789]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4790]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4791]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4792]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4793]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4794]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec))) {
        ++(vlSymsp->__Vcoverage[4795]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4796]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4797]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4798]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4799]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4800]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4801]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4802]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4803]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4804]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4805]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4806]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4807]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4808]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4809]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4810]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4811]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4812]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4813]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4814]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4815]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4816]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4817]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4818]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4819]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4820]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4821]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4822]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4823]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4824]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4825]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4826]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc))) {
        ++(vlSymsp->__Vcoverage[4827]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4828]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4829]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4830]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4831]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4832]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4833]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4834]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4835]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4836]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4837]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4838]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4839]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4840]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4841]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4842]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4843]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4844]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4845]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4846]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4847]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4848]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4849]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4850]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4851]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4852]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4853]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4854]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4855]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4856]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4857]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4858]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause))) {
        ++(vlSymsp->__Vcoverage[4859]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcause) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4860]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4861]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4862]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4863]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4864]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4865]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4866]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4867]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4868]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4869]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4870]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4871]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4872]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4873]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4874]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4875]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4876]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4877]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4878]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4879]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4880]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4881]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4882]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4883]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4884]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4885]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4886]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4887]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4888]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4889]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4890]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch))) {
        ++(vlSymsp->__Vcoverage[4891]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mscratch) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4892]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4893]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4894]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4895]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4896]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4897]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4898]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4899]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4900]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4901]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4902]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4903]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4904]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4905]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4906]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4907]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4908]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4909]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4910]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4911]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4912]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4913]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4914]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4915]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4916]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4917]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4918]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4919]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4920]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4921]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4922]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval))) {
        ++(vlSymsp->__Vcoverage[4923]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtval) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4924]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4925]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4926]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4927]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4928]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4929]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4930]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4931]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4932]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4933]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4934]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4935]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4936]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4937]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4938]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4939]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4940]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4941]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4942]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4943]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4944]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4945]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4946]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4947]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4948]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4949]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4950]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4951]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4952]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4953]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4954]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie))) {
        ++(vlSymsp->__Vcoverage[4955]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mie) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q)))) {
        ++(vlSymsp->__Vcoverage[4152]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3fffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4153]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3fffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4154]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3fffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4155]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3fffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4156]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3ffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4157]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3ffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4158]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3ffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4159]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3ffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4160]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3fffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4161]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3fffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4162]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3fffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4163]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3fffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4164]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3ffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4165]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3ffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4166]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3ffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4167]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3ffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4168]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3fffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4169]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3fffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4170]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3fffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4171]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3fff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4172]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3ffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4173]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3ffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4174]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3ffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4175]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3ff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4176]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3feffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4177]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3fdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4178]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3fbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4179]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3f7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4180]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3efffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4181]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3dfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4182]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x3bfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4183]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x37fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4184]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x2ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4185]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q 
            = ((0x1ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_q) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dr) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr)))) {
        ++(vlSymsp->__Vcoverage[5867]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffffffffeULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dr)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5868]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffffffffdULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5869]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffffffffbULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5870]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffffffff7ULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5871]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffffffffefULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5872]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffffffffdfULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5873]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffffffffbfULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5874]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffffffff7fULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5875]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffffffeffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5876]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffffffdffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5877]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffffffbffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5878]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffffff7ffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5879]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffffffefffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5880]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffffffdfffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5881]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffffffbfffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5882]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffffff7fffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5883]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffffeffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5884]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffffdffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5885]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffffbffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5886]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffff7ffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5887]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffffefffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5888]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffffdfffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5889]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffffbfffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5890]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffff7fffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5891]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffeffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5892]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffdffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5893]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fffbffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5894]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fff7ffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5895]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffefffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5896]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffdfffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5897]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ffbfffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5898]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1ff7fffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5899]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1feffffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5900]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fdffffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5901]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1fbffffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x23U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5902]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1f7ffffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x24U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5903]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1efffffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x25U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5904]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1dfffffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x26U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5905]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x1bfffffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x27U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5906]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0x17fffffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                        >> 0x28U)) ^ (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5907]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr 
            = ((0xffffffffffULL & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dr) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__mtime) 
               ^ (IData)(vlTOPp->bench_top__DOT____Vtogcov__mtime)))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffffffffeULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__mtime)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffffffffdULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffffffffbULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffffffff7ULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffffffffefULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffffffffdfULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffffffffbfULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffffffff7fULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffffffeffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffffffdffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffffffbffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffffff7ffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffffffefffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffffffdfffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffffffbfffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffffff7fffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffffeffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffffdffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffffbffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffff7ffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffffefffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffffdfffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffffbfffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffff7fffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffeffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffdffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffffbffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffff7ffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffefffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffdfffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffffbfffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffff7fffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffeffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffdffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffffbffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x23U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffff7ffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x24U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffefffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x25U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffdfffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x26U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffffbfffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x27U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffff7fffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x28U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffeffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x29U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffdffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x2aU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffffbffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x2bU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffff7ffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x2cU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffefffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x2dU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffdfffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x2eU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffffbfffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x2fU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffff7fffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x30U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffeffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x31U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffdffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x32U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfffbffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x33U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfff7ffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x34U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffefffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x35U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffdfffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x36U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xffbfffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x37U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xff7fffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x38U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfeffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x39U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfdffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x3aU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xfbffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x3bU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xf7ffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x3cU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xefffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x3dU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xdfffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x3eU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0xbfffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtime 
                        >> 0x3fU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtime 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime = 
            ((0x7fffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtime) 
             | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtime 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__mtimecmp) 
               ^ (IData)(vlTOPp->bench_top__DOT____Vtogcov__mtimecmp)))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffffffffeULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__mtimecmp)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffffffffdULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffffffffbULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffffffff7ULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffffffffefULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffffffffdfULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffffffffbfULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffffffff7fULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffffffeffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffffffdffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffffffbffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffffff7ffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffffffefffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffffffdfffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffffffbfffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffffff7fffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffffeffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffffdffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffffbffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffff7ffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffffefffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffffdfffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffffbfffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffff7fffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffeffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffdffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffffbffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffff7ffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffefffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffdfffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffffbfffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffff7fffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffeffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffdffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffffbffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x23U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffff7ffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x24U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffefffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x25U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffdfffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x26U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffffbfffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x27U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffff7fffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x28U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffeffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x29U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffdffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x2aU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffffbffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x2bU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffff7ffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x2cU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffefffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x2dU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffdfffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x2eU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffffbfffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x2fU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffff7fffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x30U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffeffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x31U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffdffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x32U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfffbffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x33U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfff7ffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x34U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffefffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x35U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffdfffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x36U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xffbfffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x37U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xff7fffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x38U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfeffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x39U)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfdffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x3aU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xfbffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x3bU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xf7ffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x3cU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xefffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x3dU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xdfffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x3eU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0xbfffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__mtimecmp 
                        >> 0x3fU)) ^ (IData)((vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp 
            = ((0x7fffffffffffffffULL & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle)))) {
        ++(vlSymsp->__Vcoverage[4956]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4957]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4958]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4959]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4960]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4961]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4962]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4963]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4964]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4965]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4966]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4967]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4968]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4969]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4970]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4971]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4972]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4973]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4974]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4975]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4976]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4977]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4978]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4979]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4980]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffeffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4981]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4982]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffffbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4983]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffff7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4984]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffefffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4985]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffdfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4986]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffffbfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4987]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffff7fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4988]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffeffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4989]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffdffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4990]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffffbffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x23U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4991]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffff7ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x24U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4992]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffefffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x25U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4993]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffdfffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x26U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4994]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffffbfffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x27U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4995]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffff7fffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x28U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4996]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffeffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x29U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4997]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffdffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x2aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4998]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffffbffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x2bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4999]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffff7ffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x2cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5000]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffefffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x2dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5001]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffdfffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x2eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5002]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffffbfffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x2fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5003]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffff7fffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x30U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5004]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffeffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x31U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5005]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffdffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x32U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5006]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfffbffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x33U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5007]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfff7ffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x34U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5008]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffefffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x35U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5009]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffdfffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x36U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5010]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xffbfffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x37U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5011]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xff7fffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x38U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5012]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfeffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x39U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5013]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfdffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x3aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5014]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xfbffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x3bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5015]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xf7ffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x3cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5016]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xefffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x3dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5017]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xdfffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x3eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5018]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0xbfffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                        >> 0x3fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5019]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle 
            = ((0x7fffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret)))) {
        ++(vlSymsp->__Vcoverage[5020]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5021]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5022]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5023]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5024]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5025]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5026]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5027]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5028]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5029]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5030]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5031]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5032]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5033]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5034]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5035]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5036]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5037]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5038]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5039]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5040]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5041]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5042]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5043]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5044]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffeffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5045]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5046]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffffbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5047]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffff7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5048]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffefffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5049]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffdfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5050]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffffbfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5051]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffff7fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5052]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffeffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5053]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffdffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5054]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffffbffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x23U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5055]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffff7ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x24U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5056]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffefffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x25U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5057]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffdfffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x26U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5058]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffffbfffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x27U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5059]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffff7fffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x28U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5060]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffeffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x29U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5061]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffdffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x2aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5062]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffffbffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x2bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5063]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffff7ffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x2cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5064]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffefffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x2dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5065]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffdfffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x2eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5066]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffffbfffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x2fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5067]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffff7fffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x30U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5068]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffeffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x31U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5069]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffdffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x32U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5070]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfffbffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x33U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5071]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfff7ffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x34U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5072]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffefffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x35U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5073]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffdfffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x36U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5074]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xffbfffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x37U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5075]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xff7fffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x38U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5076]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfeffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x39U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5077]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfdffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x3aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5078]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xfbffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x3bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5079]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xf7ffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x3cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5080]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xefffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x3dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5081]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xdfffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x3eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5082]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0xbfffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                        >> 0x3fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5083]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret 
            = ((0x7fffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5086]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5087]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5088]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5089]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5090]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5091]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5092]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5093]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5094]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5095]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5096]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5097]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5098]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5099]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5100]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5101]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5102]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5103]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5104]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5105]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5106]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5107]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5108]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5109]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5110]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5111]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5112]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5113]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5114]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5115]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5116]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]))) {
        ++(vlSymsp->__Vcoverage[5117]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[0U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U]));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5118]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5119]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5120]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5121]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5122]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5123]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5124]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5125]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5126]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5127]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5128]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5129]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5130]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5131]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5132]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5133]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5134]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5135]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5136]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5137]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5138]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5139]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5140]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5141]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5142]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5143]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5144]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5145]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5146]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5147]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5148]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]))) {
        ++(vlSymsp->__Vcoverage[5149]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[1U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U]));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5150]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5151]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5152]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5153]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5154]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5155]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5156]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5157]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5158]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5159]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5160]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5161]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5162]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5163]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5164]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5165]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5166]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5167]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5168]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5169]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5170]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5171]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5172]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5173]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5174]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5175]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5176]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5177]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5178]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5179]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5180]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]))) {
        ++(vlSymsp->__Vcoverage[5181]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[2U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U]));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5182]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5183]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5184]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5185]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5186]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5187]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5188]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5189]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5190]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5191]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5192]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5193]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5194]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5195]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5196]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5197]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5198]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5199]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5200]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5201]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5202]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5203]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5204]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5205]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5206]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5207]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5208]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5209]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5210]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5211]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5212]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]))) {
        ++(vlSymsp->__Vcoverage[5213]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_r[3U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U]));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__rd = (0x1fU 
                                               & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                                  >> 7U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
        = (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q);
    vlTOPp->bench_top__DOT__tohost = vlTOPp->bench_top__DOT__tohost_r;
    vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
        = vlTOPp->bench_top__DOT__u_core__DOT__instr;
    vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
        = vlTOPp->bench_top__DOT__u_core__DOT__pc;
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_halted 
        = (7U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state));
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__next_bits 
        = (3U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                 >> ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx) 
                     << 1U)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
        = (QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
        = ((QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag)) 
           << 1U);
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__glob_ie 
        = (1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                 >> 3U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec;
    vlTOPp->bench_top__DOT__u_core__DOT__md_done = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__done;
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__is_signed_a 
        = (((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)) 
            | (1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))) 
           | (2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__is_signed_b 
        = ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)) 
           | (1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)));
    vlTOPp->bench_top__DOT__u_core__DOT__dmem_re = 
        ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
         | (5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
        = ((0xfffff000U & ((- (IData)((1U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                             >> 0x1fU)))) 
                           << 0xcU)) | (0xfffU & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                                  >> 0x14U)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
        = ((0xfffff000U & ((- (IData)((1U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                             >> 0x1fU)))) 
                           << 0xcU)) | ((0xfe0U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                            >> 7U))));
    vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
        = ((0xffffe000U & ((- (IData)((1U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                             >> 0x1fU)))) 
                           << 0xdU)) | ((0x1000U & 
                                         (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                                    >> 7U))))));
    vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
        = (0xfffff000U & vlTOPp->bench_top__DOT__u_core__DOT__instr);
    vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
        = ((0xffe00000U & ((- (IData)((1U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                             >> 0x1fU)))) 
                           << 0x15U)) | ((0x100000U 
                                          & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                             >> 0xbU)) 
                                         | ((0xff000U 
                                             & vlTOPp->bench_top__DOT__u_core__DOT__instr) 
                                            | ((0x800U 
                                                & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                                     >> 0x14U))))));
    vlTOPp->bench_top__DOT__u_core__DOT__rs2 = (0x1fU 
                                                & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                                   >> 0x14U));
    vlTOPp->bench_top__DOT__u_core__DOT__md_result 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result;
    vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
        = ((4U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))
            ? ((IData)(4U) + (0xfffffffcU & vlTOPp->bench_top__DOT__u_core__DOT__pc))
            : vlTOPp->bench_top__DOT__u_core__DOT__pc);
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
        = (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle);
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
        = (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                   >> 0x20U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
        = (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret);
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
        = (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                   >> 0x20U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i 
        = (0x1fU & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                    >> 0x14U));
    vlTOPp->bench_top__DOT__u_core__DOT__rs1 = (0x1fU 
                                                & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                                   >> 0xfU));
    vlTOPp->bench_top__DOT__irq_soft_w = vlTOPp->bench_top__DOT__msip;
    vlTOPp->bench_top__DOT__irq_timer_w = (vlTOPp->bench_top__DOT__mtime 
                                           >= vlTOPp->bench_top__DOT__mtimecmp);
    vlTOPp->bench_top__DOT__irq_ext_w = ((IData)(vlTOPp->bench_top__DOT__msip) 
                                         & (IData)(
                                                   (vlTOPp->bench_top__DOT__mtime 
                                                    >> 1U)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7 
        = (0x7fU & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                    >> 0x19U));
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addr 
        = vlTOPp->bench_top__DOT__u_core__DOT__pc;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv_o 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv;
    vlTOPp->bench_top__DOT__u_core__DOT__funct3 = (7U 
                                                   & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                                      >> 0xcU));
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12 
        = (0xfffU & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                     >> 0x14U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__fetch_m_o 
        = (3U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv));
    vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12 
        = (0xfffU & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                     >> 0x14U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__data_m_o 
        = ((0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus)
            ? (3U == (3U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                            >> 0xbU))) : (3U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3 
        = (7U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                 >> 0xcU));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mmwp_o 
        = (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                 >> 1U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mml_o 
        = (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[0U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[0U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[1U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[1U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[2U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[2U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[3U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[3U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[4U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[4U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[5U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[5U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[6U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[6U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[7U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[7U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[8U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[8U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[9U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[9U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[0xaU] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[0xaU];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[0xbU] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[0xbU];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[0xcU] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[0xcU];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[0xdU] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[0xdU];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[0xeU] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[0xeU];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[0xfU] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[0xfU];
    vlTOPp->bench_top__DOT__mtime_lo = (IData)(vlTOPp->bench_top__DOT__mtime);
    vlTOPp->bench_top__DOT__mtime_hi = (IData)((vlTOPp->bench_top__DOT__mtime 
                                                >> 0x20U));
    vlTOPp->bench_top__DOT__mtimecmp_lo = (IData)(vlTOPp->bench_top__DOT__mtimecmp);
    vlTOPp->bench_top__DOT__mtimecmp_hi = (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                   >> 0x20U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode 
        = (0x7fU & vlTOPp->bench_top__DOT__u_core__DOT__instr);
    vlTOPp->bench_top__DOT__dbg_ar_done = vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_done;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_step) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_step)) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_step 
            = vlTOPp->bench_top__DOT__u_core__DOT__dcsr_step;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_resumereq) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_resumereq)) {
        ++(vlSymsp->__Vcoverage[5666]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_resumereq 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_resumereq;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_valid) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_valid)) {
        ++(vlSymsp->__Vcoverage[5668]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_valid 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_valid;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_write) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_write)) {
        ++(vlSymsp->__Vcoverage[5669]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_write 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_write;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_csr) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_csr)) {
        ++(vlSymsp->__Vcoverage[5670]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_csr 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_csr;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_valid) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_valid)) {
        ++(vlSymsp->__Vcoverage[5715]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_valid 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_valid;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_write) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_write)) {
        ++(vlSymsp->__Vcoverage[5716]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_write 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_write;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmactive) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmactive)) {
        ++(vlSymsp->__Vcoverage[5989]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmactive 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dmactive;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset_r) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ndmreset_r)) {
        ++(vlSymsp->__Vcoverage[5990]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ndmreset_r 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset_r;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__haltreq_r) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__haltreq_r)) {
        ++(vlSymsp->__Vcoverage[5991]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__haltreq_r 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__haltreq_r;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__resumeack) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__resumeack)) {
        ++(vlSymsp->__Vcoverage[5992]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__resumeack 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__resumeack;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__havereset) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__havereset)) {
        ++(vlSymsp->__Vcoverage[5993]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__havereset 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__havereset;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abs_busy)) {
        ++(vlSymsp->__Vcoverage[5994]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abs_busy 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbautoincrement) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbautoincrement)) {
        ++(vlSymsp->__Vcoverage[6097]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbautoincrement 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__sbautoincrement;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadonaddr) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbreadonaddr)) {
        ++(vlSymsp->__Vcoverage[6098]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbreadonaddr 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadonaddr;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadondata) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbreadondata)) {
        ++(vlSymsp->__Vcoverage[6099]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbreadondata 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadondata;
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rstat) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rstat))) {
        ++(vlSymsp->__Vcoverage[5982]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rstat 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rstat)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rstat)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rstat) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rstat))) {
        ++(vlSymsp->__Vcoverage[5983]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rstat 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rstat)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rstat)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr))) {
        ++(vlSymsp->__Vcoverage[5995]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr))) {
        ++(vlSymsp->__Vcoverage[5996]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr))) {
        ++(vlSymsp->__Vcoverage[5997]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__cmderr)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess))) {
        ++(vlSymsp->__Vcoverage[6094]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess))) {
        ++(vlSymsp->__Vcoverage[6095]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess))) {
        ++(vlSymsp->__Vcoverage[6096]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaccess)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sberror) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror))) {
        ++(vlSymsp->__Vcoverage[6100]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sberror)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sberror) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror))) {
        ++(vlSymsp->__Vcoverage[6101]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sberror)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sberror) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror))) {
        ++(vlSymsp->__Vcoverage[6102]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sberror)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sberror)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng))) {
        ++(vlSymsp->__Vcoverage[6242]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng))) {
        ++(vlSymsp->__Vcoverage[6243]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng))) {
        ++(vlSymsp->__Vcoverage[6244]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__eng)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng)));
    }
    vlTOPp->bench_top__DOT__dbg_resumereq = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_resumereq;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5671]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xffeU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5672]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xffdU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5673]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xffbU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5674]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xff7U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5675]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xfefU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5676]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xfdfU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5677]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xfbfU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5678]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xf7fU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5679]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xeffU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5680]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xdffU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5681]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0xbffU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno) 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[5682]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno 
            = ((0x7ffU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno)));
    }
    vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_haltreq 
        = ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__haltreq_r) 
           & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmactive));
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5683]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5684]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5685]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5686]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5687]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5688]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5689]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5690]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5691]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5692]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5693]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5694]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5695]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5696]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5697]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5698]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5699]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5700]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5701]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5702]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5703]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5704]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5705]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5706]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5707]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5708]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5709]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5710]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5711]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5712]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5713]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[5714]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5717]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5718]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5719]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5720]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5721]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5722]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5723]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5724]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5725]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5726]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5727]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5728]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5729]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5730]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5731]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5732]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5733]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5734]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5735]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5736]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5737]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5738]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5739]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5740]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5741]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5742]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5743]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5744]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5745]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5746]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5747]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[5748]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_addr) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5749]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5750]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5751]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5752]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5753]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5754]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5755]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5756]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5757]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5758]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5759]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5760]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5761]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5762]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5763]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5764]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5765]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5766]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5767]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5768]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5769]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5770]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5771]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5772]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5773]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5774]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5775]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5776]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5777]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5778]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5779]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[5780]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dm_mem_wdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5950]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5951]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5952]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5953]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5954]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5955]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5956]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5957]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5958]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5959]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5960]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5961]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5962]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5963]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5964]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5965]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5966]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5967]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5968]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5969]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5970]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5971]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5972]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5973]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5974]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5975]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5976]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5977]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5978]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5979]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5980]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata))) {
        ++(vlSymsp->__Vcoverage[5981]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_rdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[5998]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[5999]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6000]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6001]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6002]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6003]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6004]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6005]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6006]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6007]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6008]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6009]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6010]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6011]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6012]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6013]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6014]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6015]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6016]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6017]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6018]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6019]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6020]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6021]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6022]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6023]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6024]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6025]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6026]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6027]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6028]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__data0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0))) {
        ++(vlSymsp->__Vcoverage[6029]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__data0) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__data0));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6030]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6031]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6032]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6033]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6034]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6035]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6036]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6037]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6038]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6039]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6040]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6041]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6042]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6043]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6044]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6045]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6046]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6047]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6048]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6049]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6050]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6051]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6052]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6053]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6054]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6055]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6056]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6057]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6058]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6059]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6060]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0))) {
        ++(vlSymsp->__Vcoverage[6061]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbaddress0) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6062]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6063]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6064]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6065]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6066]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6067]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6068]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6069]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6070]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6071]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6072]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6073]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6074]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6075]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6076]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6077]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6078]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6079]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6080]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6081]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6082]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6083]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6084]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6085]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6086]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6087]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6088]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6089]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6090]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6091]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6092]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0))) {
        ++(vlSymsp->__Vcoverage[6093]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbdata0) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0));
    }
    vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset = vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset_r;
    vlTOPp->bench_top__DOT__dm_mem_wdata = vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata;
    vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
        = (1U | (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy) 
                  << 0xcU) | ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr) 
                              << 8U)));
    vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
        = (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__haltreq_r) 
            << 0x1fU) | (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__havereset) 
                          << 0x1cU) | (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset_r) 
                                        << 1U) | (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmactive))));
    vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val = 
        (0x20000404U | (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadonaddr) 
                         << 0x14U) | (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess) 
                                       << 0x11U) | 
                                      (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbautoincrement) 
                                        << 0x10U) | 
                                       (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadondata) 
                                         << 0xfU) | 
                                        ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sberror) 
                                         << 0xcU))))));
    vlTOPp->bench_top__DOT__dm_mem_addr = vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr;
    vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val = 
        (0x40000003U | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_ebreakm) 
                         << 0xfU) | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_cause) 
                                      << 6U) | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_step) 
                                                << 2U))));
    vlTOPp->bench_top__DOT__dbg_ar_wdata = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata;
    vlTOPp->bench_top__DOT__dbg_ar_write = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_write;
    vlTOPp->bench_top__DOT__dbg_ar_csr = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_csr;
    vlTOPp->bench_top__DOT__dbg_ar_valid = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_valid;
    vlTOPp->bench_top__DOT__dbg_ar_regno = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno;
    vlTOPp->bench_top__DOT__dm_mem_valid = vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_valid;
    vlTOPp->bench_top__DOT__dm_mem_write = vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_write;
    vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op = (3U 
                                                  & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dr));
    vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr = 
        (0x7fU & (IData)((vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                          >> 0x22U)));
    vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data = (IData)(
                                                           (vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                            >> 2U));
    if (((IData)(vlTOPp->bench_top__DOT__dm_mem_ready) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_ready)) {
        ++(vlSymsp->__Vcoverage[551]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_ready 
            = vlTOPp->bench_top__DOT__dm_mem_ready;
    }
    vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_rdata 
        = vlTOPp->bench_top__DOT__dm_mem_rdata;
    vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_ready 
        = vlTOPp->bench_top__DOT__dm_mem_ready;
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_pulse)) {
        ++(vlSymsp->__Vcoverage[6245]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_pulse 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse;
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr))) {
        ++(vlSymsp->__Vcoverage[6246]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr 
            = ((0x7eU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr))) {
        ++(vlSymsp->__Vcoverage[6247]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr 
            = ((0x7dU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr))) {
        ++(vlSymsp->__Vcoverage[6248]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr 
            = ((0x7bU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr))) {
        ++(vlSymsp->__Vcoverage[6249]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr 
            = ((0x77U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr))) {
        ++(vlSymsp->__Vcoverage[6250]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr 
            = ((0x6fU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr))) {
        ++(vlSymsp->__Vcoverage[6251]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr 
            = ((0x5fU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr))) {
        ++(vlSymsp->__Vcoverage[6252]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr 
            = ((0x3fU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_addr)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)));
    }
    if ((1U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (1U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (2U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (4U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (8U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x10U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x20U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x40U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x80U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x100U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x200U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x400U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x800U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6253]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6254]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6255]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6256]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6257]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6258]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6259]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6260]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6261]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6262]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6263]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6264]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6265]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6266]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6267]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6268]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6269]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6270]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6271]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6272]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6273]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6274]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6275]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6276]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6277]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6278]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6279]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6280]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6281]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6282]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6283]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data))) {
        ++(vlSymsp->__Vcoverage[6284]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_we_data) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data));
    }
    vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise = 
        (1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tck_s));
    vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_q = (1U 
                                                 & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_s) 
                                                    >> 1U));
    if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
        ++(vlSymsp->__Vcoverage[5984]);
    }
    if ((1U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
        if ((0x10U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
            ++(vlSymsp->__Vcoverage[5985]);
        }
    }
    if ((1U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
        if ((0x10U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
            if ((0x11U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                ++(vlSymsp->__Vcoverage[5986]);
            }
        }
    }
    if ((1U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
        if ((0x10U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
            if ((0x11U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                ++(vlSymsp->__Vcoverage[5987]);
            }
        }
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tap))) {
        ++(vlSymsp->__Vcoverage[5791]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tap 
            = ((0xeU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tap)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tap))) {
        ++(vlSymsp->__Vcoverage[5792]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tap 
            = ((0xdU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tap)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tap))) {
        ++(vlSymsp->__Vcoverage[5793]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tap 
            = ((0xbU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tap)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tap))) {
        ++(vlSymsp->__Vcoverage[5794]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tap 
            = ((7U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tap)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[5816]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[5817]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[5818]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[5819]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir))) {
        ++(vlSymsp->__Vcoverage[5820]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir_shift) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift))) {
        ++(vlSymsp->__Vcoverage[5821]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir_shift)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir_shift) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift))) {
        ++(vlSymsp->__Vcoverage[5822]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir_shift)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir_shift) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift))) {
        ++(vlSymsp->__Vcoverage[5823]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir_shift)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir_shift) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift))) {
        ++(vlSymsp->__Vcoverage[5824]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir_shift)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir_shift) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift))) {
        ++(vlSymsp->__Vcoverage[5825]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ir_shift)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir_shift)));
    }
    vlTOPp->bench_top__DOT__u_dbg__DOT__tdo = (1U & 
                                               ((1U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))
                                                 ? (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dr)
                                                 : 
                                                ((0x10U 
                                                  == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))
                                                  ? (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dr)
                                                  : 
                                                 ((0x11U 
                                                   == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))
                                                   ? (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dr)
                                                   : (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__bypass_bit)))));
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1980]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1981]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1982]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1983]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1984]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1985]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1986]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1987]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1988]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1989]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1990]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1991]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1992]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1993]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1994]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1995]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1996]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1997]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1998]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[1999]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2000]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2001]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2002]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2003]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2004]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2005]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2006]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2007]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2008]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2009]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2010]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_y 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y))) {
        ++(vlSymsp->__Vcoverage[2011]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_y) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addr 
        = vlTOPp->bench_top__DOT__u_core__DOT__alu_y;
    vlTOPp->bench_top__DOT__u_core__DOT__aoff = (3U 
                                                 & vlTOPp->bench_top__DOT__u_core__DOT__alu_y);
    vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
        = (((5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
            | (6U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))
            ? ((IData)(4U) + (0xfffffffcU & vlTOPp->bench_top__DOT__u_core__DOT__alu_y))
            : (0xfffffffcU & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    vlTOPp->bench_top__DOT__u_dbg__DOT__rst = vlTOPp->bench_top__DOT__rst;
    vlTOPp->bench_top__DOT__u_dbg__DOT__tck = vlTOPp->bench_top__DOT__tck;
    vlTOPp->bench_top__DOT__u_dbg__DOT__tms = vlTOPp->bench_top__DOT__tms;
    vlTOPp->bench_top__DOT__u_dbg__DOT__tdi = vlTOPp->bench_top__DOT__tdi;
    vlTOPp->bench_top__DOT__u_dbg__DOT__clk = vlTOPp->bench_top__DOT__clk;
    vlTOPp->bench_top__DOT__u_core__DOT__clk = vlTOPp->bench_top__DOT__clk;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__rlb)) {
        ++(vlSymsp->__Vcoverage[5217]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__rlb 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__any_locked)) {
        ++(vlSymsp->__Vcoverage[5251]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__any_locked 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tms_q)) {
        ++(vlSymsp->__Vcoverage[5789]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tms_q 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q;
    }
    vlTOPp->tohost_we = vlTOPp->bench_top__DOT__tohost_we;
    if (((IData)(vlTOPp->bench_top__DOT__tohost_we) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_we)) {
        ++(vlSymsp->__Vcoverage[38]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_we 
            = vlTOPp->bench_top__DOT__tohost_we;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__busy) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__busy)) {
        ++(vlSymsp->__Vcoverage[3683]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__busy 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__busy;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__md_busy = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__busy;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rd) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd))) {
        ++(vlSymsp->__Vcoverage[1530]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rd)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rd) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd))) {
        ++(vlSymsp->__Vcoverage[1531]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rd)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rd) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd))) {
        ++(vlSymsp->__Vcoverage[1532]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rd)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rd) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd))) {
        ++(vlSymsp->__Vcoverage[1533]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rd)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rd) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd))) {
        ++(vlSymsp->__Vcoverage[1534]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rd)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rd)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__retire_rd 
        = vlTOPp->bench_top__DOT__u_core__DOT__rd;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4406]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4407]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4408]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4409]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4410]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4411]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4412]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4413]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4414]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4415]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4416]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4417]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4418]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4419]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4420]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4421]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4422]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4423]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4424]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4425]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4426]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4427]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4428]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4429]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4430]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4431]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4432]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4433]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4434]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4435]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4436]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo))) {
        ++(vlSymsp->__Vcoverage[4437]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_lo) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo));
    }
    vlTOPp->tohost = vlTOPp->bench_top__DOT__tohost;
    if ((1U & (vlTOPp->bench_top__DOT__tohost ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (1U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((2U & (vlTOPp->bench_top__DOT__tohost ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (2U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((4U & (vlTOPp->bench_top__DOT__tohost ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (4U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((8U & (vlTOPp->bench_top__DOT__tohost ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (8U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__tohost ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x10U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__tohost ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x20U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__tohost ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x40U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__tohost ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x80U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__tohost ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x100U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__tohost ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x200U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__tohost ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x400U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__tohost ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x800U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__tohost 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x1000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__tohost 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x2000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__tohost 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x4000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__tohost 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x8000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__tohost 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x10000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__tohost 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x20000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__tohost 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x40000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__tohost 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x80000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__tohost 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x100000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__tohost 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x200000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__tohost 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x400000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__tohost 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x800000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__tohost 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x1000000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__tohost 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x2000000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__tohost 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x4000000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__tohost 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x8000000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__tohost 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x10000000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__tohost 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x20000000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__tohost 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x40000000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__tohost 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__tohost))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost = 
            ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__tohost) 
             | (0x80000000U & vlTOPp->bench_top__DOT__tohost));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1209]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1212]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1213]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1219]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1220]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1221]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1223]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1224]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1225]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1226]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1227]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[1234]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_instr) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_instr));
    }
    vlTOPp->bench_top__DOT__retire_instr = vlTOPp->bench_top__DOT__u_core__DOT__retire_instr;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1196]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1198]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1199]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1200]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1201]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[1202]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_pc) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_pc));
    }
    vlTOPp->bench_top__DOT__retire_pc = vlTOPp->bench_top__DOT__u_core__DOT__retire_pc;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_halted) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_halted)) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_halted 
            = vlTOPp->bench_top__DOT__u_core__DOT__dbg_halted;
    }
    vlTOPp->bench_top__DOT__dbg_halted = vlTOPp->bench_top__DOT__u_core__DOT__dbg_halted;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__next_bits) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__next_bits))) {
        ++(vlSymsp->__Vcoverage[4327]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__next_bits 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__next_bits)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__next_bits)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__next_bits) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__next_bits))) {
        ++(vlSymsp->__Vcoverage[4328]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__next_bits 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__next_bits)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__next_bits)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
        = ((0x7fffffffcULL & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                              << 2U)) | (QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__next_bits)));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1)))) {
        ++(vlSymsp->__Vcoverage[4222]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7fffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4223]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7fffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4224]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7fffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4225]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7fffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4226]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7ffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4227]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7ffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4228]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7ffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4229]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7ffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4230]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7fffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4231]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7fffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4232]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7fffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4233]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7fffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4234]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7ffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4235]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7ffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4236]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7ffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4237]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7ffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4238]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7fffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4239]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7fffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4240]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7fffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4241]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7fff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4242]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7ffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4243]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7ffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4244]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7ffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4245]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7ff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4246]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7feffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4247]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7fdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4248]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7fbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4249]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7f7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4250]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7efffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4251]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7dfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4252]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x7bfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4253]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x77fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4254]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x6ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4255]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x5ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4256]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1 
            = ((0x3ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2)))) {
        ++(vlSymsp->__Vcoverage[4257]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7fffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4258]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7fffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4259]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7fffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4260]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7fffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4261]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7ffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4262]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7ffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4263]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7ffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4264]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7ffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4265]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7fffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4266]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7fffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4267]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7fffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4268]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7fffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4269]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7ffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4270]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7ffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4271]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7ffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4272]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7ffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4273]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7fffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4274]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7fffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4275]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7fffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4276]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7fff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4277]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7ffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4278]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7ffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4279]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7ffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4280]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7ff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4281]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7feffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4282]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7fdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4283]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7fbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4284]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7f7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4285]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7efffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4286]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7dfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4287]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x7bfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4288]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x77fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4289]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x6ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4290]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x5ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4291]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2 
            = ((0x3ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d2) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
        = (0x7ffffffffULL & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
                             + vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__glob_ie) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__glob_ie)) {
        ++(vlSymsp->__Vcoverage[5419]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__glob_ie 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__glob_ie;
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4695]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4696]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4697]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4698]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4699]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4700]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4701]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4702]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4703]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4704]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4705]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4706]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4707]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4708]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4709]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4710]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4711]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4712]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4713]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4714]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4715]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4716]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4717]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4718]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4719]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4720]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4721]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4722]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4723]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4724]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4725]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o))) {
        ++(vlSymsp->__Vcoverage[4726]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mepc_o) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__mepc_w = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4663]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4664]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4665]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4666]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4667]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4668]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4669]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4670]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4671]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4672]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4673]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4674]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4675]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4676]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4677]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4678]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4679]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4680]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4681]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4682]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4683]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4684]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4685]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4686]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4687]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4688]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4689]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4690]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4691]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4692]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4693]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o))) {
        ++(vlSymsp->__Vcoverage[4694]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mtvec_o) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__md_done) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_done)) {
        ++(vlSymsp->__Vcoverage[2014]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_done 
            = vlTOPp->bench_top__DOT__u_core__DOT__md_done;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__is_signed_a) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__is_signed_a)) {
        ++(vlSymsp->__Vcoverage[3786]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__is_signed_a 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__is_signed_a;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
        = (((QData)((IData)(((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__is_signed_a) 
                             & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                                >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q)));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__is_signed_b) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__is_signed_b)) {
        ++(vlSymsp->__Vcoverage[3787]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__is_signed_b 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__is_signed_b;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
        = (((QData)((IData)(((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__is_signed_b) 
                             & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                                >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q)));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dmem_re) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_re)) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_re 
            = vlTOPp->bench_top__DOT__u_core__DOT__dmem_re;
    }
    vlTOPp->bench_top__DOT__dmem_re = vlTOPp->bench_top__DOT__u_core__DOT__dmem_re;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
}
