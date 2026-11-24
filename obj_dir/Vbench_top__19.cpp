// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench_top.h for the primary calling header

#include "Vbench_top.h"
#include "Vbench_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vbench_top::_combo__TOP__41(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_combo__TOP__41\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->bench_top__DOT__u_core__DOT__g_pmp__DOT__pmp_fetch_fault 
        = vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.fault;
    vlTOPp->bench_top__DOT__u_core__DOT__g_pmp__DOT__pmp_data_fault 
        = vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.fault;
    vlTOPp->bench_top__DOT__u_core__DOT__acc_fetch_fault 
        = ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
           & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_pmp__DOT__pmp_fetch_fault));
    vlTOPp->bench_top__DOT__u_core__DOT__acc_load_fault 
        = (((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re)) 
           & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_pmp__DOT__pmp_data_fault));
    vlTOPp->bench_top__DOT__u_core__DOT__acc_store_fault 
        = (((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we)) 
           & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_pmp__DOT__pmp_data_fault));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__acc_fetch_fault) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__acc_fetch_fault)) {
        ++(vlSymsp->__Vcoverage[2287]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__acc_fetch_fault 
            = vlTOPp->bench_top__DOT__u_core__DOT__acc_fetch_fault;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__acc_load_fault) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__acc_load_fault)) {
        ++(vlSymsp->__Vcoverage[2288]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__acc_load_fault 
            = vlTOPp->bench_top__DOT__u_core__DOT__acc_load_fault;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__acc_store_fault) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__acc_store_fault)) {
        ++(vlSymsp->__Vcoverage[2289]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__acc_store_fault 
            = vlTOPp->bench_top__DOT__u_core__DOT__acc_store_fault;
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__acc_fetch_fault) {
        vlTOPp->bench_top__DOT__u_core__DOT__ex_cause = 1U;
        vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
            = vlTOPp->bench_top__DOT__u_core__DOT__pc;
    } else {
        vlTOPp->bench_top__DOT__u_core__DOT__ex_cause 
            = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__illegal_any)
                ? 2U : ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_ecall)
                         ? ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__cur_priv))
                             ? 8U : 0xbU) : ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_ebreak)
                                              ? 3U : 
                                             ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__acc_load_fault)
                                               ? 5U
                                               : ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__acc_store_fault)
                                                   ? 7U
                                                   : 2U)))));
        vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
            = (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__acc_load_fault) 
                | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__acc_store_fault))
                ? vlTOPp->bench_top__DOT__u_core__DOT__alu_y
                : ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__illegal_any)
                    ? vlTOPp->bench_top__DOT__u_core__DOT__instr
                    : 0U));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__acc_fault 
        = (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__acc_fetch_fault) 
            | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__acc_load_fault)) 
           | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__acc_store_fault));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_cause))) {
        ++(vlSymsp->__Vcoverage[2296]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_cause 
            = ((0xeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_cause)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_cause)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_cause))) {
        ++(vlSymsp->__Vcoverage[2297]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_cause 
            = ((0xdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_cause)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_cause)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_cause))) {
        ++(vlSymsp->__Vcoverage[2298]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_cause 
            = ((0xbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_cause)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_cause)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_cause))) {
        ++(vlSymsp->__Vcoverage[2299]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_cause 
            = ((7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_cause)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_cause)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__trap_tval 
        = vlTOPp->bench_top__DOT__u_core__DOT__ex_tval;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2300]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2301]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2302]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2303]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2304]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2305]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2306]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2307]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2308]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2309]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2310]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2311]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2312]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2313]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2314]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2315]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2316]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2317]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2318]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2319]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2320]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2321]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2322]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2323]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2324]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2325]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2326]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2327]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2328]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2329]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2330]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__ex_tval 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval))) {
        ++(vlSymsp->__Vcoverage[2331]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_tval) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__ex_tval));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__acc_fault) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__acc_fault)) {
        ++(vlSymsp->__Vcoverage[2290]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__acc_fault 
            = vlTOPp->bench_top__DOT__u_core__DOT__acc_fault;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__ex_trap = 
        ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
         & ((((IData)(vlTOPp->bench_top__DOT__u_core__DOT__illegal_any) 
              | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_ecall)) 
             | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_ebreak) 
                & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_ebreakm)))) 
            | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__acc_fault)));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_trap)) {
        ++(vlSymsp->__Vcoverage[2295]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ex_trap 
            = vlTOPp->bench_top__DOT__u_core__DOT__ex_trap;
    }
    vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_cause 
        = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)
            ? (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_cause)
            : (IData)(vlTOPp->bench_top__DOT__u_core__DOT__irq_cause));
    vlTOPp->bench_top__DOT__u_core__DOT__is_store_ex 
        = (((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we)) 
           & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__trap_cause 
        = vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_cause;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_cause))) {
        ++(vlSymsp->__Vcoverage[4626]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_cause 
            = ((0xeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_cause)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_cause)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_cause))) {
        ++(vlSymsp->__Vcoverage[4627]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_cause 
            = ((0xdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_cause)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_cause)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_cause))) {
        ++(vlSymsp->__Vcoverage[4628]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_cause 
            = ((0xbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_cause)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_cause)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_cause))) {
        ++(vlSymsp->__Vcoverage[4629]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_cause 
            = ((7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_cause)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_cause)));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__is_store_ex) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__is_store_ex)) {
        ++(vlSymsp->__Vcoverage[2517]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__is_store_ex 
            = vlTOPp->bench_top__DOT__u_core__DOT__is_store_ex;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__mem_req = 
        ((((((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
             | (4U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) 
            | (2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) 
           | (5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) 
          | (6U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) 
         | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__is_store_ex));
    vlTOPp->bench_top__DOT__u_core__DOT__dmem_be = 
        (0xfU & ((6U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))
                  ? ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8) 
                     >> 4U) : ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__is_store_ex)
                                ? (IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8)
                                : 0U)));
    vlTOPp->bench_top__DOT__u_core__DOT__dmem_we = 
        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__is_store_ex) 
         | (6U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__mem_req) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mem_req)) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mem_req 
            = vlTOPp->bench_top__DOT__u_core__DOT__mem_req;
    }
    vlTOPp->bench_top__DOT__core_mem_req = vlTOPp->bench_top__DOT__u_core__DOT__mem_req;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dmem_be) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_be))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_be 
            = ((0xeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_be)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dmem_be)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dmem_be) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_be))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_be 
            = ((0xdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_be)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dmem_be)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dmem_be) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_be))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_be 
            = ((0xbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_be)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dmem_be)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dmem_be) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_be))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_be 
            = ((7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_be)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dmem_be)));
    }
    vlTOPp->bench_top__DOT__dmem_be = vlTOPp->bench_top__DOT__u_core__DOT__dmem_be;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dmem_we) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_we)) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_we 
            = vlTOPp->bench_top__DOT__u_core__DOT__dmem_we;
    }
    vlTOPp->bench_top__DOT__dmem_we = vlTOPp->bench_top__DOT__u_core__DOT__dmem_we;
    if (((IData)(vlTOPp->bench_top__DOT__core_mem_req) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__core_mem_req)) {
        ++(vlSymsp->__Vcoverage[630]);
        vlTOPp->bench_top__DOT____Vtogcov__core_mem_req 
            = vlTOPp->bench_top__DOT__core_mem_req;
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__dmem_be) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_be))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_be 
            = ((0xeU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dmem_be)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__dmem_be)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__dmem_be) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_be))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_be 
            = ((0xdU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dmem_be)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__dmem_be)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__dmem_be) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_be))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_be 
            = ((0xbU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dmem_be)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__dmem_be)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__dmem_be) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_be))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_be 
            = ((7U & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dmem_be)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__dmem_be)));
    }
    vlTOPp->bench_top__DOT__merged_word = ((0xff000000U 
                                            & (((8U 
                                                 & (IData)(vlTOPp->bench_top__DOT__dmem_be))
                                                 ? 
                                                (vlTOPp->bench_top__DOT__dmem_wdata 
                                                 >> 0x18U)
                                                 : 
                                                (vlTOPp->bench_top__DOT__cur_word 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                           | ((0xff0000U 
                                               & (((4U 
                                                    & (IData)(vlTOPp->bench_top__DOT__dmem_be))
                                                    ? 
                                                   (vlTOPp->bench_top__DOT__dmem_wdata 
                                                    >> 0x10U)
                                                    : 
                                                   (vlTOPp->bench_top__DOT__cur_word 
                                                    >> 0x10U)) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (((2U 
                                                       & (IData)(vlTOPp->bench_top__DOT__dmem_be))
                                                       ? 
                                                      (vlTOPp->bench_top__DOT__dmem_wdata 
                                                       >> 8U)
                                                       : 
                                                      (vlTOPp->bench_top__DOT__cur_word 
                                                       >> 8U)) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & ((1U 
                                                        & (IData)(vlTOPp->bench_top__DOT__dmem_be))
                                                        ? vlTOPp->bench_top__DOT__dmem_wdata
                                                        : vlTOPp->bench_top__DOT__cur_word)))));
    vlTOPp->bench_top__DOT__merged_imem_word = ((0xff000000U 
                                                 & (((8U 
                                                      & (IData)(vlTOPp->bench_top__DOT__dmem_be))
                                                      ? 
                                                     (vlTOPp->bench_top__DOT__dmem_wdata 
                                                      >> 0x18U)
                                                      : 
                                                     (vlTOPp->bench_top__DOT__cur_imem_word 
                                                      >> 0x18U)) 
                                                    << 0x18U)) 
                                                | ((0xff0000U 
                                                    & (((4U 
                                                         & (IData)(vlTOPp->bench_top__DOT__dmem_be))
                                                         ? 
                                                        (vlTOPp->bench_top__DOT__dmem_wdata 
                                                         >> 0x10U)
                                                         : 
                                                        (vlTOPp->bench_top__DOT__cur_imem_word 
                                                         >> 0x10U)) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & (((2U 
                                                            & (IData)(vlTOPp->bench_top__DOT__dmem_be))
                                                            ? 
                                                           (vlTOPp->bench_top__DOT__dmem_wdata 
                                                            >> 8U)
                                                            : 
                                                           (vlTOPp->bench_top__DOT__cur_imem_word 
                                                            >> 8U)) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & ((1U 
                                                             & (IData)(vlTOPp->bench_top__DOT__dmem_be))
                                                             ? vlTOPp->bench_top__DOT__dmem_wdata
                                                             : vlTOPp->bench_top__DOT__cur_imem_word)))));
    if (((IData)(vlTOPp->bench_top__DOT__dmem_we) ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_we)) {
        ++(vlSymsp->__Vcoverage[233]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_we 
            = vlTOPp->bench_top__DOT__dmem_we;
    }
    vlTOPp->bench_top__DOT__mem_req = ((IData)(vlTOPp->bench_top__DOT__dmem_re) 
                                       | (IData)(vlTOPp->bench_top__DOT__dmem_we));
    if ((1U & (vlTOPp->bench_top__DOT__merged_word 
               ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (1U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((2U & (vlTOPp->bench_top__DOT__merged_word 
               ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (2U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((4U & (vlTOPp->bench_top__DOT__merged_word 
               ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (4U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((8U & (vlTOPp->bench_top__DOT__merged_word 
               ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (8U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__merged_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x10U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__merged_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x20U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__merged_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x40U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__merged_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x80U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__merged_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x100U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__merged_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x200U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__merged_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x400U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__merged_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x800U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__merged_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x1000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__merged_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x2000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__merged_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x4000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__merged_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x8000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__merged_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x10000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__merged_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x20000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__merged_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x40000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__merged_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x80000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__merged_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x100000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__merged_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x200000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__merged_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x400000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__merged_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x800000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__merged_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x1000000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__merged_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x2000000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__merged_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x4000000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__merged_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x8000000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__merged_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x10000000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__merged_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x20000000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__merged_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x40000000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__merged_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__merged_word))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_word 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_word) 
               | (0x80000000U & vlTOPp->bench_top__DOT__merged_word));
    }
    if ((1U & (vlTOPp->bench_top__DOT__merged_imem_word 
               ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (1U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((2U & (vlTOPp->bench_top__DOT__merged_imem_word 
               ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (2U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((4U & (vlTOPp->bench_top__DOT__merged_imem_word 
               ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (4U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((8U & (vlTOPp->bench_top__DOT__merged_imem_word 
               ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (8U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__merged_imem_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x10U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__merged_imem_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x20U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__merged_imem_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x40U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__merged_imem_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x80U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__merged_imem_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x100U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__merged_imem_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x200U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__merged_imem_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x400U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__merged_imem_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x800U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x1000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x2000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x4000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x8000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x10000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x20000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x40000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x80000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x100000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x200000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x400000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x800000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x1000000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x2000000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x4000000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x8000000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x10000000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x20000000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x40000000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__merged_imem_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__merged_imem_word) 
               | (0x80000000U & vlTOPp->bench_top__DOT__merged_imem_word));
    }
    if (((IData)(vlTOPp->bench_top__DOT__mem_req) ^ vlTOPp->bench_top__DOT____Vtogcov__mem_req)) {
        ++(vlSymsp->__Vcoverage[553]);
        vlTOPp->bench_top__DOT____Vtogcov__mem_req 
            = vlTOPp->bench_top__DOT__mem_req;
    }
    vlTOPp->bench_top__DOT__mem_stall = ((IData)(vlTOPp->bench_top__DOT__mem_req) 
                                         & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall_q)));
    if (((IData)(vlTOPp->bench_top__DOT__mem_stall) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__mem_stall)) {
        ++(vlSymsp->__Vcoverage[558]);
        vlTOPp->bench_top__DOT____Vtogcov__mem_stall 
            = vlTOPp->bench_top__DOT__mem_stall;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__mem_stall 
        = vlTOPp->bench_top__DOT__mem_stall;
    vlTOPp->bench_top__DOT__u_core__DOT__commit = (
                                                   (((((((((1U 
                                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
                                                           & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re))) 
                                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_md))) 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__mis)))) 
                                                        & (~ 
                                                           ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                                            & (IData)(vlTOPp->bench_top__DOT__mem_stall)))) 
                                                       & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug))) 
                                                      | (((2U 
                                                           == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
                                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__mis))) 
                                                         & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) 
                                                     | ((5U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
                                                        & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) 
                                                    | ((6U 
                                                        == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
                                                       & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) 
                                                   | ((3U 
                                                       == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
                                                      & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__md_done)));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
         | ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
        if (vlTOPp->bench_top__DOT__u_core__DOT__ex_trap) {
            ++(vlSymsp->__Vcoverage[2915]);
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
         | ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
        ++(vlSymsp->__Vcoverage[2916]);
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
                  | ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
        ++(vlSymsp->__Vcoverage[2917]);
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
         | ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
            if (vlTOPp->bench_top__DOT__u_core__DOT__d_is_mret) {
                ++(vlSymsp->__Vcoverage[2914]);
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__commit)) {
        ++(vlSymsp->__Vcoverage[2436]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__commit 
            = vlTOPp->bench_top__DOT__u_core__DOT__commit;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__retire 
        = vlTOPp->bench_top__DOT__u_core__DOT__commit;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
         | ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__d_is_jal) {
                    ++(vlSymsp->__Vcoverage[2913]);
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
         | ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_mret)))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_jal)))) {
                    if (vlTOPp->bench_top__DOT__u_core__DOT__d_is_jalr) {
                        ++(vlSymsp->__Vcoverage[2912]);
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
         | ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_mret)))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_jal)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_jalr)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_branch) 
                                      & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__br_taken))))) {
                            ++(vlSymsp->__Vcoverage[2911]);
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
         | ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_mret)))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_jal)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_jalr)))) {
                        if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_branch) 
                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__br_taken))) {
                            ++(vlSymsp->__Vcoverage[2910]);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret 
        = (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_mret)) 
           & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)));
    vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff 
        = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode)
            ? (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_csr_we)
            : (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_do_write)) 
               & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap))));
    vlTOPp->bench_top__DOT__u_core__DOT__retire_valid 
        = vlTOPp->bench_top__DOT__u_core__DOT__commit;
    vlTOPp->bench_top__DOT__u_core__DOT__rf_we = ((
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_reg_we)) 
                                                   & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap))) 
                                                  & (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rd)));
    vlTOPp->bench_top__DOT__u_core__DOT__take_irq = 
        (((((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__irq_req)) 
           & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap))) 
          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_mret))) 
         & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_csr)));
    vlTOPp->bench_top__DOT__u_core__DOT__seq_next = 
        (vlTOPp->bench_top__DOT__u_core__DOT__pc + (IData)(vlTOPp->bench_top__DOT__u_core__DOT__instr_len));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
         | ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
        if (vlTOPp->bench_top__DOT__u_core__DOT__ex_trap) {
            vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                = vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w;
        } else {
            if (vlTOPp->bench_top__DOT__u_core__DOT__d_is_mret) {
                vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                    = vlTOPp->bench_top__DOT__u_core__DOT__mepc_w;
            } else {
                if (vlTOPp->bench_top__DOT__u_core__DOT__d_is_jal) {
                    vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                        = (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                           + vlTOPp->bench_top__DOT__u_core__DOT__id_imm);
                } else {
                    if (vlTOPp->bench_top__DOT__u_core__DOT__d_is_jalr) {
                        vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                            = vlTOPp->bench_top__DOT__u_core__DOT__jalr_t;
                    } else {
                        if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_branch) 
                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__br_taken))) {
                            vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                                = (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                                   + vlTOPp->bench_top__DOT__u_core__DOT__id_imm);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mret 
        = vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mret)) {
        ++(vlSymsp->__Vcoverage[4662]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mret 
            = vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_we_eff)) {
        ++(vlSymsp->__Vcoverage[2452]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_we_eff 
            = vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_we 
        = vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_valid) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_valid)) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_valid 
            = vlTOPp->bench_top__DOT__u_core__DOT__retire_valid;
    }
    vlTOPp->bench_top__DOT__retire_valid = vlTOPp->bench_top__DOT__u_core__DOT__retire_valid;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_we)) {
        ++(vlSymsp->__Vcoverage[1803]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_we 
            = vlTOPp->bench_top__DOT__u_core__DOT__rf_we;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff 
        = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_gpr_we) 
           | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we));
    vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_we 
        = vlTOPp->bench_top__DOT__u_core__DOT__rf_we;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__take_irq) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__take_irq)) {
        ++(vlSymsp->__Vcoverage[2437]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__take_irq 
            = vlTOPp->bench_top__DOT__u_core__DOT__take_irq;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__trap_interrupt 
        = vlTOPp->bench_top__DOT__u_core__DOT__take_irq;
    vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set 
        = (((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)) 
           | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__take_irq));
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2396]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2397]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2398]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2399]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2400]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2401]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2402]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2403]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2404]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2405]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2406]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2407]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2408]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2409]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2410]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2411]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2412]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2413]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2414]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2415]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2416]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2417]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2418]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2419]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2420]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2421]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2422]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2423]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2424]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2425]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2426]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__seq_next 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next))) {
        ++(vlSymsp->__Vcoverage[2427]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__seq_next) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__seq_next));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__next_pc = 
        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__take_irq)
          ? vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w
          : vlTOPp->bench_top__DOT__u_core__DOT__seq_next);
    vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
        = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)
            ? vlTOPp->bench_top__DOT__u_core__DOT__pc
            : vlTOPp->bench_top__DOT__u_core__DOT__seq_next);
    vlTOPp->retire_valid = vlTOPp->bench_top__DOT__retire_valid;
    if (((IData)(vlTOPp->bench_top__DOT__retire_valid) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__retire_valid)) {
        ++(vlSymsp->__Vcoverage[39]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_valid 
            = vlTOPp->bench_top__DOT__retire_valid;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_we_eff)) {
        ++(vlSymsp->__Vcoverage[1880]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_we_eff 
            = vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__we 
        = vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_we) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_we)) {
        ++(vlSymsp->__Vcoverage[1235]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_we 
            = vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_we;
    }
    vlTOPp->bench_top__DOT__retire_rd_we = vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_we;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__trap_set 
        = vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_set)) {
        ++(vlSymsp->__Vcoverage[4625]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_set 
            = vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set;
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2931]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2932]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2933]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2934]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2935]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2936]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2937]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2938]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2939]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2940]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2941]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2942]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2943]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2944]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2945]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2946]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2947]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2948]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2949]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__next_pc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[2950]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__next_pc) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__next_pc));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__trap_epc 
        = vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4630]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4631]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4632]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4633]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4634]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4635]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4636]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4637]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4638]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4639]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4640]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4641]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4642]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4643]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4644]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4645]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4646]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4647]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4648]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4649]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4650]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4651]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4652]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4653]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4654]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4655]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4656]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4657]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4658]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4659]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4660]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc))) {
        ++(vlSymsp->__Vcoverage[4661]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__trap_epc) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc));
    }
    if (((IData)(vlTOPp->bench_top__DOT__retire_rd_we) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_we)) {
        ++(vlSymsp->__Vcoverage[624]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_we 
            = vlTOPp->bench_top__DOT__retire_rd_we;
    }
}

