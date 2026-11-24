// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench_top.h for the primary calling header

#include "Vbench_top.h"
#include "Vbench_top__Syms.h"

#include "verilated_dpi.h"

void Vbench_top::_settle__TOP__27(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_settle__TOP__27\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__fwd1) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__fwd1)) {
        ++(vlSymsp->__Vcoverage[5591]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__fwd1 
            = vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__fwd1;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__fwd2) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__fwd2)) {
        ++(vlSymsp->__Vcoverage[5592]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__fwd2 
            = vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__fwd2;
    }
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
        = (IData)(((0x1eU >= (0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2) 
                                       - (IData)(1U))))
                    ? vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs
                   [(0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2) 
                              - (IData)(1U)))] : 0ULL));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__e 
        = (0x7fU & (IData)((((0x1eU >= (0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2) 
                                                 - (IData)(1U))))
                              ? vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs
                             [(0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2) 
                                        - (IData)(1U)))]
                              : 0ULL) >> 0x20U)));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((1U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
            ? 3U : 0U);
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((2U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 5U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((4U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 6U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((8U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 7U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x10U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 9U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x20U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0xaU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x40U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0xbU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x80U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0xcU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x100U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0xdU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x200U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0xeU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x400U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0xfU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x800U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x11U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x1000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x12U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x2000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x13U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x4000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x14U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x8000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x15U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x10000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x16U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x20000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x17U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x40000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x18U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x80000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x19U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x100000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x1aU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x200000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x1bU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x400000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x1cU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x800000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x1dU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x1000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x1eU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x2000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x1fU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x4000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x21U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x8000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x22U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x10000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x23U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x20000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x24U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x40000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x25U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j = 0x1fU;
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re) 
           ^ ((0x80000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)
               ? 0x26U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s 
        = (0x3fU & ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__e) 
                    ^ (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__c_re)));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr 
        = (1U & (VL_REDXOR_32((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__e)) 
                 ^ VL_REDXOR_32(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
        = vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d;
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (3U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfffffffeU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (1U & (~ vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (5U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfffffffdU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (2U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                            >> 1U)) << 1U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (6U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfffffffbU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (4U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                            >> 2U)) << 2U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (7U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfffffff7U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (8U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                            >> 3U)) << 3U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (9U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xffffffefU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x10U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                               >> 4U)) << 4U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0xaU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xffffffdfU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x20U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                               >> 5U)) << 5U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0xbU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xffffffbfU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x40U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                               >> 6U)) << 6U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0xcU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xffffff7fU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x80U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                               >> 7U)) << 7U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0xdU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfffffeffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x100U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                >> 8U)) << 8U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0xeU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfffffdffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x200U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                >> 9U)) << 9U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0xfU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfffffbffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x400U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                >> 0xaU)) << 0xaU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x11U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfffff7ffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x800U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                >> 0xbU)) << 0xbU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x12U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xffffefffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x1000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                 >> 0xcU)) << 0xcU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x13U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xffffdfffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x2000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                 >> 0xdU)) << 0xdU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x14U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xffffbfffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x4000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                 >> 0xeU)) << 0xeU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x15U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xffff7fffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x8000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                 >> 0xfU)) << 0xfU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x16U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfffeffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x10000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                  >> 0x10U)) << 0x10U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x17U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfffdffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x20000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                  >> 0x11U)) << 0x11U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x18U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfffbffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x40000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                  >> 0x12U)) << 0x12U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x19U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfff7ffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x80000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                  >> 0x13U)) << 0x13U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x1aU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xffefffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x100000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                   >> 0x14U)) << 0x14U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x1bU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xffdfffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x200000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                   >> 0x15U)) << 0x15U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x1cU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xffbfffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x400000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                   >> 0x16U)) << 0x16U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x1dU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xff7fffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x800000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                   >> 0x17U)) << 0x17U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x1eU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfeffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x1000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                    >> 0x18U)) << 0x18U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x1fU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfdffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x2000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                    >> 0x19U)) << 0x19U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x21U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xfbffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x4000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                    >> 0x1aU)) << 0x1aU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x22U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xf7ffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x8000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                    >> 0x1bU)) << 0x1bU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x23U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xefffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x10000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                     >> 0x1cU)) << 0x1cU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x24U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xdfffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x20000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                     >> 0x1dU)) << 0x1dU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x25U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0xbfffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x40000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                     >> 0x1eU)) << 0x1eU)));
    }
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__11__j = 0x1fU;
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc 
            = ((0x7fffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc) 
               | (0x80000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__d 
                                     >> 0x1fU)) << 0x1fU)));
    }
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__Vfuncout 
        = (((QData)((IData)(((~ (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr)) 
                             & (0U != (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s))))) 
            << 0x21U) | (((QData)((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr)) 
                          << 0x20U) | (QData)((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__dc))));
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d2 
        = vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__Vfuncout;
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
        = (IData)(((0x1eU >= (0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1) 
                                       - (IData)(1U))))
                    ? vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs
                   [(0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1) 
                              - (IData)(1U)))] : 0ULL));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__e 
        = (0x7fU & (IData)((((0x1eU >= (0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1) 
                                                 - (IData)(1U))))
                              ? vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs
                             [(0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1) 
                                        - (IData)(1U)))]
                              : 0ULL) >> 0x20U)));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((1U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
            ? 3U : 0U);
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((2U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 5U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((4U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 6U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((8U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 7U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x10U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 9U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x20U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0xaU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x40U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0xbU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x80U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0xcU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x100U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0xdU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x200U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0xeU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x400U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0xfU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x800U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x11U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x1000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x12U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x2000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x13U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x4000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x14U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x8000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x15U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x10000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x16U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x20000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x17U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x40000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x18U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x80000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x19U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x100000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x1aU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x200000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x1bU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x400000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x1cU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x800000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x1dU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x1000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x1eU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x2000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x1fU : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x4000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x21U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x8000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x22U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x10000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x23U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x20000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x24U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x40000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x25U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j = 0x1fU;
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re 
        = ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re) 
           ^ ((0x80000000U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)
               ? 0x26U : 0U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s 
        = (0x3fU & ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__e) 
                    ^ (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__c_re)));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr 
        = (1U & (VL_REDXOR_32((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__e)) 
                 ^ VL_REDXOR_32(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
        = vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d;
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (3U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfffffffeU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (1U & (~ vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (5U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfffffffdU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (2U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                            >> 1U)) << 1U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (6U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfffffffbU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (4U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                            >> 2U)) << 2U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (7U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfffffff7U & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (8U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                            >> 3U)) << 3U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (9U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xffffffefU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x10U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                               >> 4U)) << 4U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0xaU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xffffffdfU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x20U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                               >> 5U)) << 5U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0xbU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xffffffbfU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x40U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                               >> 6U)) << 6U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0xcU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xffffff7fU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x80U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                               >> 7U)) << 7U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0xdU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfffffeffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x100U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                >> 8U)) << 8U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0xeU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfffffdffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x200U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                >> 9U)) << 9U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0xfU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfffffbffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x400U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                >> 0xaU)) << 0xaU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x11U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfffff7ffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x800U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                >> 0xbU)) << 0xbU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x12U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xffffefffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x1000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                 >> 0xcU)) << 0xcU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x13U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xffffdfffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x2000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                 >> 0xdU)) << 0xdU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x14U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xffffbfffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x4000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                 >> 0xeU)) << 0xeU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x15U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xffff7fffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x8000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                 >> 0xfU)) << 0xfU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x16U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfffeffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x10000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                  >> 0x10U)) << 0x10U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x17U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfffdffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x20000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                  >> 0x11U)) << 0x11U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x18U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfffbffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x40000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                  >> 0x12U)) << 0x12U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x19U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfff7ffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x80000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                  >> 0x13U)) << 0x13U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x1aU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xffefffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x100000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                   >> 0x14U)) << 0x14U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x1bU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xffdfffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x200000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                   >> 0x15U)) << 0x15U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x1cU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xffbfffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x400000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                   >> 0x16U)) << 0x16U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x1dU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xff7fffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x800000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                   >> 0x17U)) << 0x17U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x1eU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfeffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x1000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                    >> 0x18U)) << 0x18U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x1fU == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfdffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x2000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                    >> 0x19U)) << 0x19U)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x21U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xfbffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x4000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                    >> 0x1aU)) << 0x1aU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x22U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xf7ffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x8000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                    >> 0x1bU)) << 0x1bU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x23U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xefffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x10000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                     >> 0x1cU)) << 0x1cU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x24U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xdfffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x20000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                     >> 0x1dU)) << 0x1dU)));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x25U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0xbfffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x40000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                     >> 0x1eU)) << 0x1eU)));
    }
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j = 0x1fU;
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc 
            = ((0x7fffffffU & vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc) 
               | (0x80000000U & ((~ (vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__d 
                                     >> 0x1fU)) << 0x1fU)));
    }
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__Vfuncout 
        = (((QData)((IData)(((~ (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr)) 
                             & (0U != (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s))))) 
            << 0x21U) | (((QData)((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr)) 
                          << 0x20U) | (QData)((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__dc))));
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
        = vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__Vfuncout;
}

