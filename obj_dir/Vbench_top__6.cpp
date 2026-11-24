// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench_top.h for the primary calling header

#include "Vbench_top.h"
#include "Vbench_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vbench_top::_sequent__TOP__15(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_sequent__TOP__15\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1639]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1640]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1641]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1642]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__imm_u 
        = vlTOPp->bench_top__DOT__u_core__DOT__imm_u;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1643]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1644]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1645]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1646]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1647]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1649]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1650]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1651]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1652]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1653]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1654]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1669]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1671]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_u 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_u) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_u));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__imm_j 
        = vlTOPp->bench_top__DOT__u_core__DOT__imm_j;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_j 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_j) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_j));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
        = vlTOPp->bench_top__DOT__u_core__DOT__imm_i;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                                    = vlTOPp->bench_top__DOT__u_core__DOT__imm_j;
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                                    = vlTOPp->bench_top__DOT__u_core__DOT__imm_i;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                                    = vlTOPp->bench_top__DOT__u_core__DOT__imm_b;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                                    = vlTOPp->bench_top__DOT__u_core__DOT__imm_u;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                                    = vlTOPp->bench_top__DOT__u_core__DOT__imm_s;
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                                    = vlTOPp->bench_top__DOT__u_core__DOT__imm_u;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                                    = vlTOPp->bench_top__DOT__u_core__DOT__imm_i;
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                                                = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i;
                                        }
                                    }
                                } else {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                                                = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                                    = vlTOPp->bench_top__DOT__u_core__DOT__imm_i;
                            }
                        }
                    }
                }
            }
        }
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
}