void Vbench_top::_eval(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_eval\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if._combo__TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if__3(vlSymsp);
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls._combo__TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls__4(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->_sequent__TOP__18(vlSymsp);
        vlTOPp->_sequent__TOP__19(vlSymsp);
        vlTOPp->_sequent__TOP__20(vlSymsp);
        vlTOPp->_sequent__TOP__21(vlSymsp);
        vlTOPp->_sequent__TOP__22(vlSymsp);
        vlTOPp->_sequent__TOP__23(vlSymsp);
        vlTOPp->_sequent__TOP__24(vlSymsp);
        vlTOPp->_sequent__TOP__25(vlSymsp);
        vlTOPp->_sequent__TOP__26(vlSymsp);
    }
    vlTOPp->_combo__TOP__40(vlSymsp);
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if._combo__TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if__5(vlSymsp);
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls._combo__TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls__6(vlSymsp);
    vlTOPp->_combo__TOP__41(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData Vbench_top::_change_request(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_change_request\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vbench_top::_change_request_1(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_change_request_1\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y ^ vlTOPp->__Vchglast__TOP__bench_top__DOT__u_core__DOT__u_alu__DOT__y));
    VL_DEBUG_IF( if(__req && ((vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y ^ vlTOPp->__Vchglast__TOP__bench_top__DOT__u_core__DOT__u_alu__DOT__y))) VL_DBG_MSGF("        CHANGE: rtl/common/mist_es_alu.sv:12: bench_top.u_core.u_alu.y\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__bench_top__DOT__u_core__DOT__u_alu__DOT__y 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y;
    return __req;
}

#ifdef VL_DEBUG
void Vbench_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((tck & 0xfeU))) {
        Verilated::overWidthError("tck");}
    if (VL_UNLIKELY((tms & 0xfeU))) {
        Verilated::overWidthError("tms");}
    if (VL_UNLIKELY((tdi & 0xfeU))) {
        Verilated::overWidthError("tdi");}
}
#endif  // VL_DEBUG
