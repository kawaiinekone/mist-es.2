// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench_top.h for the primary calling header

#include "Vbench_top.h"
#include "Vbench_top__Syms.h"

#include "verilated_dpi.h"

void Vbench_top::_settle__TOP__2(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_settle__TOP__2\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_i) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__imm_i = vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_i;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3251]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3252]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3253]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3255]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3256]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3257]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3258]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3259]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3260]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_s) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__imm_s = vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_s;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_b) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__imm_b = vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_b;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3325]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3326]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3327]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3328]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_u) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__imm_u = vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_u;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3332]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3333]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3334]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3335]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3336]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3337]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3338]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3339]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3340]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3341]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3342]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3343]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3344]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3345]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3346]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3347]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3348]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3349]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3350]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3351]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3352]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3353]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3354]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3355]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3356]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3357]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3358]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3359]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3360]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j))) {
        ++(vlSymsp->__Vcoverage[3361]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT____Vtogcov__imm_j) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__imm_j = vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__imm_j;
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ra2 
        = vlTOPp->bench_top__DOT__u_core__DOT__rs2;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[1525]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[1526]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[1527]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[1528]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2))) {
        ++(vlSymsp->__Vcoverage[1529]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs2)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2)));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2015]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2016]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2017]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2018]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2019]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2020]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__md_result 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_result) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__md_result));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imem_addr) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__imem_addr));
    }
    vlTOPp->bench_top__DOT__imem_addr = vlTOPp->bench_top__DOT__u_core__DOT__imem_addr;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5256]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5257]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5258]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5259]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5260]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5261]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5262]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5263]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5264]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5265]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5266]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5267]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5268]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5269]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5270]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5271]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5272]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5273]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5274]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5275]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5276]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5277]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5278]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5279]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5280]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5281]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5282]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5283]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5284]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5285]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5286]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo))) {
        ++(vlSymsp->__Vcoverage[5287]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_lo) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5288]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5289]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5290]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5291]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5292]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5293]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5294]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5295]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5296]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5297]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5298]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5299]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5300]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5301]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5302]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5303]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5304]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5305]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5306]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5307]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5308]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5309]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5310]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5311]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5312]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5313]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5314]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5315]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5316]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5317]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5318]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi))) {
        ++(vlSymsp->__Vcoverage[5319]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mcycle_hi) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5320]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5321]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5322]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5323]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5324]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5325]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5326]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5327]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5328]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5329]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5330]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5331]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5332]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5333]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5334]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5335]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5336]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5337]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5338]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5339]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5340]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5341]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5342]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5343]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5344]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5345]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5346]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5347]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5348]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5349]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5350]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo))) {
        ++(vlSymsp->__Vcoverage[5351]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_lo) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5352]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5353]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5354]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5355]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5356]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5357]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5358]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5359]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5360]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5361]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5362]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5363]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5364]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5365]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5366]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5367]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5368]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5369]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5370]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5371]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5372]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5373]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5374]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5375]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5376]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5377]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5378]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5379]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5380]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5381]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5382]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi))) {
        ++(vlSymsp->__Vcoverage[5383]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__minstret_hi) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i))) {
        ++(vlSymsp->__Vcoverage[3444]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i))) {
        ++(vlSymsp->__Vcoverage[3445]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i))) {
        ++(vlSymsp->__Vcoverage[3446]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i))) {
        ++(vlSymsp->__Vcoverage[3447]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i))) {
        ++(vlSymsp->__Vcoverage[3448]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__shamt_i)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[1520]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[1521]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[1522]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[1523]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1))) {
        ++(vlSymsp->__Vcoverage[1524]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rs1)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1)));
    }
    if (((IData)(vlTOPp->bench_top__DOT__irq_soft_w) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__irq_soft_w)) {
        ++(vlSymsp->__Vcoverage[368]);
        vlTOPp->bench_top__DOT____Vtogcov__irq_soft_w 
            = vlTOPp->bench_top__DOT__irq_soft_w;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__irq_soft = vlTOPp->bench_top__DOT__irq_soft_w;
    if (((IData)(vlTOPp->bench_top__DOT__irq_timer_w) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__irq_timer_w)) {
        ++(vlSymsp->__Vcoverage[367]);
        vlTOPp->bench_top__DOT____Vtogcov__irq_timer_w 
            = vlTOPp->bench_top__DOT__irq_timer_w;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__irq_timer 
        = vlTOPp->bench_top__DOT__irq_timer_w;
    if (((IData)(vlTOPp->bench_top__DOT__irq_ext_w) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__irq_ext_w)) {
        ++(vlSymsp->__Vcoverage[631]);
        vlTOPp->bench_top__DOT____Vtogcov__irq_ext_w 
            = vlTOPp->bench_top__DOT__irq_ext_w;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__irq_ext = vlTOPp->bench_top__DOT__irq_ext_w;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
        = ((((IData)(vlTOPp->bench_top__DOT__irq_ext_w) 
             << 0xbU) | ((IData)(vlTOPp->bench_top__DOT__irq_timer_w) 
                         << 7U)) | ((IData)(vlTOPp->bench_top__DOT__irq_soft_w) 
                                    << 3U));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7))) {
        ++(vlSymsp->__Vcoverage[3437]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7 
            = ((0x7eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7))) {
        ++(vlSymsp->__Vcoverage[3438]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7 
            = ((0x7dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7))) {
        ++(vlSymsp->__Vcoverage[3439]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7 
            = ((0x7bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7))) {
        ++(vlSymsp->__Vcoverage[3440]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7 
            = ((0x77U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7))) {
        ++(vlSymsp->__Vcoverage[3441]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7 
            = ((0x6fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7))) {
        ++(vlSymsp->__Vcoverage[3442]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7 
            = ((0x5fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7))) {
        ++(vlSymsp->__Vcoverage[3443]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7 
            = ((0x3fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct7)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv_o) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__priv_o))) {
        ++(vlSymsp->__Vcoverage[4491]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__priv_o 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__priv_o)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv_o)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv_o) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__priv_o))) {
        ++(vlSymsp->__Vcoverage[4492]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__priv_o 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__priv_o)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv_o)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__cur_priv = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv_o;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[1517]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[1518]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[1519]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__funct3)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__csr_fn = (3U 
                                                   & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3));
    vlTOPp->bench_top__DOT__u_core__DOT__csr_imm_mode 
        = (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__funct3) 
                 >> 2U));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3449]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xffeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3450]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xffdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3451]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xffbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3452]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xff7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3453]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xfefU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3454]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xfdfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3455]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xfbfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3456]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xf7fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3457]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xeffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3458]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xdffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3459]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0xbffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[3460]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12 
            = ((0x7ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__sys_imm12)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12)));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__fetch_m_o) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__fetch_m_o)) {
        ++(vlSymsp->__Vcoverage[4493]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__fetch_m_o 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__fetch_m_o;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__fetch_m = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__fetch_m_o;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1535]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xffeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1536]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xffdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1537]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xffbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1538]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xff7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1539]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xfefU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1540]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xfdfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1541]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xfbfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1542]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xf7fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1543]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xeffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1544]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xdffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1545]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0xbffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12))) {
        ++(vlSymsp->__Vcoverage[1546]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12 
            = ((0x7ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__sys_imm12)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12)));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__data_m_o) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__data_m_o)) {
        ++(vlSymsp->__Vcoverage[4494]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__data_m_o 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__data_m_o;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__data_m = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__data_m_o;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[3434]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[3435]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3))) {
        ++(vlSymsp->__Vcoverage[3436]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__funct3)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mmwp_o) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mmwp_o)) {
        ++(vlSymsp->__Vcoverage[4495]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mmwp_o 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mmwp_o;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__mmwp_w = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mmwp_o;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mml_o) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mml_o)) {
        ++(vlSymsp->__Vcoverage[4496]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mml_o 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mml_o;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__mml_w = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mml_o;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4497]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4498]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4499]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4500]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4501]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4502]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4503]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4504]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4505]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4506]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4507]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4508]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4509]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4510]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4511]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4512]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4513]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4514]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4515]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4516]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4517]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4518]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4519]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4520]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4521]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4522]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4523]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4524]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4525]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4526]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4527]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]))) {
        ++(vlSymsp->__Vcoverage[4528]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[0U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U]));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4529]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4530]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4531]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4532]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4533]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4534]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4535]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4536]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4537]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4538]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4539]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4540]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4541]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4542]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4543]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4544]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4545]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4546]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4547]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4548]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4549]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4550]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4551]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4552]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4553]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4554]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4555]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4556]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4557]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4558]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4559]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]))) {
        ++(vlSymsp->__Vcoverage[4560]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[1U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U]));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4561]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4562]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4563]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4564]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4565]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4566]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4567]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4568]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4569]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4570]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4571]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4572]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4573]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4574]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4575]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4576]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4577]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4578]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4579]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4580]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4581]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4582]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4583]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4584]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4585]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4586]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4587]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4588]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4589]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4590]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4591]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]))) {
        ++(vlSymsp->__Vcoverage[4592]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[2U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U]));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4593]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4594]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4595]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4596]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4597]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4598]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4599]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4600]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4601]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4602]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4603]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4604]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4605]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4606]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4607]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4608]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4609]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4610]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4611]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4612]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4613]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4614]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4615]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4616]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4617]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4618]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4619]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4620]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4621]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4622]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4623]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]))) {
        ++(vlSymsp->__Vcoverage[4624]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__pmpcfg_o[3U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U]));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[0U];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[1U];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[2U];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_o[3U];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[0U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[0U];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[1U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[1U];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[2U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[2U];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[3U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[3U];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[4U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[4U];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[5U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[5U];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[6U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[6U];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[7U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[7U];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[8U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[8U];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[9U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[9U];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[0xaU] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[0xaU];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[0xbU] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[0xbU];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[0xcU] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[0xcU];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[0xdU] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[0xdU];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[0xeU] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[0xeU];
    vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[0xfU] 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_o[0xfU];
    if ((1U & (vlTOPp->bench_top__DOT__mtime_lo ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (1U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((2U & (vlTOPp->bench_top__DOT__mtime_lo ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (2U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((4U & (vlTOPp->bench_top__DOT__mtime_lo ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (4U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((8U & (vlTOPp->bench_top__DOT__mtime_lo ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (8U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__mtime_lo 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x10U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__mtime_lo 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x20U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__mtime_lo 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x40U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__mtime_lo 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x80U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__mtime_lo 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x100U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__mtime_lo 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x200U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__mtime_lo 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x400U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__mtime_lo 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x800U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__mtime_lo 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x1000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__mtime_lo 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x2000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__mtime_lo 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x4000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__mtime_lo 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x8000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__mtime_lo 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x10000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__mtime_lo 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x20000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__mtime_lo 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x40000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__mtime_lo 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x80000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__mtime_lo 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x100000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__mtime_lo 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x200000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__mtime_lo 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x400000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__mtime_lo 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x800000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__mtime_lo 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x1000000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__mtime_lo 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x2000000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__mtime_lo 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x4000000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__mtime_lo 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x8000000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__mtime_lo 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x10000000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__mtime_lo 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x20000000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__mtime_lo 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x40000000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__mtime_lo 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_lo))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_lo 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_lo) 
               | (0x80000000U & vlTOPp->bench_top__DOT__mtime_lo));
    }
    if ((1U & (vlTOPp->bench_top__DOT__mtime_hi ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (1U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((2U & (vlTOPp->bench_top__DOT__mtime_hi ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (2U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((4U & (vlTOPp->bench_top__DOT__mtime_hi ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (4U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((8U & (vlTOPp->bench_top__DOT__mtime_hi ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (8U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__mtime_hi 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x10U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__mtime_hi 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x20U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__mtime_hi 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x40U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__mtime_hi 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x80U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__mtime_hi 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x100U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__mtime_hi 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x200U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__mtime_hi 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x400U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__mtime_hi 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x800U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__mtime_hi 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x1000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__mtime_hi 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x2000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__mtime_hi 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x4000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__mtime_hi 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x8000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__mtime_hi 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x10000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__mtime_hi 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x20000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__mtime_hi 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x40000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__mtime_hi 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x80000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__mtime_hi 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x100000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__mtime_hi 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x200000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__mtime_hi 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x400000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__mtime_hi 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x800000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__mtime_hi 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x1000000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__mtime_hi 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x2000000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__mtime_hi 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x4000000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__mtime_hi 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x8000000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__mtime_hi 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x10000000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__mtime_hi 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x20000000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__mtime_hi 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x40000000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__mtime_hi 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtime_hi))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlTOPp->bench_top__DOT____Vtogcov__mtime_hi 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtime_hi) 
               | (0x80000000U & vlTOPp->bench_top__DOT__mtime_hi));
    }
    if ((1U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
               ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (1U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((2U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
               ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (2U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((4U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
               ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (4U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((8U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
               ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (8U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x10U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x20U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x40U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x80U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x100U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x200U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x400U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x800U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x1000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x2000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x4000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x8000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x10000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x20000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x40000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x80000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x100000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x200000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x400000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x800000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x1000000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x2000000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x4000000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x8000000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x10000000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x20000000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x40000000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__mtimecmp_lo 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_lo) 
               | (0x80000000U & vlTOPp->bench_top__DOT__mtimecmp_lo));
    }
    if ((1U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
               ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (1U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((2U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
               ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (2U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((4U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
               ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (4U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((8U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
               ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (8U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x10U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x20U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x40U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x80U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x100U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x200U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x400U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x800U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x1000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x2000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x4000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x8000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x10000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x20000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x40000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x80000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x100000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x200000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x400000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x800000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x1000000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x2000000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x4000000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x8000000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x10000000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x20000000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x40000000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__mtimecmp_hi 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__mtimecmp_hi) 
               | (0x80000000U & vlTOPp->bench_top__DOT__mtimecmp_hi));
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    ++(vlSymsp->__Vcoverage[3578]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3569]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3462]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        ++(vlSymsp->__Vcoverage[3578]);
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    ++(vlSymsp->__Vcoverage[3578]);
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3463]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3486]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3576]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    ++(vlSymsp->__Vcoverage[3578]);
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3466]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            ++(vlSymsp->__Vcoverage[3578]);
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3474]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        ++(vlSymsp->__Vcoverage[3578]);
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        ++(vlSymsp->__Vcoverage[3578]);
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    ++(vlSymsp->__Vcoverage[3578]);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3461]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3513]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3577]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        ++(vlSymsp->__Vcoverage[3578]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        ++(vlSymsp->__Vcoverage[3578]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                ++(vlSymsp->__Vcoverage[3481]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                ++(vlSymsp->__Vcoverage[3578]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                      >> 1U)))) {
                            ++(vlSymsp->__Vcoverage[3578]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3488]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3489]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3492]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3484]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    ++(vlSymsp->__Vcoverage[3482]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        ++(vlSymsp->__Vcoverage[3483]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    ++(vlSymsp->__Vcoverage[3567]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3485]);
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
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    ++(vlSymsp->__Vcoverage[3464]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    ++(vlSymsp->__Vcoverage[3575]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    ++(vlSymsp->__Vcoverage[3574]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        ++(vlSymsp->__Vcoverage[3473]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    ++(vlSymsp->__Vcoverage[3465]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    ++(vlSymsp->__Vcoverage[3568]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3491]);
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
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3472]);
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
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3471]);
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
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3470]);
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
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3469]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3511]);
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
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3468]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3490]);
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
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3467]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3503]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3487]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        ++(vlSymsp->__Vcoverage[3480]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3479]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3478]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3480]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3477]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            ++(vlSymsp->__Vcoverage[3476]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            ++(vlSymsp->__Vcoverage[3475]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3500]);
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
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                ++(vlSymsp->__Vcoverage[3502]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x20U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x24U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3507]);
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
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x20U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3508]);
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
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                ++(vlSymsp->__Vcoverage[3510]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3524]);
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
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x14U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (0x34U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    ++(vlSymsp->__Vcoverage[3528]);
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
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x14U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (0x34U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    ++(vlSymsp->__Vcoverage[3527]);
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
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x14U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3530]);
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
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3532]);
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
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3537]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3536]);
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
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3539]);
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
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3538]);
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
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (5U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                ++(vlSymsp->__Vcoverage[3543]);
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
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3544]);
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
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3545]);
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
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3546]);
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
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3554]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x30U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (5U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    ++(vlSymsp->__Vcoverage[3549]);
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
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x30U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (5U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    ++(vlSymsp->__Vcoverage[3548]);
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
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x30U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                ++(vlSymsp->__Vcoverage[3550]);
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
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x30U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3551]);
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
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3552]);
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
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3553]);
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
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3560]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (5U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                ++(vlSymsp->__Vcoverage[3556]);
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
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (5U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                ++(vlSymsp->__Vcoverage[3555]);
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
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3557]);
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
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (5U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3562]);
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
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (5U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3561]);
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
            }
        }
    }
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                            if ((0x302U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                ++(vlSymsp->__Vcoverage[3573]);
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
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                            if ((0x302U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                ++(vlSymsp->__Vcoverage[3572]);
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
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        ++(vlSymsp->__Vcoverage[3570]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3516]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3518]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3565]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x10U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3535]);
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
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3526]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3520]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x10U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3534]);
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
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3521]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3525]);
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
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3540]);
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
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                            ++(vlSymsp->__Vcoverage[3571]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3515]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3547]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3531]);
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
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x14U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                ++(vlSymsp->__Vcoverage[3529]);
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
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3533]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3523]);
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
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3519]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x20U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3509]);
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
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3501]);
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
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            ++(vlSymsp->__Vcoverage[3499]);
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
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                ++(vlSymsp->__Vcoverage[3517]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                ++(vlSymsp->__Vcoverage[3514]);
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
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3564]);
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
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3563]);
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
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    ++(vlSymsp->__Vcoverage[3559]);
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
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        ++(vlSymsp->__Vcoverage[3558]);
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
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x600U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x601U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    if (
                                                                        (0x602U 
                                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                        ++(vlSymsp->__Vcoverage[3496]);
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
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x600U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                ++(vlSymsp->__Vcoverage[3498]);
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
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x20U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x24U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x698U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x287U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    ++(vlSymsp->__Vcoverage[3505]);
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
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (5U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((4U 
                                                                          == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)) 
                                                                         & (0U 
                                                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)))))) {
                                                                    ++(vlSymsp->__Vcoverage[3542]);
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
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (5U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    ((4U 
                                                                      == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)) 
                                                                     & (0U 
                                                                        == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)))) {
                                                                    ++(vlSymsp->__Vcoverage[3541]);
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
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x20U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x24U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x698U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x287U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    ++(vlSymsp->__Vcoverage[3504]);
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
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x20U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x24U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x698U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                ++(vlSymsp->__Vcoverage[3506]);
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
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x600U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x601U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    ++(vlSymsp->__Vcoverage[3497]);
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
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x600U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x601U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    if (
                                                                        (0x602U 
                                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                        if (
                                                                            (0x604U 
                                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                            ++(vlSymsp->__Vcoverage[3495]);
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
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x600U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x601U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    if (
                                                                        (0x602U 
                                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                        if (
                                                                            (0x604U 
                                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                            if (
                                                                                (0x605U 
                                                                                == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                                ++(vlSymsp->__Vcoverage[3493]);
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
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x600U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x601U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    if (
                                                                        (0x602U 
                                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                        if (
                                                                            (0x604U 
                                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                            if (
                                                                                (0x605U 
                                                                                != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                                ++(vlSymsp->__Vcoverage[3494]);
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
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode))) {
        ++(vlSymsp->__Vcoverage[3427]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode 
            = ((0x7eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode))) {
        ++(vlSymsp->__Vcoverage[3428]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode 
            = ((0x7dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode))) {
        ++(vlSymsp->__Vcoverage[3429]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode 
            = ((0x7bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode))) {
        ++(vlSymsp->__Vcoverage[3430]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode 
            = ((0x77U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode))) {
        ++(vlSymsp->__Vcoverage[3431]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode 
            = ((0x6fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode))) {
        ++(vlSymsp->__Vcoverage[3432]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode 
            = ((0x5fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode))) {
        ++(vlSymsp->__Vcoverage[3433]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode 
            = ((0x3fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__opcode)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__uses_rs2 = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__uses_rs2 = 1U;
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
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__uses_rs2 = 1U;
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
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__uses_rs2 = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__md_op = 0U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__md_op 
                                        = ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                            ? ((2U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                    ? 7U
                                                    : 6U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                    ? 5U
                                                    : 4U))
                                            : ((2U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                    ? 3U
                                                    : 2U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                    ? 1U
                                                    : 0U)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
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
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
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
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
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
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0xaU;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 9U;
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0xeU;
                                                    } else {
                                                        if (
                                                            (5U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x14U;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 8U;
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0xfU;
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0xdU;
                                                        } else {
                                                            if (
                                                                (5U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x13U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 6U;
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 7U;
                                                    } else {
                                                        if (
                                                            (0x30U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x19U;
                                                        } else {
                                                            if (
                                                                (0x24U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x22U;
                                                            } else {
                                                                if (
                                                                    (5U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x12U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 5U;
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x10U;
                                                    } else {
                                                        if (
                                                            (0x10U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0xcU;
                                                        } else {
                                                            if (
                                                                (5U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x11U;
                                                            } else {
                                                                if (
                                                                    ((4U 
                                                                      == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)) 
                                                                     & (0U 
                                                                        == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x17U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 4U;
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 3U;
                                                } else {
                                                    if (
                                                        (0x10U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0xbU;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 2U;
                                                } else {
                                                    if (
                                                        (0x30U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x18U;
                                                    } else {
                                                        if (
                                                            (0x14U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x1fU;
                                                        } else {
                                                            if (
                                                                (0x24U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x20U;
                                                            } else {
                                                                if (
                                                                    (0x34U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x21U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0U;
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 1U;
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
            } else {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0U;
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
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op 
                                            = ((1U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? 9U
                                                : 8U);
                                    } else {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 6U;
                                            } else {
                                                if (
                                                    (0x20U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 7U;
                                                } else {
                                                    if (
                                                        (0x30U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x19U;
                                                    } else {
                                                        if (
                                                            (0x24U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x22U;
                                                        } else {
                                                            if (
                                                                (0x698U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x1aU;
                                                            } else {
                                                                if (
                                                                    (0x287U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x1bU;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 5U;
                                        }
                                    }
                                } else {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op 
                                            = ((1U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? 4U
                                                : 3U);
                                    } else {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 2U;
                                            } else {
                                                if (
                                                    (0x24U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x20U;
                                                } else {
                                                    if (
                                                        (0x14U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x1fU;
                                                    } else {
                                                        if (
                                                            (0x34U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x21U;
                                                        } else {
                                                            if (
                                                                (0x600U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x1cU;
                                                            } else {
                                                                if (
                                                                    (0x601U 
                                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x1dU;
                                                                } else {
                                                                    if (
                                                                        (0x602U 
                                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x1eU;
                                                                    } else {
                                                                        if (
                                                                            (0x604U 
                                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x15U;
                                                                        } else {
                                                                            if (
                                                                                (0x605U 
                                                                                == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0x16U;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0U;
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
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__use_imm = 1U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__use_imm = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__use_pc = 0U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__use_pc = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_branch = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_branch = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_jalr = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_jalr = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_jal = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_jal = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_md = 0U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_md = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__br_op = 6U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__br_op 
                                        = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? 5U
                                                : 4U)
                                            : ((1U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? 3U
                                                : 2U));
                                } else {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__br_op 
                                            = ((1U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? 1U
                                                : 0U);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_ecall = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_ecall = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_ebreak = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_ebreak = 1U;
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel = 3U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel = 2U;
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel = 2U;
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
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel = 4U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                            if ((0x302U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    } else {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (5U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (5U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x30U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (5U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x10U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (5U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        ((4U 
                                                                          == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7)) 
                                                                         & (0U 
                                                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i)))))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x10U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x14U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x24U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                if (
                                                                    (0x34U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x20U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x20U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x30U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x24U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x698U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x287U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            if ((0U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                if (
                                                    (0x24U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                    if (
                                                        (0x14U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                        if (
                                                            (0x34U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7))) {
                                                            if (
                                                                (0x600U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                if (
                                                                    (0x601U 
                                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                    if (
                                                                        (0x602U 
                                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                        if (
                                                                            (0x604U 
                                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                            if (
                                                                                (0x605U 
                                                                                != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
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
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode)))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    } else {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                    }
                                } else {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                            }
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_unsigned = 0U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_unsigned = 1U;
                                    }
                                } else {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_unsigned = 0U;
                                        }
                                    } else {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_unsigned = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_mret = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                        if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                            if ((0x302U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12))) {
                                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_mret = 1U;
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width = 2U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width = 0U;
                                } else {
                                    if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width = 1U;
                                    } else {
                                        if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width = 2U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3) 
                                                  >> 1U)))) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width 
                                            = ((1U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? 1U
                                                : 0U);
                                    }
                                } else {
                                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3)))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width = 2U;
                                        }
                                    } else {
                                        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width 
                                            = ((1U 
                                                & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))
                                                ? 1U
                                                : 0U);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_csr = 0U;
    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3))) {
                                    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_csr = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_re = 0U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_re = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_we = 0U;
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode))) {
                                vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_we = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__dbg_ar_done) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_done)) {
        ++(vlSymsp->__Vcoverage[376]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_done 
            = vlTOPp->bench_top__DOT__dbg_ar_done;
    }
    vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_done 
        = vlTOPp->bench_top__DOT__dbg_ar_done;
    if (((IData)(vlTOPp->bench_top__DOT__dbg_resumereq) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_resumereq)) {
        ++(vlSymsp->__Vcoverage[370]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_resumereq 
            = vlTOPp->bench_top__DOT__dbg_resumereq;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_resumereq 
        = vlTOPp->bench_top__DOT__dbg_resumereq;
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_haltreq) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_haltreq)) {
        ++(vlSymsp->__Vcoverage[5665]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dbg_haltreq 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_haltreq;
    }
    vlTOPp->bench_top__DOT__dbg_haltreq = vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_haltreq;
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ndmreset)) {
        ++(vlSymsp->__Vcoverage[5667]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__ndmreset 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset;
    }
    vlTOPp->bench_top__DOT__ndmreset = vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset;
    if ((1U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (1U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (2U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (4U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (8U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x10U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x20U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x40U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x80U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x100U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x200U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x400U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x800U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__dm_mem_wdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_wdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__dm_mem_wdata));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6167]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6168]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6169]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6170]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6171]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6172]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6173]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6174]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6175]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6176]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6177]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6178]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6179]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6180]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6181]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6182]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6183]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6184]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6185]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6186]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6187]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6188]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6189]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6190]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6191]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6192]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6193]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6194]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6195]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6196]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6197]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val))) {
        ++(vlSymsp->__Vcoverage[6198]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__abstractcs_val) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6135]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6136]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6137]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6138]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6139]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6140]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6141]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6142]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6143]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6144]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6145]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6146]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6147]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6148]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6149]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6150]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6151]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6152]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6153]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6154]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6155]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6156]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6157]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6158]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6159]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6160]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6161]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6162]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6163]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6164]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6165]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val))) {
        ++(vlSymsp->__Vcoverage[6166]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmcontrol_val) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6199]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6200]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6201]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6202]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6203]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6204]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6205]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6206]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6207]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6208]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6209]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6210]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6211]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6212]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6213]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6214]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6215]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6216]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6217]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6218]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6219]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6220]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6221]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6222]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6223]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6224]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6225]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6226]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6227]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6228]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6229]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val))) {
        ++(vlSymsp->__Vcoverage[6230]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__sbcs_val) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val));
    }
    vlTOPp->bench_top__DOT__dm_in_dram = ((0x80000000U 
                                           <= vlTOPp->bench_top__DOT__dm_mem_addr) 
                                          & (0x80010000U 
                                             > vlTOPp->bench_top__DOT__dm_mem_addr));
    vlTOPp->bench_top__DOT__dm_in_imem = (0x10000U 
                                          > vlTOPp->bench_top__DOT__dm_mem_addr);
    if ((1U & (vlTOPp->bench_top__DOT__dm_mem_addr 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (1U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((2U & (vlTOPp->bench_top__DOT__dm_mem_addr 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (2U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((4U & (vlTOPp->bench_top__DOT__dm_mem_addr 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (4U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((8U & (vlTOPp->bench_top__DOT__dm_mem_addr 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (8U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x10U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x20U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x40U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x80U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x100U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x200U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x400U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x800U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x1000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x2000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x4000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x8000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x10000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x20000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x40000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x80000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x100000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x200000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x400000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x800000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x1000000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x2000000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x4000000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x8000000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x10000000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x20000000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x40000000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__dm_mem_addr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_addr) 
               | (0x80000000U & vlTOPp->bench_top__DOT__dm_mem_addr));
    }
    vlTOPp->bench_top__DOT__dm_dram_idx = (0x3fffU 
                                           & (vlTOPp->bench_top__DOT__dm_mem_addr 
                                              >> 2U));
    vlTOPp->bench_top__DOT__dm_imem_idx = (0x3fffU 
                                           & (vlTOPp->bench_top__DOT__dm_mem_addr 
                                              >> 2U));
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2485]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2486]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2487]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2488]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2489]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2490]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2491]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2492]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2493]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2494]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2495]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2496]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2497]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2498]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2499]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2500]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2501]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2502]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2503]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2504]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2505]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2506]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2507]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2508]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2509]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2510]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2511]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2512]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2513]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2514]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2515]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val))) {
        ++(vlSymsp->__Vcoverage[2516]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_val) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__dcsr_val));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_wdata 
        = vlTOPp->bench_top__DOT__dbg_ar_wdata;
    if ((1U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (1U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (2U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (4U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (8U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x10U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x20U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x40U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x80U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x100U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x200U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x400U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x800U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_wdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__dbg_ar_wdata));
    }
    if (((IData)(vlTOPp->bench_top__DOT__dbg_ar_write) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_write)) {
        ++(vlSymsp->__Vcoverage[374]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_write 
            = vlTOPp->bench_top__DOT__dbg_ar_write;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_write 
        = vlTOPp->bench_top__DOT__dbg_ar_write;
    if (((IData)(vlTOPp->bench_top__DOT__dbg_ar_csr) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_csr)) {
        ++(vlSymsp->__Vcoverage[375]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_csr 
            = vlTOPp->bench_top__DOT__dbg_ar_csr;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_csr 
        = vlTOPp->bench_top__DOT__dbg_ar_csr;
    if (((IData)(vlTOPp->bench_top__DOT__dbg_ar_valid) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_valid)) {
        ++(vlSymsp->__Vcoverage[373]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_valid 
            = vlTOPp->bench_top__DOT__dbg_ar_valid;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_valid 
        = vlTOPp->bench_top__DOT__dbg_ar_valid;
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_do = (
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode) 
                                                    & (IData)(vlTOPp->bench_top__DOT__dbg_ar_valid)) 
                                                   & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_busy)));
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_regno 
        = vlTOPp->bench_top__DOT__dbg_ar_regno;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__dbg_ar_regno) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno 
            = ((0xffeU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__dbg_ar_regno) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno 
            = ((0xffdU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__dbg_ar_regno) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno 
            = ((0xffbU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__dbg_ar_regno) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno 
            = ((0xff7U & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__dbg_ar_regno) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno 
            = ((0xfefU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__dbg_ar_regno) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno 
            = ((0xfdfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__dbg_ar_regno) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno 
            = ((0xfbfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__dbg_ar_regno) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno 
            = ((0xf7fU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__dbg_ar_regno) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno 
            = ((0xeffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__dbg_ar_regno) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno 
            = ((0xdffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__dbg_ar_regno) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno 
            = ((0xbffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__dbg_ar_regno) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno 
            = ((0x7ffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dbg_ar_regno)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_csr_local 
        = (((0x7b0U == (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)) 
            | (0x7b1U == (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) 
           | (0x7b2U == (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)));
    vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1 = (0x1fU 
                                                   & ((((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode) 
                                                        & (IData)(vlTOPp->bench_top__DOT__dbg_ar_valid)) 
                                                       & (~ (IData)(vlTOPp->bench_top__DOT__dbg_ar_csr)))
                                                       ? (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)
                                                       : (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1)));
    vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff 
        = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode)
            ? (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)
            : (IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12));
    if (((IData)(vlTOPp->bench_top__DOT__dm_mem_valid) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_valid)) {
        ++(vlSymsp->__Vcoverage[453]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_valid 
            = vlTOPp->bench_top__DOT__dm_mem_valid;
    }
    if (((IData)(vlTOPp->bench_top__DOT__dm_mem_write) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_write)) {
        ++(vlSymsp->__Vcoverage[454]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_write 
            = vlTOPp->bench_top__DOT__dm_mem_write;
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_op))) {
        ++(vlSymsp->__Vcoverage[5948]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_op 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_op)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_op))) {
        ++(vlSymsp->__Vcoverage[5949]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_op 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_op)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr))) {
        ++(vlSymsp->__Vcoverage[5909]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr 
            = ((0x7eU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr))) {
        ++(vlSymsp->__Vcoverage[5910]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr 
            = ((0x7dU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr))) {
        ++(vlSymsp->__Vcoverage[5911]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr 
            = ((0x7bU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr) 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr))) {
        ++(vlSymsp->__Vcoverage[5912]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr 
            = ((0x77U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr))) {
        ++(vlSymsp->__Vcoverage[5913]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr 
            = ((0x6fU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr)));
    }
}
