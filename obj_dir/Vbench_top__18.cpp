// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench_top.h for the primary calling header

#include "Vbench_top.h"
#include "Vbench_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vbench_top::_combo__TOP__40(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_combo__TOP__40\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
        = (((5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
            | (6U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))
            ? ((IData)(4U) + (0xfffffffcU & vlTOPp->bench_top__DOT__u_core__DOT__alu_y))
            : (0xfffffffcU & vlTOPp->bench_top__DOT__u_core__DOT__alu_y));
    vlTOPp->bench_top__DOT__u_core__DOT__be8 = (0xffU 
                                                & (((0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_width))
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_width))
                                                      ? 3U
                                                      : 0xfU)) 
                                                   << (IData)(vlTOPp->bench_top__DOT__u_core__DOT__aoff)));
    vlTOPp->bench_top__DOT__u_core__DOT__mis = (((2U 
                                                  == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_width)) 
                                                 & (0U 
                                                    != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__aoff))) 
                                                | ((1U 
                                                    == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_width)) 
                                                   & (3U 
                                                      == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__aoff))));
    vlTOPp->bench_top__DOT__core_rst = ((IData)(vlTOPp->rst) 
                                        | (IData)(vlTOPp->bench_top__DOT__ndmreset));
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_addr) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr));
    }
    vlTOPp->bench_top__DOT__dmem_addr = vlTOPp->bench_top__DOT__u_core__DOT__dmem_addr;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8))) {
        ++(vlSymsp->__Vcoverage[2646]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8 
            = ((0xfeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8))) {
        ++(vlSymsp->__Vcoverage[2647]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8 
            = ((0xfdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8))) {
        ++(vlSymsp->__Vcoverage[2648]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8 
            = ((0xfbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8))) {
        ++(vlSymsp->__Vcoverage[2649]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8 
            = ((0xf7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8))) {
        ++(vlSymsp->__Vcoverage[2650]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8 
            = ((0xefU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8))) {
        ++(vlSymsp->__Vcoverage[2651]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8 
            = ((0xdfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8))) {
        ++(vlSymsp->__Vcoverage[2652]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8 
            = ((0xbfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8))) {
        ++(vlSymsp->__Vcoverage[2653]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8 
            = ((0x7fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__be8)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__be8)));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__mis) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mis)) {
        ++(vlSymsp->__Vcoverage[2435]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mis 
            = vlTOPp->bench_top__DOT__u_core__DOT__mis;
    }
    if (((IData)(vlTOPp->bench_top__DOT__core_rst) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__core_rst)) {
        ++(vlSymsp->__Vcoverage[559]);
        vlTOPp->bench_top__DOT____Vtogcov__core_rst 
            = vlTOPp->bench_top__DOT__core_rst;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__rst = vlTOPp->bench_top__DOT__core_rst;
    if ((1U & (vlTOPp->bench_top__DOT__dmem_addr ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (1U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((2U & (vlTOPp->bench_top__DOT__dmem_addr ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (2U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((4U & (vlTOPp->bench_top__DOT__dmem_addr ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (4U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((8U & (vlTOPp->bench_top__DOT__dmem_addr ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (8U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__dmem_addr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x10U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__dmem_addr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x20U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__dmem_addr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x40U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__dmem_addr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x80U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__dmem_addr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x100U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__dmem_addr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x200U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__dmem_addr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x400U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__dmem_addr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x800U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__dmem_addr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x1000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__dmem_addr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x2000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__dmem_addr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x4000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__dmem_addr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x8000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__dmem_addr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x10000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__dmem_addr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x20000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__dmem_addr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x40000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__dmem_addr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x80000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__dmem_addr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x100000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__dmem_addr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x200000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__dmem_addr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x400000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__dmem_addr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x800000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__dmem_addr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x1000000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__dmem_addr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x2000000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__dmem_addr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x4000000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__dmem_addr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x8000000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__dmem_addr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x10000000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__dmem_addr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x20000000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__dmem_addr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x40000000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__dmem_addr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_addr))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_addr 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_addr) 
               | (0x80000000U & vlTOPp->bench_top__DOT__dmem_addr));
    }
    vlTOPp->bench_top__DOT__in_dram = ((0x80000000U 
                                        <= vlTOPp->bench_top__DOT__dmem_addr) 
                                       & (0x80010000U 
                                          > vlTOPp->bench_top__DOT__dmem_addr));
    vlTOPp->bench_top__DOT__in_imem = (0x10000U > vlTOPp->bench_top__DOT__dmem_addr);
    vlTOPp->bench_top__DOT__in_clint = (0x200U == (0xffffU 
                                                   & (vlTOPp->bench_top__DOT__dmem_addr 
                                                      >> 0x10U)));
    vlTOPp->bench_top__DOT__clint_rdata = ((0U == (0xffffU 
                                                   & vlTOPp->bench_top__DOT__dmem_addr))
                                            ? (IData)(vlTOPp->bench_top__DOT__msip)
                                            : ((0x4000U 
                                                == 
                                                (0xffffU 
                                                 & vlTOPp->bench_top__DOT__dmem_addr))
                                                ? vlTOPp->bench_top__DOT__mtimecmp_lo
                                                : (
                                                   (0x4004U 
                                                    == 
                                                    (0xffffU 
                                                     & vlTOPp->bench_top__DOT__dmem_addr))
                                                    ? vlTOPp->bench_top__DOT__mtimecmp_hi
                                                    : 
                                                   ((0xbff8U 
                                                     == 
                                                     (0xffffU 
                                                      & vlTOPp->bench_top__DOT__dmem_addr))
                                                     ? vlTOPp->bench_top__DOT__mtime_lo
                                                     : 
                                                    ((0xbffcU 
                                                      == 
                                                      (0xffffU 
                                                       & vlTOPp->bench_top__DOT__dmem_addr))
                                                      ? vlTOPp->bench_top__DOT__mtime_hi
                                                      : 0U)))));
    vlTOPp->bench_top__DOT__dram_idx = (0x3fffU & (vlTOPp->bench_top__DOT__dmem_addr 
                                                   >> 2U));
    vlTOPp->bench_top__DOT__imem_didx = (0x3fffU & 
                                         (vlTOPp->bench_top__DOT__dmem_addr 
                                          >> 2U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rst 
        = vlTOPp->bench_top__DOT__u_core__DOT__rst;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rst 
        = vlTOPp->bench_top__DOT__u_core__DOT__rst;
    if (((IData)(vlTOPp->bench_top__DOT__in_dram) ^ vlTOPp->bench_top__DOT____Vtogcov__in_dram)) {
        ++(vlSymsp->__Vcoverage[661]);
        vlTOPp->bench_top__DOT____Vtogcov__in_dram 
            = vlTOPp->bench_top__DOT__in_dram;
    }
    if (((IData)(vlTOPp->bench_top__DOT__in_imem) ^ vlTOPp->bench_top__DOT____Vtogcov__in_imem)) {
        ++(vlSymsp->__Vcoverage[662]);
        vlTOPp->bench_top__DOT____Vtogcov__in_imem 
            = vlTOPp->bench_top__DOT__in_imem;
    }
    if (((IData)(vlTOPp->bench_top__DOT__in_clint) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__in_clint)) {
        ++(vlSymsp->__Vcoverage[663]);
        vlTOPp->bench_top__DOT____Vtogcov__in_clint 
            = vlTOPp->bench_top__DOT__in_clint;
    }
    if ((1U & (vlTOPp->bench_top__DOT__clint_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (1U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__clint_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (2U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__clint_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (4U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__clint_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (8U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__clint_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x10U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__clint_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x20U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__clint_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x40U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__clint_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x80U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__clint_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x100U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__clint_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x200U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__clint_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x400U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__clint_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x800U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__clint_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__clint_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__clint_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__clint_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__clint_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__clint_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__clint_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__clint_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__clint_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__clint_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__clint_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__clint_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__clint_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__clint_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__clint_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__clint_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__clint_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__clint_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__clint_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__clint_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__clint_rdata))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlTOPp->bench_top__DOT____Vtogcov__clint_rdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__clint_rdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__clint_rdata));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__dram_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dram_idx))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_idx 
            = ((0x3ffeU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_idx)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__dram_idx)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__dram_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dram_idx))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_idx 
            = ((0x3ffdU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_idx)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__dram_idx)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__dram_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dram_idx))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_idx 
            = ((0x3ffbU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_idx)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__dram_idx)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__dram_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dram_idx))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_idx 
            = ((0x3ff7U & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_idx)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__dram_idx)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__dram_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dram_idx))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_idx 
            = ((0x3fefU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_idx)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__dram_idx)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__dram_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dram_idx))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_idx 
            = ((0x3fdfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_idx)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__dram_idx)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__dram_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dram_idx))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_idx 
            = ((0x3fbfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_idx)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__dram_idx)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__dram_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dram_idx))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_idx 
            = ((0x3f7fU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_idx)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__dram_idx)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__dram_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dram_idx))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_idx 
            = ((0x3effU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_idx)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__dram_idx)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__dram_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dram_idx))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_idx 
            = ((0x3dffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_idx)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__dram_idx)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__dram_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dram_idx))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_idx 
            = ((0x3bffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_idx)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__dram_idx)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__dram_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dram_idx))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_idx 
            = ((0x37ffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_idx)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__dram_idx)));
    }
    if ((0x1000U & ((IData)(vlTOPp->bench_top__DOT__dram_idx) 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dram_idx))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_idx 
            = ((0x2fffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_idx)) 
               | (0x1000U & (IData)(vlTOPp->bench_top__DOT__dram_idx)));
    }
    if ((0x2000U & ((IData)(vlTOPp->bench_top__DOT__dram_idx) 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dram_idx))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_idx 
            = ((0x1fffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_idx)) 
               | (0x2000U & (IData)(vlTOPp->bench_top__DOT__dram_idx)));
    }
    vlTOPp->bench_top__DOT__cur_word = vlTOPp->bench_top__DOT__dram
        [vlTOPp->bench_top__DOT__dram_idx];
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__imem_didx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__imem_didx))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_didx 
            = ((0x3ffeU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_didx)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__imem_didx)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__imem_didx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__imem_didx))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_didx 
            = ((0x3ffdU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_didx)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__imem_didx)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__imem_didx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__imem_didx))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_didx 
            = ((0x3ffbU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_didx)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__imem_didx)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__imem_didx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__imem_didx))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_didx 
            = ((0x3ff7U & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_didx)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__imem_didx)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__imem_didx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_didx))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_didx 
            = ((0x3fefU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_didx)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__imem_didx)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__imem_didx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_didx))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_didx 
            = ((0x3fdfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_didx)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__imem_didx)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__imem_didx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_didx))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_didx 
            = ((0x3fbfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_didx)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__imem_didx)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__imem_didx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_didx))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_didx 
            = ((0x3f7fU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_didx)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__imem_didx)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__imem_didx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_didx))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_didx 
            = ((0x3effU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_didx)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__imem_didx)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__imem_didx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_didx))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_didx 
            = ((0x3dffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_didx)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__imem_didx)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__imem_didx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_didx))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_didx 
            = ((0x3bffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_didx)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__imem_didx)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__imem_didx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_didx))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_didx 
            = ((0x37ffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_didx)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__imem_didx)));
    }
    if ((0x1000U & ((IData)(vlTOPp->bench_top__DOT__imem_didx) 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__imem_didx))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_didx 
            = ((0x2fffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_didx)) 
               | (0x1000U & (IData)(vlTOPp->bench_top__DOT__imem_didx)));
    }
    if ((0x2000U & ((IData)(vlTOPp->bench_top__DOT__imem_didx) 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__imem_didx))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_didx 
            = ((0x1fffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_didx)) 
               | (0x2000U & (IData)(vlTOPp->bench_top__DOT__imem_didx)));
    }
    vlTOPp->bench_top__DOT__cur_imem_word = vlTOPp->bench_top__DOT__imem
        [vlTOPp->bench_top__DOT__imem_didx];
    vlTOPp->bench_top__DOT__dmem_rdata = ((IData)(vlTOPp->bench_top__DOT__in_dram)
                                           ? vlTOPp->bench_top__DOT__dram
                                          [vlTOPp->bench_top__DOT__dram_idx]
                                           : ((IData)(vlTOPp->bench_top__DOT__in_clint)
                                               ? vlTOPp->bench_top__DOT__clint_rdata
                                               : ((IData)(vlTOPp->bench_top__DOT__in_imem)
                                                   ? 
                                                  vlTOPp->bench_top__DOT__imem
                                                  [vlTOPp->bench_top__DOT__imem_didx]
                                                   : 0U)));
    if ((1U & (vlTOPp->bench_top__DOT__cur_word ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (1U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((2U & (vlTOPp->bench_top__DOT__cur_word ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (2U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((4U & (vlTOPp->bench_top__DOT__cur_word ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (4U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((8U & (vlTOPp->bench_top__DOT__cur_word ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (8U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__cur_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x10U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__cur_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x20U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__cur_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x40U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__cur_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x80U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__cur_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x100U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__cur_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x200U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__cur_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x400U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__cur_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x800U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__cur_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x1000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__cur_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x2000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__cur_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x4000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__cur_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x8000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__cur_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x10000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__cur_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x20000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__cur_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x40000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__cur_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x80000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__cur_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x100000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__cur_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x200000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__cur_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x400000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__cur_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x800000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__cur_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x1000000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__cur_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x2000000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__cur_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x4000000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__cur_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x8000000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__cur_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x10000000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__cur_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x20000000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__cur_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x40000000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__cur_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__cur_word))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_word 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_word) 
               | (0x80000000U & vlTOPp->bench_top__DOT__cur_word));
    }
    if ((1U & (vlTOPp->bench_top__DOT__cur_imem_word 
               ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (1U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((2U & (vlTOPp->bench_top__DOT__cur_imem_word 
               ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (2U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((4U & (vlTOPp->bench_top__DOT__cur_imem_word 
               ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (4U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((8U & (vlTOPp->bench_top__DOT__cur_imem_word 
               ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (8U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__cur_imem_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x10U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__cur_imem_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x20U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__cur_imem_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x40U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__cur_imem_word 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x80U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__cur_imem_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x100U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__cur_imem_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x200U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__cur_imem_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x400U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__cur_imem_word 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x800U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x1000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x2000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x4000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x8000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x10000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x20000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x40000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x80000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x100000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x200000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x400000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x800000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x1000000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x2000000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x4000000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x8000000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x10000000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x20000000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x40000000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__cur_imem_word 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__cur_imem_word) 
               | (0x80000000U & vlTOPp->bench_top__DOT__cur_imem_word));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__dmem_rdata 
        = vlTOPp->bench_top__DOT__dmem_rdata;
    if ((1U & (vlTOPp->bench_top__DOT__dmem_rdata ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (1U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__dmem_rdata ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (2U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__dmem_rdata ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (4U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__dmem_rdata ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (8U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__dmem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x10U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__dmem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x20U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__dmem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x40U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__dmem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x80U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__dmem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x100U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__dmem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x200U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__dmem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x400U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__dmem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x800U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__dmem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_rdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__dmem_rdata));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__ld_comb = 
        ((5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))
          ? (((QData)((IData)(vlTOPp->bench_top__DOT__dmem_rdata)) 
              << 0x20U) | (QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__ld_w0)))
          : (QData)((IData)(vlTOPp->bench_top__DOT__dmem_rdata)));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__ld_comb) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb)))) {
        ++(vlSymsp->__Vcoverage[2654]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ld_comb)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2655]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2656]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2657]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2658]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2659]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2660]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2661]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2662]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2663]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2664]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2665]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2666]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2667]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2668]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2669]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2670]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2671]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2672]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2673]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2674]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2675]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2676]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2677]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffeffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffffbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffff7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffefffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffdfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffffbfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffff7fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffeffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffdffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffffbffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x23U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffff7ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x24U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffefffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x25U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffdfffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x26U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2692]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffffbfffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x27U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2693]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffff7fffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x28U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2694]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffeffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x29U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2695]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffdffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x2aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2696]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffffbffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x2bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2697]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffff7ffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x2cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2698]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffefffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x2dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2699]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffdfffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x2eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2700]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffffbfffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x2fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2701]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffff7fffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x30U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2702]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffeffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x31U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2703]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffdffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x32U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2704]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfffbffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x33U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2705]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfff7ffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x34U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2706]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffefffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x35U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2707]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffdfffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x36U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2708]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xffbfffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x37U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xff7fffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x38U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfeffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x39U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfdffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x3aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xfbffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x3bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xf7ffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x3cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xefffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x3dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xdfffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x3eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0xbfffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                        >> 0x3fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb 
            = ((0x7fffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_comb) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__ld_sh = (vlTOPp->bench_top__DOT__u_core__DOT__ld_comb 
                                                  >> 
                                                  ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__aoff) 
                                                   << 3U));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__ld_sh) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh)))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ld_sh)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffeffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffffbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffff7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffefffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffdfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffffbfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffff7fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2750]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffeffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2751]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffdffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2752]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffffbffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x23U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2753]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffff7ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x24U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2754]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffefffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x25U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2755]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffdfffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x26U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2756]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffffbfffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x27U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2757]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffff7fffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x28U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2758]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffeffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x29U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2759]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffdffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x2aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2760]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffffbffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x2bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2761]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffff7ffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x2cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2762]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffefffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x2dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2763]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffdfffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x2eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2764]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffffbfffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x2fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2765]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffff7fffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x30U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2766]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffeffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x31U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2767]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffdffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x32U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2768]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfffbffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x33U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2769]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfff7ffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x34U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2770]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffefffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x35U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2771]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffdfffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x36U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2772]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xffbfffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x37U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2773]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xff7fffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x38U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2774]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfeffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x39U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2775]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfdffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x3aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2776]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xfbffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x3bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2777]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xf7ffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x3cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2778]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xefffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x3dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2779]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xdfffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x3eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2780]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0xbfffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                        >> 0x3fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2781]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh 
            = ((0x7fffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ld_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__ld_sh 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__lb = (0xffU 
                                               & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ld_sh));
    vlTOPp->bench_top__DOT__u_core__DOT__lh = (0xffffU 
                                               & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ld_sh));
    vlTOPp->bench_top__DOT__u_core__DOT__lw = (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ld_sh);
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2782]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb 
            = ((0xfeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2783]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb 
            = ((0xfdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2784]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb 
            = ((0xfbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2785]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb 
            = ((0xf7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2786]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb 
            = ((0xefU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2787]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb 
            = ((0xdfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2788]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb 
            = ((0xbfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2789]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb 
            = ((0x7fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lb)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2790]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xfffeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2791]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xfffdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2792]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xfffbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2793]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xfff7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2794]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xffefU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2795]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xffdfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2796]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xffbfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2797]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xff7fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2798]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xfeffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2799]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xfdffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2800]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xfbffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2801]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xf7ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((0x1000U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2802]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xefffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (0x1000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((0x2000U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2803]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xdfffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (0x2000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((0x4000U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2804]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0xbfffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (0x4000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((0x8000U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2805]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh 
            = ((0x7fffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lh)) 
               | (0x8000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2806]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2807]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2808]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2809]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2810]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2811]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2812]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2813]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2814]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2815]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2816]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2817]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2818]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2819]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2820]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2821]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2822]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2823]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2824]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2825]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2826]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2827]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2828]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2829]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2830]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2831]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2832]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2833]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2834]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2835]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2836]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__lw 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2837]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__lw) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__lw));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__load_data 
        = ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_width))
            ? ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_unsigned)
                ? (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb)
                : ((0xffffff00U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb) 
                                                >> 7U)))) 
                                   << 8U)) | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lb)))
            : ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_width))
                ? ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_unsigned)
                    ? (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)
                    : ((0xffff0000U & ((- (IData)((1U 
                                                   & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh) 
                                                      >> 0xfU)))) 
                                       << 0x10U)) | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lh)))
                : vlTOPp->bench_top__DOT__u_core__DOT__lw));
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2838]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2839]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2840]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2841]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2842]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2843]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2844]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2845]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2846]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2847]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2848]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2849]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2850]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2851]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2852]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2853]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2854]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2855]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2856]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2857]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2858]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2859]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2860]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2861]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2862]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2863]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2864]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2865]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2866]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2867]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2868]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__load_data 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data))) {
        ++(vlSymsp->__Vcoverage[2869]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__load_data) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__load_data));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__wb_value = 
        (((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
          | (5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))
          ? vlTOPp->bench_top__DOT__u_core__DOT__load_data
          : ((3U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))
              ? vlTOPp->bench_top__DOT__u_core__DOT__md_result
              : ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel))
                  ? (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                     + (IData)(vlTOPp->bench_top__DOT__u_core__DOT__instr_len))
                  : ((3U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel))
                      ? vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata
                      : ((4U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel))
                          ? vlTOPp->bench_top__DOT__u_core__DOT__md_result
                          : vlTOPp->bench_top__DOT__u_core__DOT__alu_y)))));
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1804]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1805]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1806]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1807]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1808]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1809]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1810]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1811]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1812]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1813]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1814]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1815]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1816]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1817]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1818]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1819]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1820]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1821]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1822]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1823]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1824]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1825]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1826]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1827]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1828]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1829]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1830]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1831]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1832]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1833]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1834]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__wb_value 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value))) {
        ++(vlSymsp->__Vcoverage[1835]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__wb_value) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__wb_value));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
        = vlTOPp->bench_top__DOT__u_core__DOT__wb_value;
    vlTOPp->bench_top__DOT__u_core__DOT__rf_wd = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_gpr_we)
                                                   ? vlTOPp->bench_top__DOT__dbg_ar_wdata
                                                   : vlTOPp->bench_top__DOT__u_core__DOT__wb_value);
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1241]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1242]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1243]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1244]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1245]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1246]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1247]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1248]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1249]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1250]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1251]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1252]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1253]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1254]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1255]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1256]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1257]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1258]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1259]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1260]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1261]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1262]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1263]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1264]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1265]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1266]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1267]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1268]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1269]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1270]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1271]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[1272]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd_val) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val));
    }
    vlTOPp->bench_top__DOT__retire_rd_val = vlTOPp->bench_top__DOT__u_core__DOT__retire_rd_val;
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__wd 
        = vlTOPp->bench_top__DOT__u_core__DOT__rf_wd;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1848]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1849]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1850]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1851]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1852]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1853]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1854]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1855]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1856]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1857]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1858]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1859]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1860]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1861]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1862]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1863]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1864]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1865]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1866]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1867]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1868]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1869]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1870]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1871]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1872]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1873]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1874]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1875]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1876]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1877]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1878]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rf_wd 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd))) {
        ++(vlSymsp->__Vcoverage[1879]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wd) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__rf_wd));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
        = ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1))
            ? 0U : ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__fwd1)
                     ? vlTOPp->bench_top__DOT__u_core__DOT__rf_wd
                     : (IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1)));
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
        = ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2))
            ? 0U : ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__fwd2)
                     ? vlTOPp->bench_top__DOT__u_core__DOT__rf_wd
                     : (IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d2)));
    if ((1U & (vlTOPp->bench_top__DOT__retire_rd_val 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (1U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((2U & (vlTOPp->bench_top__DOT__retire_rd_val 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (2U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((4U & (vlTOPp->bench_top__DOT__retire_rd_val 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (4U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((8U & (vlTOPp->bench_top__DOT__retire_rd_val 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (8U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__retire_rd_val 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x10U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__retire_rd_val 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x20U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__retire_rd_val 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x40U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__retire_rd_val 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x80U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__retire_rd_val 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x100U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__retire_rd_val 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x200U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__retire_rd_val 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x400U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__retire_rd_val 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x800U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x1000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x2000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x4000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x8000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x10000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x20000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x40000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x80000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x100000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x200000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x400000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x800000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x1000000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x2000000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x4000000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x8000000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x10000000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x20000000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x40000000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__retire_rd_val 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_rd_val) 
               | (0x80000000U & vlTOPp->bench_top__DOT__retire_rd_val));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5482]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5483]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5484]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5485]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5486]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5487]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5488]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5489]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5490]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5491]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5492]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5493]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5494]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5495]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5496]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5497]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5498]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5499]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5500]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5501]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5502]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5503]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5504]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5505]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5506]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5507]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5508]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5509]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5510]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5511]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5512]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1))) {
        ++(vlSymsp->__Vcoverage[5513]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd1) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__rdata1 = vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd1;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5514]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5515]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5516]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5517]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5518]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5519]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5520]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5521]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5522]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5523]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5524]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5525]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5526]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5527]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5528]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5529]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5530]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5531]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5532]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5533]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5534]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5535]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5536]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5537]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5538]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5539]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5540]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5541]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5542]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5543]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5544]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2))) {
        ++(vlSymsp->__Vcoverage[5545]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__rd2) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__rdata2 = vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__rd2;
    vlTOPp->bench_top__DOT__u_core__DOT__u_br__DOT__a 
        = vlTOPp->bench_top__DOT__u_core__DOT__rdata1;
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a 
        = vlTOPp->bench_top__DOT__u_core__DOT__rdata1;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1747]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1748]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1749]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1750]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1751]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1752]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1753]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1754]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1755]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1756]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1757]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1758]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1759]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1760]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1761]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1762]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1763]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1764]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1765]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1766]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1767]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1768]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1769]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1))) {
        ++(vlSymsp->__Vcoverage[1770]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata1) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata1));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__alu_a = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_use_pc)
                                                   ? vlTOPp->bench_top__DOT__u_core__DOT__pc
                                                   : vlTOPp->bench_top__DOT__u_core__DOT__rdata1);
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
        = ((IData)(vlTOPp->bench_top__DOT__dbg_ar_csr)
            ? ((0x7b0U == (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))
                ? vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val
                : ((0x7b1U == (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))
                    ? vlTOPp->bench_top__DOT__u_core__DOT__dpc
                    : ((0x7b2U == (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))
                        ? vlTOPp->bench_top__DOT__u_core__DOT__dscratch0
                        : vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata)))
            : vlTOPp->bench_top__DOT__u_core__DOT__rdata1);
    vlTOPp->bench_top__DOT__u_core__DOT__csr_src = 
        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_imm_mode)
          ? (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1)
          : vlTOPp->bench_top__DOT__u_core__DOT__rdata1);
    vlTOPp->bench_top__DOT__u_core__DOT__jalr_t = (0xfffffffeU 
                                                   & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                                                      + vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    vlTOPp->bench_top__DOT__u_core__DOT__u_br__DOT__b 
        = vlTOPp->bench_top__DOT__u_core__DOT__rdata2;
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b 
        = vlTOPp->bench_top__DOT__u_core__DOT__rdata2;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1771]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1772]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1773]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1774]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1775]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1776]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1777]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1778]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1779]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1780]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1781]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1782]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1783]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1784]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1785]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1786]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1787]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1788]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1789]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1790]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1791]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1792]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1793]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1794]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1795]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1796]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1797]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1798]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1799]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1800]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1801]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2))) {
        ++(vlSymsp->__Vcoverage[1802]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rdata2) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__alu_b = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_use_imm)
                                                   ? vlTOPp->bench_top__DOT__u_core__DOT__id_imm
                                                   : vlTOPp->bench_top__DOT__u_core__DOT__rdata2);
    vlTOPp->bench_top__DOT__u_core__DOT__u_br__DOT__taken 
        = ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op))
            ? ((~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op) 
                   >> 1U)) & ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op))
                               ? (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                                  >= vlTOPp->bench_top__DOT__u_core__DOT__rdata2)
                               : (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                                  < vlTOPp->bench_top__DOT__u_core__DOT__rdata2)))
            : ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op))
                ? ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op))
                    ? VL_GTES_III(1,32,32, vlTOPp->bench_top__DOT__u_core__DOT__rdata1, vlTOPp->bench_top__DOT__u_core__DOT__rdata2)
                    : VL_LTS_III(1,32,32, vlTOPp->bench_top__DOT__u_core__DOT__rdata1, vlTOPp->bench_top__DOT__u_core__DOT__rdata2))
                : ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op))
                    ? (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                       != vlTOPp->bench_top__DOT__u_core__DOT__rdata2)
                    : (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                       == vlTOPp->bench_top__DOT__u_core__DOT__rdata2))));
    vlTOPp->bench_top__DOT__u_core__DOT__st_val = (
                                                   (0U 
                                                    == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_width))
                                                    ? 
                                                   (0xffU 
                                                    & vlTOPp->bench_top__DOT__u_core__DOT__rdata2)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_width))
                                                     ? 
                                                    (0xffffU 
                                                     & vlTOPp->bench_top__DOT__u_core__DOT__rdata2)
                                                     : vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
    vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__a 
        = vlTOPp->bench_top__DOT__u_core__DOT__alu_a;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1916]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1917]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1918]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1919]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1920]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1921]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1922]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1923]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1924]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1925]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1926]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1927]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1929]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1931]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1933]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1935]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1937]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1938]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1939]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1940]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1941]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1942]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1943]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1944]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1945]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1946]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a))) {
        ++(vlSymsp->__Vcoverage[1947]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_a) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__clz_val 
        = ((0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
            ? 0U : ((0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                     ? 1U : ((0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                              ? 2U : ((0x10000000U 
                                       & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                       ? 3U : ((0x8000000U 
                                                & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                ? 4U
                                                : (
                                                   (0x4000000U 
                                                    & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                    ? 5U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                     ? 6U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                      ? 7U
                                                      : 
                                                     ((0x800000U 
                                                       & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                       ? 8U
                                                       : 
                                                      ((0x400000U 
                                                        & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                        ? 9U
                                                        : 
                                                       ((0x200000U 
                                                         & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                         ? 0xaU
                                                         : 
                                                        ((0x100000U 
                                                          & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                          ? 0xbU
                                                          : 
                                                         ((0x80000U 
                                                           & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                           ? 0xcU
                                                           : 
                                                          ((0x40000U 
                                                            & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                            ? 0xdU
                                                            : 
                                                           ((0x20000U 
                                                             & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                             ? 0xeU
                                                             : 
                                                            ((0x10000U 
                                                              & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                              ? 0xfU
                                                              : 
                                                             ((0x8000U 
                                                               & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                               ? 0x10U
                                                               : 
                                                              ((0x4000U 
                                                                & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                ? 0x11U
                                                                : 
                                                               ((0x2000U 
                                                                 & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                 ? 0x12U
                                                                 : 
                                                                ((0x1000U 
                                                                  & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((0x800U 
                                                                   & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((0x400U 
                                                                    & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                    ? 0x15U
                                                                    : 
                                                                   ((0x200U 
                                                                     & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                     ? 0x16U
                                                                     : 
                                                                    ((0x100U 
                                                                      & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                      ? 0x17U
                                                                      : 
                                                                     ((0x80U 
                                                                       & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                       ? 0x18U
                                                                       : 
                                                                      ((0x40U 
                                                                        & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                        ? 0x19U
                                                                        : 
                                                                       ((0x20U 
                                                                         & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                         ? 0x1aU
                                                                         : 
                                                                        ((0x10U 
                                                                          & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((8U 
                                                                           & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((4U 
                                                                            & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((2U 
                                                                             & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((1U 
                                                                              & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                              ? 0x1fU
                                                                              : 0x20U))))))))))))))))))))))))))))))));
    vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__ctz_val 
        = ((1U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
            ? 0U : ((2U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                     ? 1U : ((4U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                              ? 2U : ((8U & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                       ? 3U : ((0x10U 
                                                & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                ? 4U
                                                : (
                                                   (0x20U 
                                                    & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                    ? 5U
                                                    : 
                                                   ((0x40U 
                                                     & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                     ? 6U
                                                     : 
                                                    ((0x80U 
                                                      & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                      ? 7U
                                                      : 
                                                     ((0x100U 
                                                       & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                       ? 8U
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                        ? 9U
                                                        : 
                                                       ((0x400U 
                                                         & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                         ? 0xaU
                                                         : 
                                                        ((0x800U 
                                                          & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                          ? 0xbU
                                                          : 
                                                         ((0x1000U 
                                                           & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                           ? 0xcU
                                                           : 
                                                          ((0x2000U 
                                                            & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                            ? 0xdU
                                                            : 
                                                           ((0x4000U 
                                                             & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                             ? 0xeU
                                                             : 
                                                            ((0x8000U 
                                                              & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                              ? 0xfU
                                                              : 
                                                             ((0x10000U 
                                                               & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                               ? 0x10U
                                                               : 
                                                              ((0x20000U 
                                                                & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                ? 0x11U
                                                                : 
                                                               ((0x40000U 
                                                                 & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                 ? 0x12U
                                                                 : 
                                                                ((0x80000U 
                                                                  & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((0x100000U 
                                                                   & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((0x200000U 
                                                                    & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                    ? 0x15U
                                                                    : 
                                                                   ((0x400000U 
                                                                     & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                     ? 0x16U
                                                                     : 
                                                                    ((0x800000U 
                                                                      & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                      ? 0x17U
                                                                      : 
                                                                     ((0x1000000U 
                                                                       & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                       ? 0x18U
                                                                       : 
                                                                      ((0x2000000U 
                                                                        & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                        ? 0x19U
                                                                        : 
                                                                       ((0x4000000U 
                                                                         & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                         ? 0x1aU
                                                                         : 
                                                                        ((0x8000000U 
                                                                          & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((0x10000000U 
                                                                           & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((0x20000000U 
                                                                            & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((0x40000000U 
                                                                             & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((0x80000000U 
                                                                              & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                                                              ? 0x1fU
                                                                              : 0x20U))))))))))))))))))))))))))))))));
    vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__cpop_val 
        = (0x3fU & ((((((((((((((((((((((((((((((((1U 
                                                   & vlTOPp->bench_top__DOT__u_core__DOT__alu_a) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                      >> 1U))) 
                                                 + 
                                                 (1U 
                                                  & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                     >> 2U))) 
                                                + (1U 
                                                   & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                      >> 3U))) 
                                               + (1U 
                                                  & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                     >> 4U))) 
                                              + (1U 
                                                 & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                    >> 5U))) 
                                             + (1U 
                                                & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                   >> 6U))) 
                                            + (1U & 
                                               (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                >> 7U))) 
                                           + (1U & 
                                              (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                               >> 8U))) 
                                          + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                   >> 9U))) 
                                         + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                  >> 0xaU))) 
                                        + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                 >> 0xbU))) 
                                       + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                >> 0xcU))) 
                                      + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                               >> 0xdU))) 
                                     + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                              >> 0xeU))) 
                                    + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                             >> 0xfU))) 
                                   + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                            >> 0x10U))) 
                                  + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                           >> 0x11U))) 
                                 + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                          >> 0x12U))) 
                                + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                         >> 0x13U))) 
                               + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                        >> 0x14U))) 
                              + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                       >> 0x15U))) 
                             + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                      >> 0x16U))) + 
                            (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                   >> 0x17U))) + (1U 
                                                  & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                     >> 0x18U))) 
                          + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                   >> 0x19U))) + (1U 
                                                  & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                     >> 0x1aU))) 
                        + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                 >> 0x1bU))) + (1U 
                                                & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                   >> 0x1cU))) 
                      + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                               >> 0x1dU))) + (1U & 
                                              (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                               >> 0x1eU))) 
                    + (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                             >> 0x1fU))));
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1274]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1275]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1278]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1279]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1280]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1281]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1282]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1283]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1284]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1285]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1286]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1287]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1288]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata));
    }
    vlTOPp->bench_top__DOT__dbg_ar_rdata = vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_rdata;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_src 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_src) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_src));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__csr_wval = 
        ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn))
          ? vlTOPp->bench_top__DOT__u_core__DOT__csr_src
          : ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn))
              ? (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                 | vlTOPp->bench_top__DOT__u_core__DOT__csr_src)
              : ((3U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn))
                  ? (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                     & (~ vlTOPp->bench_top__DOT__u_core__DOT__csr_src))
                  : vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata)));
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2878]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2879]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2880]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2881]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2882]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2883]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2884]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__jalr_t 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__jalr_t) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__jalr_t));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__b 
        = vlTOPp->bench_top__DOT__u_core__DOT__alu_b;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1948]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1949]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1950]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1951]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1952]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1953]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1954]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1955]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1956]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1957]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1958]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1959]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1960]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1961]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1962]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1963]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1964]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1965]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1966]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1967]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1968]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1969]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1970]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1971]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1972]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1973]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1974]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1975]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1976]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1977]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1978]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_b 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b))) {
        ++(vlSymsp->__Vcoverage[1979]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__alu_b) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__alu_b));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt 
        = (0x1fU & vlTOPp->bench_top__DOT__u_core__DOT__alu_b);
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_br__DOT__taken) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_br__DOT____Vtogcov__taken)) {
        ++(vlSymsp->__Vcoverage[3673]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_br__DOT____Vtogcov__taken 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_br__DOT__taken;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__br_taken = vlTOPp->bench_top__DOT__u_core__DOT__u_br__DOT__taken;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2550]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2551]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2552]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2553]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2554]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2555]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2556]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2557]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2558]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2559]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2560]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2561]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2562]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2563]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2564]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2565]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2566]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2567]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2568]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2569]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2570]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2571]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2572]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2573]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2574]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2575]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2576]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2577]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2578]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2579]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2580]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__st_val 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val))) {
        ++(vlSymsp->__Vcoverage[2581]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_val) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__st_val));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__st_sh = ((QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__st_val)) 
                                                  << 
                                                  ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__aoff) 
                                                   << 3U));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__clz_val) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val))) {
        ++(vlSymsp->__Vcoverage[3618]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val 
            = ((0x3eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__clz_val)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__clz_val) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val))) {
        ++(vlSymsp->__Vcoverage[3619]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val 
            = ((0x3dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__clz_val)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__clz_val) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val))) {
        ++(vlSymsp->__Vcoverage[3620]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val 
            = ((0x3bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__clz_val)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__clz_val) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val))) {
        ++(vlSymsp->__Vcoverage[3621]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val 
            = ((0x37U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__clz_val)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__clz_val) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val))) {
        ++(vlSymsp->__Vcoverage[3622]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val 
            = ((0x2fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__clz_val)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__clz_val) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val))) {
        ++(vlSymsp->__Vcoverage[3623]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val 
            = ((0x1fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__clz_val)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__clz_val)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__ctz_val) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val))) {
        ++(vlSymsp->__Vcoverage[3624]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val 
            = ((0x3eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__ctz_val)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__ctz_val) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val))) {
        ++(vlSymsp->__Vcoverage[3625]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val 
            = ((0x3dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__ctz_val)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__ctz_val) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val))) {
        ++(vlSymsp->__Vcoverage[3626]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val 
            = ((0x3bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__ctz_val)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__ctz_val) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val))) {
        ++(vlSymsp->__Vcoverage[3627]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val 
            = ((0x37U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__ctz_val)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__ctz_val) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val))) {
        ++(vlSymsp->__Vcoverage[3628]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val 
            = ((0x2fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__ctz_val)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__ctz_val) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val))) {
        ++(vlSymsp->__Vcoverage[3629]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val 
            = ((0x1fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__ctz_val)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__ctz_val)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__cpop_val) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val))) {
        ++(vlSymsp->__Vcoverage[3630]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val 
            = ((0x3eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__cpop_val)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__cpop_val) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val))) {
        ++(vlSymsp->__Vcoverage[3631]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val 
            = ((0x3dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__cpop_val)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__cpop_val) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val))) {
        ++(vlSymsp->__Vcoverage[3632]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val 
            = ((0x3bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__cpop_val)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__cpop_val) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val))) {
        ++(vlSymsp->__Vcoverage[3633]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val 
            = ((0x37U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__cpop_val)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__cpop_val) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val))) {
        ++(vlSymsp->__Vcoverage[3634]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val 
            = ((0x2fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__cpop_val)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__cpop_val) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val))) {
        ++(vlSymsp->__Vcoverage[3635]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val 
            = ((0x1fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__cpop_val)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__cpop_val)));
    }
    vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_rdata 
        = vlTOPp->bench_top__DOT__dbg_ar_rdata;
    if ((1U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (1U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (2U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (4U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (8U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x10U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x20U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x40U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x80U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x100U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x200U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x400U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x800U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__dbg_ar_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_rdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__dbg_ar_rdata));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2139]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2140]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2141]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2142]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2143]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2144]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wval 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval))) {
        ++(vlSymsp->__Vcoverage[2145]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wval) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wval));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
        = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode)
            ? vlTOPp->bench_top__DOT__dbg_ar_wdata : vlTOPp->bench_top__DOT__u_core__DOT__csr_wval);
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt))) {
        ++(vlSymsp->__Vcoverage[3612]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt))) {
        ++(vlSymsp->__Vcoverage[3613]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt))) {
        ++(vlSymsp->__Vcoverage[3614]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt))) {
        ++(vlSymsp->__Vcoverage[3615]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt))) {
        ++(vlSymsp->__Vcoverage[3616]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__shamt)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__bext_bit 
        = (1U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                 >> (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt)));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__br_taken) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__br_taken)) {
        ++(vlSymsp->__Vcoverage[2012]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__br_taken 
            = vlTOPp->bench_top__DOT__u_core__DOT__br_taken;
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__st_sh) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh)))) {
        ++(vlSymsp->__Vcoverage[2582]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__st_sh)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2583]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2584]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2585]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2586]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2587]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2588]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2589]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2590]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2591]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2592]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2593]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2594]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2595]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2596]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2597]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2598]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2599]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2600]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2601]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2602]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2603]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2604]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2605]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2606]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffeffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2607]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2608]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffffbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2609]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffff7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2610]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffefffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2611]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffdfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2612]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffffbfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2613]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffff7fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2614]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffeffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2615]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffdffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2616]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffffbffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x23U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2617]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffff7ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x24U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2618]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffefffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x25U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2619]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffdfffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x26U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2620]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffffbfffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x27U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2621]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffff7fffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x28U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2622]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffeffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x29U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2623]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffdffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x2aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2624]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffffbffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x2bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2625]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffff7ffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x2cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2626]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffefffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x2dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2627]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffdfffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x2eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2628]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffffbfffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x2fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2629]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffff7fffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x30U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2630]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffeffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x31U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2631]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffdffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x32U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2632]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfffbffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x33U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2633]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfff7ffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x34U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2634]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffefffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x35U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2635]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffdfffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x36U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2636]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xffbfffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x37U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2637]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xff7fffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x38U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2638]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfeffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x39U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2639]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfdffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x3aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2640]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xfbffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x3bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2641]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xf7ffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x3cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2642]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xefffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x3dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2643]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xdfffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x3eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2644]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0xbfffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                        >> 0x3fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2645]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh 
            = ((0x7fffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__st_sh) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
        = ((6U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))
            ? (IData)((vlTOPp->bench_top__DOT__u_core__DOT__st_sh 
                       >> 0x20U)) : (IData)(vlTOPp->bench_top__DOT__u_core__DOT__st_sh));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_wdata 
        = vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2453]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2454]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2455]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2456]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2457]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2458]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2459]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2460]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2461]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2462]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2463]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2464]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2465]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2466]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2467]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2468]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2469]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2470]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2471]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2472]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2473]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2474]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2475]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2476]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2477]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2478]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2479]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2480]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2481]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2482]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2483]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff))) {
        ++(vlSymsp->__Vcoverage[2484]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_wdata_eff) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__bext_bit) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__bext_bit)) {
        ++(vlSymsp->__Vcoverage[3617]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT____Vtogcov__bext_bit 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__bext_bit;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__y 
        = ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
            ? ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                ? 0U : ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                         ? 0U : ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                  ? 0U : ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                           ? ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                               ? 0U
                                               : (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__bext_bit))
                                           : ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                               ? (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                  ^ 
                                                  ((IData)(1U) 
                                                   << (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt)))
                                               : (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                  & (~ 
                                                     ((IData)(1U) 
                                                      << (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt)))))))))
            : ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                ? ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                    ? ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                        ? ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                            ? ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                ? (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                   | ((IData)(1U) << (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt)))
                                : (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__cpop_val))
                            : ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                ? (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__ctz_val)
                                : (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__clz_val)))
                        : ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                            ? ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                ? ((0xff000000U & (
                                                   (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0xffU 
                                                                & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                                   >> 0x18U))))) 
                                                   << 0x18U)) 
                                   | ((0xff0000U & 
                                       ((- (IData)(
                                                   (0U 
                                                    != 
                                                    (0xffU 
                                                     & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                        >> 0x10U))))) 
                                        << 0x10U)) 
                                      | ((0xff00U & 
                                          ((- (IData)(
                                                      (0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                           >> 8U))))) 
                                           << 8U)) 
                                         | (0xffU & 
                                            (- (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & vlTOPp->bench_top__DOT__u_core__DOT__alu_a))))))))
                                : ((0xff000000U & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                   << 0x18U)) 
                                   | ((0xff0000U & 
                                       (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                        << 8U)) | (
                                                   (0xff00U 
                                                    & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                       >> 8U)) 
                                                   | (0xffU 
                                                      & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                         >> 0x18U))))))
                            : ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                ? ((vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                    >> (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt)) 
                                   | ((0x1fU >= (0x3fU 
                                                 & ((IData)(0x20U) 
                                                    - (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt))))
                                       ? (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                          << (0x3fU 
                                              & ((IData)(0x20U) 
                                                 - (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt))))
                                       : 0U)) : ((vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                  << (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt)) 
                                                 | ((0x1fU 
                                                     >= 
                                                     (0x3fU 
                                                      & ((IData)(0x20U) 
                                                         - (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt))))
                                                     ? 
                                                    (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x20U) 
                                                         - (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt))))
                                                     : 0U)))))
                    : ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                        ? ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                            ? ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                ? (0xffffU & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)
                                : ((0xffff0000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                                  >> 0xfU)))) 
                                                   << 0x10U)) 
                                   | (0xffffU & vlTOPp->bench_top__DOT__u_core__DOT__alu_a)))
                            : ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                ? ((0xffffff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                                                  >> 7U)))) 
                                                   << 8U)) 
                                   | (0xffU & vlTOPp->bench_top__DOT__u_core__DOT__alu_a))
                                : ((vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                    > vlTOPp->bench_top__DOT__u_core__DOT__alu_b)
                                    ? vlTOPp->bench_top__DOT__u_core__DOT__alu_a
                                    : vlTOPp->bench_top__DOT__u_core__DOT__alu_b)))
                        : ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                            ? ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                ? ((vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                    < vlTOPp->bench_top__DOT__u_core__DOT__alu_b)
                                    ? vlTOPp->bench_top__DOT__u_core__DOT__alu_a
                                    : vlTOPp->bench_top__DOT__u_core__DOT__alu_b)
                                : (VL_GTS_III(1,32,32, vlTOPp->bench_top__DOT__u_core__DOT__alu_a, vlTOPp->bench_top__DOT__u_core__DOT__alu_b)
                                    ? vlTOPp->bench_top__DOT__u_core__DOT__alu_a
                                    : vlTOPp->bench_top__DOT__u_core__DOT__alu_b))
                            : ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                ? (VL_LTS_III(1,32,32, vlTOPp->bench_top__DOT__u_core__DOT__alu_a, vlTOPp->bench_top__DOT__u_core__DOT__alu_b)
                                    ? vlTOPp->bench_top__DOT__u_core__DOT__alu_a
                                    : vlTOPp->bench_top__DOT__u_core__DOT__alu_b)
                                : (~ (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                      ^ vlTOPp->bench_top__DOT__u_core__DOT__alu_b))))))
                : ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                    ? ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                        ? ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                            ? ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                ? (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                   | (~ vlTOPp->bench_top__DOT__u_core__DOT__alu_b))
                                : (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                   & (~ vlTOPp->bench_top__DOT__u_core__DOT__alu_b)))
                            : ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                ? ((vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                    << 3U) + vlTOPp->bench_top__DOT__u_core__DOT__alu_b)
                                : ((vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                    << 2U) + vlTOPp->bench_top__DOT__u_core__DOT__alu_b)))
                        : ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                            ? ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                ? ((vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                    << 1U) + vlTOPp->bench_top__DOT__u_core__DOT__alu_b)
                                : vlTOPp->bench_top__DOT__u_core__DOT__alu_b)
                            : ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                ? (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                   & vlTOPp->bench_top__DOT__u_core__DOT__alu_b)
                                : (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                   | vlTOPp->bench_top__DOT__u_core__DOT__alu_b))))
                    : ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                        ? ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                            ? ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                ? VL_SHIFTRS_III(32,32,5, vlTOPp->bench_top__DOT__u_core__DOT__alu_a, (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt))
                                : (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                   >> (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt)))
                            : ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                                ? (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                   ^ vlTOPp->bench_top__DOT__u_core__DOT__alu_b)
                                : ((vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                    < vlTOPp->bench_top__DOT__u_core__DOT__alu_b)
                                    ? 1U : 0U))) : 
                       ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                         ? ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                             ? (VL_LTS_III(1,32,32, vlTOPp->bench_top__DOT__u_core__DOT__alu_a, vlTOPp->bench_top__DOT__u_core__DOT__alu_b)
                                 ? 1U : 0U) : (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                               << (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__shamt)))
                         : ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))
                             ? (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                - vlTOPp->bench_top__DOT__u_core__DOT__alu_b)
                             : (vlTOPp->bench_top__DOT__u_core__DOT__alu_a 
                                + vlTOPp->bench_top__DOT__u_core__DOT__alu_b)))))));
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1157]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1158]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1159]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1160]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1161]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1162]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dmem_wdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata));
    }
    vlTOPp->bench_top__DOT__dmem_wdata = vlTOPp->bench_top__DOT__u_core__DOT__dmem_wdata;
    if ((1U & (vlTOPp->bench_top__DOT__dmem_wdata ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (1U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__dmem_wdata ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (2U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__dmem_wdata ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (4U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__dmem_wdata ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (8U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__dmem_wdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x10U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__dmem_wdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x20U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__dmem_wdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x40U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__dmem_wdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x80U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__dmem_wdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x100U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__dmem_wdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x200U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__dmem_wdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x400U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__dmem_wdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x800U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__dmem_wdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__dmem_wdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__dmem_wdata));
    }
}