void Vbench_top::_settle__TOP__28(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_settle__TOP__28\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5218]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5219]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5220]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5221]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5222]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5223]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5224]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5225]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5226]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5227]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5228]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5229]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5230]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5231]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5232]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5233]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5234]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5235]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5236]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5237]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5238]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5239]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5240]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5241]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5242]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5243]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5244]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5245]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5246]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5247]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5248]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff))) {
        ++(vlSymsp->__Vcoverage[5249]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__misa_eff) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
        = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)
            ? vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[
           (0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))]
            : ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)
                ? vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
               (3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))]
                : ((0x747U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                    ? (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg)
                    : ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                        ? ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                            ? ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                ? ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                    ? ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                        ? 0U : ((0x40U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                 ? 0U
                                                 : 
                                                ((0x20U 
                                                  & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                       ? 0U
                                                       : 0x41535452U)
                                                      : 0U)))
                                                   : 0U))))
                                    : 0U) : ((0x100U 
                                              & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                              ? 0U : 
                                             ((0x80U 
                                               & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                               ? ((0x40U 
                                                   & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                         ? 0U
                                                         : vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                         ? 0U
                                                         : vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi)))))))
                                               : ((0x40U 
                                                   & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                         ? 0U
                                                         : vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                         ? 0U
                                                         : vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo))))))))))
                            : ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                ? ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                    ? ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                        ? ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                            ? 0U : 
                                           ((0x20U 
                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                              ? 0U : 
                                             ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                               ? 0U
                                               : ((4U 
                                                   & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                     ? 0U
                                                     : vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                     ? 0U
                                                     : vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi)))))))
                                        : ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                            ? 0U : 
                                           ((0x20U 
                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                              ? 0U : 
                                             ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                               ? 0U
                                               : ((4U 
                                                   & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                     ? 0U
                                                     : vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                     ? 0U
                                                     : vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo))))))))
                                    : 0U) : 0U)) : 
                       ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                         ? 0U : ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                  ? ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                      ? ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                          ? 0U : ((0x40U 
                                                   & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                         ? 0U
                                                         : vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                         ? vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval
                                                         : vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                         ? vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc
                                                         : vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                         ? vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec
                                                         : vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))
                                                         ? vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff
                                                         : vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus))))))))
                                      : 0U) : 0U))))));
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5835]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5836]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5837]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5838]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5839]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5840]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5841]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5842]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5843]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5844]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5845]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5846]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5847]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5848]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5849]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5850]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5851]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5852]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5853]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5854]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5855]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5856]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5857]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5858]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5859]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5860]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5861]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5862]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5863]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5864]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5865]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val))) {
        ++(vlSymsp->__Vcoverage[5866]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dtmcs_val) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val));
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__9__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5573]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((5U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((6U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5554]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((5U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((4U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5552]);
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5549]);
        }
    }
    if ((0U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        ++(vlSymsp->__Vcoverage[5548]);
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((5U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((6U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5555]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((5U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((6U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5554]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((4U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5552]);
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((5U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((4U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5552]);
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5549]);
        }
    }
    if ((0U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        ++(vlSymsp->__Vcoverage[5548]);
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((5U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((3U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5551]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5549]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((0U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        ++(vlSymsp->__Vcoverage[5548]);
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((5U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        if ((0x1eU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((5U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((6U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5554]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__10__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
