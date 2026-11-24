// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench_top.h for the primary calling header

#include "Vbench_top.h"
#include "Vbench_top__Syms.h"

#include "verilated_dpi.h"

void Vbench_top::_settle__TOP__4(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_settle__TOP__4\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[3988]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[3989]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[3990]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[3991]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[3992]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[3993]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[3994]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[3995]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[3996]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[3997]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[3998]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[3999]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4000]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4001]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4002]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4003]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4004]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4005]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4006]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4007]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4008]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4009]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4010]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4011]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4012]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4013]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4014]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4015]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4016]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4017]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4018]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo))) {
        ++(vlSymsp->__Vcoverage[4019]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_lo) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4020]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4021]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4022]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4023]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4024]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4025]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4026]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4027]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4028]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4029]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4030]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4031]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4032]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4033]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4034]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4035]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4036]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4037]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4038]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4039]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4040]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4041]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4042]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4043]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4044]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4045]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4046]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4047]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4048]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4049]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4050]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi))) {
        ++(vlSymsp->__Vcoverage[4051]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_hi) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr16 
        = vlTOPp->bench_top__DOT__u_core__DOT__fetch_half;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1467]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xfffeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1468]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xfffdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1469]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xfffbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1470]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xfff7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1471]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xffefU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1472]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xffdfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1473]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xffbfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1474]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xff7fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1475]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xfeffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1476]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xfdffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1477]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xfbffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1478]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xf7ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((0x1000U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1479]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xefffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (0x1000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((0x2000U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1480]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xdfffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (0x2000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((0x4000U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1481]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0xbfffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (0x4000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    if ((0x8000U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half))) {
        ++(vlSymsp->__Vcoverage[1482]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half 
            = ((0x7fffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_half)) 
               | (0x8000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    }
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__u_rvc__DOT__rp__0__bits 
        = (7U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                 >> 2U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__u_rvc__DOT__rp__0__Vfuncout 
        = (8U | (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__u_rvc__DOT__rp__0__bits));
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p 
        = vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__u_rvc__DOT__rp__0__Vfuncout;
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__u_rvc__DOT__rp__1__bits 
        = (7U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                 >> 7U));
    vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__u_rvc__DOT__rp__1__Vfuncout 
        = (8U | (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__u_rvc__DOT__rp__1__bits));
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p 
        = vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__u_rvc__DOT__rp__1__Vfuncout;
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full 
        = (0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                    >> 2U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full 
        = (0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                    >> 7U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant 
        = (3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half));
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3 
        = (7U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                 >> 0xdU));
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed 
        = (3U != (3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_ro_fault) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_ro_fault)) {
        ++(vlSymsp->__Vcoverage[2293]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_ro_fault 
            = vlTOPp->bench_top__DOT__u_core__DOT__csr_ro_fault;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__illegal_any 
        = (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_illegal) 
            | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__priv_fault)) 
           | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_ro_fault));
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
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_p)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_p)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rs2_full)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__rd_full)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__quadrant))) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__quadrant 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__quadrant)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__quadrant))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__quadrant 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__quadrant)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__funct3 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__funct3)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__funct3 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__funct3)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__funct3 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__funct3)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)));
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed)))) {
        ++(vlSymsp->__Vcoverage[3200]);
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        ++(vlSymsp->__Vcoverage[3199]);
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                ++(vlSymsp->__Vcoverage[3177]);
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            ++(vlSymsp->__Vcoverage[3148]);
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    ++(vlSymsp->__Vcoverage[3198]);
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    ++(vlSymsp->__Vcoverage[3197]);
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            ++(vlSymsp->__Vcoverage[3150]);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            ++(vlSymsp->__Vcoverage[3158]);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            ++(vlSymsp->__Vcoverage[3172]);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    ++(vlSymsp->__Vcoverage[3145]);
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((6U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        ++(vlSymsp->__Vcoverage[3146]);
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((6U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        ++(vlSymsp->__Vcoverage[3147]);
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                                ++(vlSymsp->__Vcoverage[3196]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                ++(vlSymsp->__Vcoverage[3144]);
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            ++(vlSymsp->__Vcoverage[3151]);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            ++(vlSymsp->__Vcoverage[3175]);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                ++(vlSymsp->__Vcoverage[3183]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            ++(vlSymsp->__Vcoverage[3174]);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                                ++(vlSymsp->__Vcoverage[3196]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            ++(vlSymsp->__Vcoverage[3173]);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            ++(vlSymsp->__Vcoverage[3149]);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                                ++(vlSymsp->__Vcoverage[3196]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                ++(vlSymsp->__Vcoverage[3195]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                                ++(vlSymsp->__Vcoverage[3196]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                ++(vlSymsp->__Vcoverage[3194]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                ++(vlSymsp->__Vcoverage[3180]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                ++(vlSymsp->__Vcoverage[3157]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                          >> 0xbU)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                              >> 0xaU)))) {
                                    ++(vlSymsp->__Vcoverage[3161]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                          >> 0xbU)))) {
                                if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    ++(vlSymsp->__Vcoverage[3164]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                              >> 0xaU)))) {
                                    ++(vlSymsp->__Vcoverage[3165]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    ++(vlSymsp->__Vcoverage[3171]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                  >> 0xcU)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                    >> 6U)))) {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                                ++(vlSymsp->__Vcoverage[3167]);
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
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                              >> 0xcU)))) {
                                    ++(vlSymsp->__Vcoverage[3192]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    if ((0x1000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                        ++(vlSymsp->__Vcoverage[3170]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                  >> 0xcU)))) {
                                        if ((0x40U 
                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                            if ((0x20U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                                ++(vlSymsp->__Vcoverage[3169]);
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
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                ++(vlSymsp->__Vcoverage[3156]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                    ++(vlSymsp->__Vcoverage[3181]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                  >> 0xcU)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                     >> 5U)))) {
                                                ++(vlSymsp->__Vcoverage[3166]);
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
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                  >> 0xcU)))) {
                                        if ((0x40U 
                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                     >> 5U)))) {
                                                ++(vlSymsp->__Vcoverage[3168]);
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
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                if ((0x1000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    ++(vlSymsp->__Vcoverage[3193]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                    ++(vlSymsp->__Vcoverage[3182]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__is_compressed)) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__is_compressed 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed;
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                              >> 0xcU)))) {
                                    if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full))) {
                                        ++(vlSymsp->__Vcoverage[3187]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                if ((0x1000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full))) {
                                        ++(vlSymsp->__Vcoverage[3190]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                if ((0x1000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full))) {
                                        ++(vlSymsp->__Vcoverage[3191]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                              >> 0xcU)))) {
                                    if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full))) {
                                        ++(vlSymsp->__Vcoverage[3186]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                              >> 0xcU)))) {
                                    if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full))) {
                                        if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                            ++(vlSymsp->__Vcoverage[3184]);
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
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                if ((0x1000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full))) {
                                        if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                            ++(vlSymsp->__Vcoverage[3188]);
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
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                if ((0x1000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full))) {
                                        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                            ++(vlSymsp->__Vcoverage[3189]);
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
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                              >> 0xcU)))) {
                                    if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full))) {
                                        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                            ++(vlSymsp->__Vcoverage[3185]);
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
    vlTOPp->bench_top__DOT__u_core__DOT__c_is_comp 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed;
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
        = vlTOPp->bench_top__DOT__u_core__DOT__fetch_half;
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 0U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm = 0U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off = 0U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6 = 0U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off = 0U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16 = 0U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm = 0U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off = 0U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6 = 0U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off = 0U;
    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off = 0U;
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm 
                    = ((0x3c0U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                  >> 1U)) | ((0x30U 
                                              & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                 >> 7U)) 
                                             | ((8U 
                                                 & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                    >> 2U)) 
                                                | (4U 
                                                   & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                      >> 4U)))));
                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm))) {
                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 = 0U;
                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 1U;
                } else {
                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                        = (0x10013U | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm) 
                                        << 0x14U) | 
                                       ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p) 
                                        << 7U)));
                }
            } else {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off 
                        = ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                     << 1U)) | ((0x38U 
                                                 & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                    >> 7U)) 
                                                | (4U 
                                                   & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                      >> 4U))));
                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                        = (0x2003U | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off) 
                                       << 0x14U) | 
                                      (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                        << 0xfU) | 
                                       ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p) 
                                        << 7U))));
                } else {
                    if ((6U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off 
                            = ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                         << 1U)) | 
                               ((0x38U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                          >> 7U)) | 
                                (4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                       >> 4U))));
                        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                            = (0x2023U | ((0x4000000U 
                                           & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off) 
                                              << 0x14U)) 
                                          | ((0x2000000U 
                                              & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off) 
                                                 << 0x14U)) 
                                             | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p) 
                                                 << 0x14U) 
                                                | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                    << 0xfU) 
                                                   | (0xf80U 
                                                      & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off) 
                                                         << 7U)))))));
                    } else {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 = 0U;
                        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 1U;
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off 
                                = ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                             >> 5U)) 
                                   | ((0x60U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)) 
                                      | ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                   << 2U)) 
                                         | ((0xcU & 
                                             ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                              >> 8U)) 
                                            | (3U & 
                                               ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                >> 3U))))));
                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                = (0x1063U | ((0xf0000000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off) 
                                                                 >> 7U)))) 
                                                  << 0x1cU)) 
                                              | ((0xe000000U 
                                                  & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off) 
                                                     << 0x15U)) 
                                                 | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                     << 0xfU) 
                                                    | ((0xf00U 
                                                        & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off) 
                                                           << 8U)) 
                                                       | (0x80U 
                                                          & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off)))))));
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off 
                                = ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                             >> 5U)) 
                                   | ((0x60U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)) 
                                      | ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                   << 2U)) 
                                         | ((0xcU & 
                                             ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                              >> 8U)) 
                                            | (3U & 
                                               ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                >> 3U))))));
                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                = (0x63U | ((0xf0000000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off) 
                                                               >> 7U)))) 
                                                << 0x1cU)) 
                                            | ((0xe000000U 
                                                & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off) 
                                                   << 0x15U)) 
                                               | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                   << 0xfU) 
                                                  | ((0xf00U 
                                                      & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off) 
                                                         << 8U)) 
                                                     | (0x80U 
                                                        & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off)))))));
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off 
                                = ((0x400U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                              >> 2U)) 
                                   | ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                 << 1U)) 
                                      | ((0x180U & 
                                          ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                           >> 2U)) 
                                         | ((0x40U 
                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)) 
                                            | ((0x20U 
                                                & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                   >> 2U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                      << 2U)) 
                                                  | ((8U 
                                                      & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                         >> 8U)) 
                                                     | (7U 
                                                        & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                           >> 3U)))))))));
                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                = (0x6fU | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
                                             << 0x15U) 
                                            | ((0x100000U 
                                                & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
                                                   << 0xaU)) 
                                               | (0xff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
                                                                    >> 0xaU)))) 
                                                     << 0xcU)))));
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6 
                                = ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                             >> 7U)) 
                                   | (0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                               >> 2U)));
                            if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    if ((0x1000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 = 0U;
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 1U;
                                    } else {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                            = ((0x40U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))
                                                    ? 
                                                   (0x7033U 
                                                    | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p) 
                                                        << 0x14U) 
                                                       | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                           << 0xfU) 
                                                          | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                             << 7U))))
                                                    : 
                                                   (0x6033U 
                                                    | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p) 
                                                        << 0x14U) 
                                                       | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                           << 0xfU) 
                                                          | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                             << 7U)))))
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))
                                                    ? 
                                                   (0x4033U 
                                                    | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p) 
                                                        << 0x14U) 
                                                       | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                           << 0xfU) 
                                                          | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                             << 7U))))
                                                    : 
                                                   (0x40000033U 
                                                    | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_p) 
                                                        << 0x14U) 
                                                       | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                           << 0xfU) 
                                                          | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                             << 7U))))));
                                    }
                                } else {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                        = (0x7013U 
                                           | ((0xfc000000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
                                                                 >> 5U)))) 
                                                  << 0x1aU)) 
                                              | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
                                                  << 0x14U) 
                                                 | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                     << 0xfU) 
                                                    | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                       << 7U)))));
                                }
                            } else {
                                if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 = 0U;
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 1U;
                                    } else {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                            = (0x40005013U 
                                               | ((0x1f00000U 
                                                   & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
                                                      << 0x14U)) 
                                                  | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                      << 0xfU) 
                                                     | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                        << 7U))));
                                    }
                                } else {
                                    if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 = 0U;
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 1U;
                                    } else {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                            = (0x5013U 
                                               | ((0x1f00000U 
                                                   & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
                                                      << 0x14U)) 
                                                  | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                      << 0xfU) 
                                                     | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_p) 
                                                        << 7U))));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16 
                                    = ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                  >> 3U)) 
                                       | ((0x180U & 
                                           ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                            << 4U)) 
                                          | ((0x40U 
                                              & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                 << 1U)) 
                                             | ((0x20U 
                                                 & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                    << 3U)) 
                                                | (0x10U 
                                                   & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                      >> 2U))))));
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 = 0U;
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 1U;
                                } else {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                        = (0x10113U 
                                           | ((0xc0000000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16) 
                                                                 >> 9U)))) 
                                                  << 0x1eU)) 
                                              | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16) 
                                                 << 0x14U)));
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm 
                                    = ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                 >> 7U)) 
                                       | (0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                   >> 2U)));
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 = 0U;
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 1U;
                                } else {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                        = (0x37U | 
                                           ((0xfffc0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm) 
                                                               >> 5U)))) 
                                                << 0x12U)) 
                                            | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm) 
                                                << 0xcU) 
                                               | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
                                                  << 7U))));
                                }
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6 
                                = ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                             >> 7U)) 
                                   | (0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                               >> 2U)));
                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                = (0x13U | ((0xfc000000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6) 
                                                               >> 5U)))) 
                                                << 0x1aU)) 
                                            | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6) 
                                                << 0x14U) 
                                               | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
                                                  << 7U))));
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off 
                                = ((0x400U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                              >> 2U)) 
                                   | ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                 << 1U)) 
                                      | ((0x180U & 
                                          ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                           >> 2U)) 
                                         | ((0x40U 
                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half)) 
                                            | ((0x20U 
                                                & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                   >> 2U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                      << 2U)) 
                                                  | ((8U 
                                                      & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                         >> 8U)) 
                                                     | (7U 
                                                        & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                           >> 3U)))))))));
                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                = (0xefU | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
                                             << 0x15U) 
                                            | ((0x100000U 
                                                & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
                                                   << 0xaU)) 
                                               | (0xff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
                                                                    >> 0xaU)))) 
                                                     << 0xcU)))));
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6 
                                = ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                             >> 7U)) 
                                   | (0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                               >> 2U)));
                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                = (0x13U | ((0xfc000000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6) 
                                                               >> 5U)))) 
                                                << 0x1aU)) 
                                            | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6) 
                                                << 0x14U) 
                                               | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
                                                   << 0xfU) 
                                                  | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
                                                     << 7U)))));
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 = 0U;
                                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 1U;
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off 
                                    = ((0x30U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                 >> 3U)) 
                                       | (0xfU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                  >> 9U)));
                                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                    = (0x12023U | (
                                                   (0xc000000U 
                                                    & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off) 
                                                       << 0x16U)) 
                                                   | ((0x2000000U 
                                                       & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off) 
                                                          << 0x16U)) 
                                                      | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full) 
                                                          << 0x14U) 
                                                         | (0xe00U 
                                                            & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off) 
                                                               << 9U))))));
                            }
                        } else {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 = 0U;
                                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 1U;
                            } else {
                                if ((0x1000U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                        = ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full))
                                            ? ((0U 
                                                == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))
                                                ? 0x100073U
                                                : (0xe7U 
                                                   | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
                                                      << 0xfU)))
                                            : (0x33U 
                                               | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full) 
                                                   << 0x14U) 
                                                  | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
                                                      << 0xfU) 
                                                     | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
                                                        << 7U)))));
                                } else {
                                    if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full))) {
                                        if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 = 0U;
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 1U;
                                        } else {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                                = (0x67U 
                                                   | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
                                                      << 0xfU));
                                        }
                                    } else {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                            = (0x33U 
                                               | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rs2_full) 
                                                   << 0x14U) 
                                                  | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
                                                     << 7U)));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 = 0U;
                                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 1U;
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off 
                                    = ((0x30U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                 << 2U)) 
                                       | ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                 >> 9U)) 
                                          | (7U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                   >> 4U))));
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 = 0U;
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 1U;
                                } else {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                        = (0x12003U 
                                           | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off) 
                                               << 0x16U) 
                                              | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
                                                 << 7U)));
                                }
                            }
                        } else {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 = 0U;
                                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 1U;
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6 
                                    = ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                 >> 7U)) 
                                       | (0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                                   >> 2U)));
                                if ((1U & (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
                                            >> 5U) 
                                           | (0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6))))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 = 0U;
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 1U;
                                } else {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                                        = (0x1013U 
                                           | ((0x1f00000U 
                                               & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
                                                  << 0x14U)) 
                                              | (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
                                                  << 0xfU) 
                                                 | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full) 
                                                    << 7U))));
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                        = vlTOPp->bench_top__DOT__u_core__DOT__fetch_half;
                    vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal = 0U;
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__illegal_any) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__illegal_any)) {
        ++(vlSymsp->__Vcoverage[2294]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__illegal_any 
            = vlTOPp->bench_top__DOT__u_core__DOT__illegal_any;
    }
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
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__c_is_comp) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_is_comp)) {
        ++(vlSymsp->__Vcoverage[1515]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_is_comp 
            = vlTOPp->bench_top__DOT__u_core__DOT__c_is_comp;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__decomp_illegal)) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__decomp_illegal 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__c_illegal 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__decomp_illegal;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6 
            = ((0x3eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6 
            = ((0x3dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6 
            = ((0x3bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6 
            = ((0x37U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6 
            = ((0x2fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6 
            = ((0x1fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm6)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm6)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off))) {
        ++(vlSymsp->__Vcoverage[3130]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off 
            = ((0x3eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off))) {
        ++(vlSymsp->__Vcoverage[3131]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off 
            = ((0x3dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off))) {
        ++(vlSymsp->__Vcoverage[3132]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off 
            = ((0x3bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off))) {
        ++(vlSymsp->__Vcoverage[3133]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off 
            = ((0x37U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off))) {
        ++(vlSymsp->__Vcoverage[3134]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off 
            = ((0x2fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off))) {
        ++(vlSymsp->__Vcoverage[3135]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off 
            = ((0x1fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lwsp_off)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lwsp_off)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off))) {
        ++(vlSymsp->__Vcoverage[3136]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off 
            = ((0x3eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off))) {
        ++(vlSymsp->__Vcoverage[3137]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off 
            = ((0x3dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off))) {
        ++(vlSymsp->__Vcoverage[3138]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off 
            = ((0x3bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off))) {
        ++(vlSymsp->__Vcoverage[3139]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off 
            = ((0x37U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off))) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off 
            = ((0x2fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off 
            = ((0x1fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__swsp_off)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__swsp_off)));
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm))) {
                                    ++(vlSymsp->__Vcoverage[3154]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm))) {
                                    ++(vlSymsp->__Vcoverage[3155]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm 
            = ((0x3eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm 
            = ((0x3dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm 
            = ((0x3bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm 
            = ((0x37U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm 
            = ((0x2fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm 
            = ((0x1fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lui_nzimm)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lui_nzimm)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off))) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off 
            = ((0x7eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off 
            = ((0x7dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off 
            = ((0x7bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off 
            = ((0x77U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off 
            = ((0x6fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off 
            = ((0x5fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off 
            = ((0x3fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__lw_off)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__lw_off)));
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                if ((1U & (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
                                            >> 5U) 
                                           | (0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6))))) {
                                    ++(vlSymsp->__Vcoverage[3178]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                                if ((1U & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
                                               >> 5U) 
                                              | (0U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6)))))) {
                                    ++(vlSymsp->__Vcoverage[3179]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                          >> 0xbU)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                              >> 0xaU)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
                                                  >> 5U)))) {
                                        ++(vlSymsp->__Vcoverage[3160]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                          >> 0xbU)))) {
                                if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6))) {
                                        ++(vlSymsp->__Vcoverage[3162]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                          >> 0xbU)))) {
                                if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
                                                  >> 5U)))) {
                                        ++(vlSymsp->__Vcoverage[3163]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                          >> 0xbU)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_half) 
                                              >> 0xaU)))) {
                                    if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6))) {
                                        ++(vlSymsp->__Vcoverage[3159]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6))) {
        ++(vlSymsp->__Vcoverage[3124]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6 
            = ((0x3eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6))) {
        ++(vlSymsp->__Vcoverage[3125]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6 
            = ((0x3dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6))) {
        ++(vlSymsp->__Vcoverage[3126]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6 
            = ((0x3bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6))) {
        ++(vlSymsp->__Vcoverage[3127]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6 
            = ((0x37U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6))) {
        ++(vlSymsp->__Vcoverage[3128]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6 
            = ((0x2fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6))) {
        ++(vlSymsp->__Vcoverage[3129]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6 
            = ((0x1fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__shamt6)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__shamt6)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off 
            = ((0xfeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off 
            = ((0xfdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off 
            = ((0xfbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off 
            = ((0xf7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off 
            = ((0xefU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off))) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off 
            = ((0xdfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off))) {
        ++(vlSymsp->__Vcoverage[3122]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off 
            = ((0xbfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off))) {
        ++(vlSymsp->__Vcoverage[3123]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off 
            = ((0x7fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__b_off)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__b_off)));
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm))) {
                    ++(vlSymsp->__Vcoverage[3142]);
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm))) {
                    ++(vlSymsp->__Vcoverage[3143]);
                }
            }
        }
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm 
            = ((0x3feU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm 
            = ((0x3fdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm 
            = ((0x3fbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm 
            = ((0x3f7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm 
            = ((0x3efU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm 
            = ((0x3dfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm 
            = ((0x3bfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm 
            = ((0x37fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm 
            = ((0x2ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm 
            = ((0x1ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzuimm)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzuimm)));
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16))) {
                                    ++(vlSymsp->__Vcoverage[3152]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__is_compressed) {
        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__quadrant))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__funct3))) {
                            if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__rd_full))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16))) {
                                    ++(vlSymsp->__Vcoverage[3153]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16 
            = ((0x3feU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16 
            = ((0x3fdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16 
            = ((0x3fbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16))) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16 
            = ((0x3f7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16))) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16 
            = ((0x3efU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16 
            = ((0x3dfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16 
            = ((0x3bfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16))) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16 
            = ((0x37fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16))) {
        ++(vlSymsp->__Vcoverage[3108]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16 
            = ((0x2ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16))) {
        ++(vlSymsp->__Vcoverage[3109]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16 
            = ((0x1ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__nzimm16)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__nzimm16)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off 
            = ((0x7feU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off 
            = ((0x7fdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off 
            = ((0x7fbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off 
            = ((0x7f7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off 
            = ((0x7efU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off 
            = ((0x7dfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off 
            = ((0x7bfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off 
            = ((0x77fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off 
            = ((0x6ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off 
            = ((0x5ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off 
            = ((0x3ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__j_off)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__j_off)));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT____Vtogcov__instr32) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_rvc__DOT__instr32;
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
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__c_illegal) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_illegal)) {
        ++(vlSymsp->__Vcoverage[1516]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_illegal 
            = vlTOPp->bench_top__DOT__u_core__DOT__c_illegal;
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1483]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1484]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1485]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1486]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1487]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1488]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1489]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1490]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1491]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1492]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1493]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1494]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1495]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1496]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1497]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1498]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1499]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1500]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1501]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1502]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1503]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1504]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1505]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1506]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1507]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1508]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1509]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1510]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1511]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1512]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1513]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__c_instr32 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32))) {
        ++(vlSymsp->__Vcoverage[1514]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__c_instr32) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__c_instr32));
    }
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
}

void Vbench_top::_settle__TOP__5(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_settle__TOP__5\n"); );
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
    if (((IData)(vlTOPp->bench_top__DOT__dmem_we) ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_we)) {
        ++(vlSymsp->__Vcoverage[233]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_we 
            = vlTOPp->bench_top__DOT__dmem_we;
    }
    vlTOPp->bench_top__DOT__mem_req = ((IData)(vlTOPp->bench_top__DOT__dmem_re) 
                                       | (IData)(vlTOPp->bench_top__DOT__dmem_we));
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
    if (((IData)(vlTOPp->bench_top__DOT__retire_rd_we) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd_we)) {
        ++(vlSymsp->__Vcoverage[624]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd_we 
            = vlTOPp->bench_top__DOT__retire_rd_we;
    }
}

void Vbench_top::_initial__TOP__7(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_initial__TOP__7\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j;
    // Body
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__fwd1 = 0U;
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__fwd2 = 0U;
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ri = 1U;
    while (VL_GTS_III(1,32,32, 0x20U, vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ri)) {
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0U;
        ++(vlSymsp->__Vcoverage[5548]);
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 1U;
        if ((1U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5549]);
        } else {
            if ((2U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            } else {
                if ((3U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5551]);
                } else {
                    if ((4U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5552]);
                    } else {
                        if ((5U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        } else {
                            if ((6U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5554]);
                            } else {
                                ++(vlSymsp->__Vcoverage[5555]);
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 2U;
        if ((1U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5549]);
        } else {
            if ((2U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            } else {
                if ((3U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5551]);
                } else {
                    if ((4U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5552]);
                    } else {
                        if ((5U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        } else {
                            if ((6U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5554]);
                            } else {
                                ++(vlSymsp->__Vcoverage[5555]);
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 3U;
        if ((1U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5549]);
        } else {
            if ((2U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            } else {
                if ((3U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5551]);
                } else {
                    if ((4U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5552]);
                    } else {
                        if ((5U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        } else {
                            if ((6U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5554]);
                            } else {
                                ++(vlSymsp->__Vcoverage[5555]);
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 4U;
        if ((1U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5549]);
        } else {
            if ((2U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            } else {
                if ((3U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5551]);
                } else {
                    if ((4U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5552]);
                    } else {
                        if ((5U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        } else {
                            if ((6U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5554]);
                            } else {
                                ++(vlSymsp->__Vcoverage[5555]);
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 5U;
        if ((1U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5549]);
        } else {
            if ((2U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            } else {
                if ((3U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5551]);
                } else {
                    if ((4U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5552]);
                    } else {
                        if ((5U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        } else {
                            if ((6U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5554]);
                            } else {
                                ++(vlSymsp->__Vcoverage[5555]);
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 6U;
        if ((1U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5549]);
        } else {
            if ((2U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            } else {
                if ((3U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5551]);
                } else {
                    if ((4U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5552]);
                    } else {
                        if ((5U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        } else {
                            if ((6U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5554]);
                            } else {
                                ++(vlSymsp->__Vcoverage[5555]);
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 7U;
        if ((1U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5549]);
        } else {
            if ((2U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            } else {
                if ((3U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5551]);
                } else {
                    if ((4U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5552]);
                    } else {
                        if ((5U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        } else {
                            if ((6U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5554]);
                            } else {
                                ++(vlSymsp->__Vcoverage[5555]);
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 8U;
        if ((8U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        } else {
            if ((9U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            } else {
                if ((0xaU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                } else {
                    if ((0xbU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    } else {
                        if ((0xcU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        } else {
                            if ((0xdU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            } else {
                                if ((0xeU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 9U;
        if ((8U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        } else {
            if ((9U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            } else {
                if ((0xaU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                } else {
                    if ((0xbU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    } else {
                        if ((0xcU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        } else {
                            if ((0xdU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            } else {
                                if ((0xeU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0xaU;
        if ((8U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        } else {
            if ((9U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            } else {
                if ((0xaU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                } else {
                    if ((0xbU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    } else {
                        if ((0xcU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        } else {
                            if ((0xdU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            } else {
                                if ((0xeU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0xbU;
        if ((8U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        } else {
            if ((9U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            } else {
                if ((0xaU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                } else {
                    if ((0xbU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    } else {
                        if ((0xcU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        } else {
                            if ((0xdU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            } else {
                                if ((0xeU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0xcU;
        if ((8U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        } else {
            if ((9U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            } else {
                if ((0xaU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                } else {
                    if ((0xbU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    } else {
                        if ((0xcU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        } else {
                            if ((0xdU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            } else {
                                if ((0xeU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0xdU;
        if ((8U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        } else {
            if ((9U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            } else {
                if ((0xaU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                } else {
                    if ((0xbU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    } else {
                        if ((0xcU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        } else {
                            if ((0xdU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            } else {
                                if ((0xeU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0xeU;
        if ((8U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        } else {
            if ((9U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            } else {
                if ((0xaU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                } else {
                    if ((0xbU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    } else {
                        if ((0xcU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        } else {
                            if ((0xdU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            } else {
                                if ((0xeU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0xfU;
        if ((8U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        } else {
            if ((9U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            } else {
                if ((0xaU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                } else {
                    if ((0xbU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    } else {
                        if ((0xcU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        } else {
                            if ((0xdU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            } else {
                                if ((0xeU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x10U;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x11U;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x12U;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x13U;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x14U;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x15U;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x16U;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x17U;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x18U;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x19U;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x1aU;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x1bU;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x1cU;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x1dU;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x1eU;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j = 0x1fU;
        if (((((((((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                   | (0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                | (0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
               | (0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
              | (0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
             | (0x17U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
            if ((0x10U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            } else {
                if ((0x11U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                } else {
                    if ((0x12U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    } else {
                        if ((0x13U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        } else {
                            if ((0x14U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            } else {
                                if ((0x15U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                } else {
                                    if ((0x16U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5570]);
                                    } else {
                                        ++(vlSymsp->__Vcoverage[5571]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j) 
                       | (0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                      | (0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                     | (0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                    | (0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                   | (0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                  | (0x1eU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) 
                 | (0x1fU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j))) {
                if ((0x18U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                } else {
                    if ((0x19U == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    } else {
                        if ((0x1aU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        } else {
                            if ((0x1bU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            } else {
                                if ((0x1cU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                } else {
                                    if ((0x1dU == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                        ++(vlSymsp->__Vcoverage[5577]);
                                    } else {
                                        if ((0x1eU 
                                             == __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__5__j)) {
                                            ++(vlSymsp->__Vcoverage[5578]);
                                        } else {
                                            ++(vlSymsp->__Vcoverage[5579]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
        ++(vlSymsp->__Vcoverage[5581]);
        ++(vlSymsp->__Vcoverage[5582]);
        ++(vlSymsp->__Vcoverage[5583]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vlvbound1 = 0ULL;
        if (VL_LIKELY((0x1eU >= (0x1fU & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ri 
                                          - (IData)(1U)))))) {
            vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs[(0x1fU 
                                                                                & (vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ri 
                                                                                - (IData)(1U)))] 
                = vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vlvbound1;
        }
        ++(vlSymsp->__Vcoverage[5589]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ri 
            = ((IData)(1U) + vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ri);
    }
    ++(vlSymsp->__Vcoverage[5590]);
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__misa_eff = 0x40101106U;
    vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val = 0x1071U;
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
}
