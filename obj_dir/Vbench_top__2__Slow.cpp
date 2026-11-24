// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench_top.h for the primary calling header

#include "Vbench_top.h"
#include "Vbench_top__Syms.h"

#include "verilated_dpi.h"

void Vbench_top::_settle__TOP__3(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_settle__TOP__3\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp11[3];
    WData/*95:0*/ __Vtemp12[3];
    WData/*95:0*/ __Vtemp14[3];
    WData/*95:0*/ __Vtemp15[3];
    WData/*95:0*/ __Vtemp16[3];
    // Body
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr))) {
        ++(vlSymsp->__Vcoverage[5914]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr 
            = ((0x5fU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr) 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr))) {
        ++(vlSymsp->__Vcoverage[5915]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr 
            = ((0x3fU & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_addr)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr)));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5916]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5917]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5918]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5919]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5920]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5921]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5922]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5923]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5924]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5925]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5926]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5927]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5928]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5929]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5930]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5931]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5932]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5933]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5934]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5935]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5936]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5937]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5938]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5939]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5940]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5941]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5942]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5943]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5944]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5945]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5946]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data))) {
        ++(vlSymsp->__Vcoverage[5947]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmi_data) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_data));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tck_rise)) {
        ++(vlSymsp->__Vcoverage[5788]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tck_rise 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_q) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tdi_q)) {
        ++(vlSymsp->__Vcoverage[5790]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tdi_q 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_q;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tdo) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tdo)) {
        ++(vlSymsp->__Vcoverage[5664]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tdo 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__tdo;
    }
    vlTOPp->bench_top__DOT__tdo = vlTOPp->bench_top__DOT__u_dbg__DOT__tdo;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__aoff) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__aoff))) {
        ++(vlSymsp->__Vcoverage[2433]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__aoff 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__aoff)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__aoff)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__aoff) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__aoff))) {
        ++(vlSymsp->__Vcoverage[2434]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__aoff 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__aoff)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__aoff)));
    }
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__clk 
        = vlTOPp->bench_top__DOT__u_core__DOT__clk;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__clk 
        = vlTOPp->bench_top__DOT__u_core__DOT__clk;
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__clk 
        = vlTOPp->bench_top__DOT__u_core__DOT__clk;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__md_busy) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_busy)) {
        ++(vlSymsp->__Vcoverage[2013]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__md_busy 
            = vlTOPp->bench_top__DOT__u_core__DOT__md_busy;
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[1236]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[1238]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[1239]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[1240]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__retire_rd)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__retire_rd)));
    }
    vlTOPp->bench_top__DOT__retire_rd = vlTOPp->bench_top__DOT__u_core__DOT__retire_rd;
    if ((1U & (vlTOPp->bench_top__DOT__retire_instr 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (1U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((2U & (vlTOPp->bench_top__DOT__retire_instr 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (2U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((4U & (vlTOPp->bench_top__DOT__retire_instr 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (4U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((8U & (vlTOPp->bench_top__DOT__retire_instr 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (8U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__retire_instr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x10U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__retire_instr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x20U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__retire_instr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x40U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__retire_instr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x80U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__retire_instr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x100U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__retire_instr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x200U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__retire_instr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x400U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__retire_instr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x800U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__retire_instr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x1000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__retire_instr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x2000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__retire_instr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x4000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__retire_instr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x8000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__retire_instr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x10000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__retire_instr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x20000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__retire_instr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x40000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__retire_instr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x80000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__retire_instr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x100000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__retire_instr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x200000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__retire_instr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x400000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__retire_instr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x800000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__retire_instr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x1000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__retire_instr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x2000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__retire_instr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x4000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__retire_instr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x8000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__retire_instr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x10000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__retire_instr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x20000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__retire_instr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x40000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__retire_instr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_instr))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_instr 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_instr) 
               | (0x80000000U & vlTOPp->bench_top__DOT__retire_instr));
    }
    vlTOPp->retire_pc = vlTOPp->bench_top__DOT__retire_pc;
    if ((1U & (vlTOPp->bench_top__DOT__retire_pc ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (1U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((2U & (vlTOPp->bench_top__DOT__retire_pc ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (2U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((4U & (vlTOPp->bench_top__DOT__retire_pc ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (4U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((8U & (vlTOPp->bench_top__DOT__retire_pc ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (8U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__retire_pc 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x10U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__retire_pc 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x20U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__retire_pc 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x40U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__retire_pc 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x80U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__retire_pc 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x100U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__retire_pc 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x200U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__retire_pc 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x400U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__retire_pc 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x800U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__retire_pc 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x1000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__retire_pc 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x2000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__retire_pc 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x4000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__retire_pc 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x8000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__retire_pc 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x10000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__retire_pc 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x20000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__retire_pc 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x40000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__retire_pc 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x80000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__retire_pc 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x100000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__retire_pc 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x200000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__retire_pc 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x400000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__retire_pc 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x800000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__retire_pc 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x1000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__retire_pc 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x2000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__retire_pc 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x4000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__retire_pc 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x8000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__retire_pc 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x10000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__retire_pc 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x20000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__retire_pc 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x40000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__retire_pc 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__retire_pc))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_pc 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__retire_pc) 
               | (0x80000000U & vlTOPp->bench_top__DOT__retire_pc));
    }
    if (((IData)(vlTOPp->bench_top__DOT__dbg_halted) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_halted)) {
        ++(vlSymsp->__Vcoverage[371]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_halted 
            = vlTOPp->bench_top__DOT__dbg_halted;
    }
    vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_halted 
        = vlTOPp->bench_top__DOT__dbg_halted;
    vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
        = (0x82U | (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__resumeack) 
                     << 0x11U) | (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__resumeack) 
                                   << 0x10U) | ((0x800U 
                                                 & ((~ (IData)(vlTOPp->bench_top__DOT__dbg_halted)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((~ (IData)(vlTOPp->bench_top__DOT__dbg_halted)) 
                                                       << 0xaU)) 
                                                   | (((IData)(vlTOPp->bench_top__DOT__dbg_halted) 
                                                       << 9U) 
                                                      | ((IData)(vlTOPp->bench_top__DOT__dbg_halted) 
                                                         << 8U)))))));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted)))) {
        ++(vlSymsp->__Vcoverage[4329]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4330]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4331]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4332]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4333]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4334]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4335]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4336]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4337]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4338]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4339]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4340]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4341]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4342]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4343]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4344]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4345]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4346]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4347]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4348]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4349]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4350]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4351]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4352]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7ff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4353]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7feffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4354]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4355]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7fbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4356]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7f7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4357]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7efffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4358]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7dfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4359]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x7bfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4360]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x77fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4361]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x6ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4362]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x5ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4363]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted 
            = ((0x3ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_shifted) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
         >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)) {
        ++(vlSymsp->__Vcoverage[4404]);
    }
    if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
         < vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)) {
        if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
             >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2)) {
            ++(vlSymsp->__Vcoverage[4403]);
        }
    }
    if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
         < vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)) {
        if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
             < vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2)) {
            if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                 < vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1)) {
                ++(vlSymsp->__Vcoverage[4402]);
            }
        }
    }
    if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
         < vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)) {
        if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
             < vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2)) {
            if ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                 >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1)) {
                ++(vlSymsp->__Vcoverage[4401]);
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__q_digit 
        = ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
            >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)
            ? 3U : ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                     >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2)
                     ? 2U : ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                              >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1)
                              ? 1U : 0U)));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3)))) {
        ++(vlSymsp->__Vcoverage[4292]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4293]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4294]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4295]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4296]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4297]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4298]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4299]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4300]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4301]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4302]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4303]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4304]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4305]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4306]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4307]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4308]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4309]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4310]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4311]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4312]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4313]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4314]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4315]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7ff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4316]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7feffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4317]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4318]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7fbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4319]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7f7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4320]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7efffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4321]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7dfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4322]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x7bfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4323]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x77fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4324]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x6ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4325]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x5ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4326]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3 
            = ((0x3ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__d3) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
        = (0x7ffffffffULL & ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                              >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)
                              ? (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                 - vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d3)
                              : ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                  >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2)
                                  ? (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                     - vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2)
                                  : ((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                      >= vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1)
                                      ? (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted 
                                         - vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1)
                                      : vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_shifted))));
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2370]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2371]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2372]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2373]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2374]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2375]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2376]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2377]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2378]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2379]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2380]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2381]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2382]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2383]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2384]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2385]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2386]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2387]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2388]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2389]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2390]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2391]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2392]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2393]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2394]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mepc_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w))) {
        ++(vlSymsp->__Vcoverage[2395]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mepc_w) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__mepc_w));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2332]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2333]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2334]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2335]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2336]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2337]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2338]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2343]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2344]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2345]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2346]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2347]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2352]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w))) {
        ++(vlSymsp->__Vcoverage[2363]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mtvec_w) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__mtvec_w));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext)))) {
        ++(vlSymsp->__Vcoverage[3792]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3793]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3794]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3795]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3796]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3797]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3798]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3799]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3800]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3801]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3802]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3803]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3804]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3805]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3806]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3807]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3808]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3809]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3810]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3811]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3812]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3813]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3814]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3815]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1ff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3816]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1feffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3817]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3818]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1fbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3819]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1f7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3820]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1efffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3821]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1dfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3822]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x1bfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3823]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0x17fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3824]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext 
            = ((0xffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__a_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext)))) {
        ++(vlSymsp->__Vcoverage[3825]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3826]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3827]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3828]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3829]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3830]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3831]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3832]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3833]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3834]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3835]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3836]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3837]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3838]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3839]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3840]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3841]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3842]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3843]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3844]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3845]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3846]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3847]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3848]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1ff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3849]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1feffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3850]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3851]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1fbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3852]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1f7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3853]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1efffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3854]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1dfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3855]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x1bfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3856]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0x17fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3857]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext 
            = ((0xffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__b_ext) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    VL_EXTENDS_WQ(66,33, __Vtemp11, vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_ext);
    __Vtemp12[0U] = __Vtemp11[0U];
    __Vtemp12[1U] = __Vtemp11[1U];
    __Vtemp12[2U] = (3U & __Vtemp11[2U]);
    VL_EXTENDS_WQ(66,33, __Vtemp14, vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_ext);
    __Vtemp15[0U] = __Vtemp14[0U];
    __Vtemp15[1U] = __Vtemp14[1U];
    __Vtemp15[2U] = (3U & __Vtemp14[2U]);
    VL_MULS_WWW(66,66,66, __Vtemp16, __Vtemp12, __Vtemp15);
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
        = __Vtemp16[0U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
        = __Vtemp16[1U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[2U] 
        = (3U & __Vtemp16[2U]);
    if (((IData)(vlTOPp->bench_top__DOT__dmem_re) ^ vlTOPp->bench_top__DOT____Vtogcov__dmem_re)) {
        ++(vlSymsp->__Vcoverage[232]);
        vlTOPp->bench_top__DOT____Vtogcov__dmem_re 
            = vlTOPp->bench_top__DOT__dmem_re;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__imm_i 
        = vlTOPp->bench_top__DOT__u_core__DOT__imm_i;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1547]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1548]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1549]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1550]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1551]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1552]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1553]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1554]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1555]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1556]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1557]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1558]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1559]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1560]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1561]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1562]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1563]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1564]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1565]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1566]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1567]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1568]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1569]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1570]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1571]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1572]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_i 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_i) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_i));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__imm_s 
        = vlTOPp->bench_top__DOT__u_core__DOT__imm_s;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1607]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_s 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_s) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_s));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__imm_b 
        = vlTOPp->bench_top__DOT__u_core__DOT__imm_b;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1617]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1618]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1619]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1620]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1621]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1622]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1623]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1624]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1626]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1627]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1628]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1629]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1630]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1631]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1632]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1633]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1634]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1635]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1636]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1637]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__imm_b 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b))) {
        ++(vlSymsp->__Vcoverage[1638]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__imm_b) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__imm_b));
    }
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
    if ((1U & (vlTOPp->bench_top__DOT__imem_addr ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (1U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((2U & (vlTOPp->bench_top__DOT__imem_addr ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (2U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((4U & (vlTOPp->bench_top__DOT__imem_addr ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (4U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((8U & (vlTOPp->bench_top__DOT__imem_addr ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (8U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__imem_addr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x10U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__imem_addr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x20U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__imem_addr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x40U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__imem_addr 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x80U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__imem_addr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x100U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__imem_addr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x200U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__imem_addr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x400U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__imem_addr 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x800U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__imem_addr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x1000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__imem_addr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x2000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__imem_addr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x4000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__imem_addr 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x8000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__imem_addr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x10000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__imem_addr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x20000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__imem_addr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x40000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__imem_addr 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x80000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__imem_addr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x100000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__imem_addr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x200000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__imem_addr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x400000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__imem_addr 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x800000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__imem_addr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x1000000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__imem_addr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x2000000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__imem_addr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x4000000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__imem_addr 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x8000000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__imem_addr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x10000000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__imem_addr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x20000000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__imem_addr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x40000000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__imem_addr 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__imem_addr))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_addr 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_addr) 
               | (0x80000000U & vlTOPp->bench_top__DOT__imem_addr));
    }
    vlTOPp->bench_top__DOT__in_dram_fetch = ((0x80000000U 
                                              <= vlTOPp->bench_top__DOT__imem_addr) 
                                             & (0x80010000U 
                                                > vlTOPp->bench_top__DOT__imem_addr));
    vlTOPp->bench_top__DOT__imem_idx = (0x3fffU & (vlTOPp->bench_top__DOT__imem_addr 
                                                   >> 2U));
    vlTOPp->bench_top__DOT__dram_fetch_idx = (0x3fffU 
                                              & (vlTOPp->bench_top__DOT__imem_addr 
                                                 >> 2U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_soft 
        = vlTOPp->bench_top__DOT__u_core__DOT__irq_soft;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_timer 
        = vlTOPp->bench_top__DOT__u_core__DOT__irq_timer;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_ext 
        = vlTOPp->bench_top__DOT__u_core__DOT__irq_ext;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5387]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5388]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5389]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5390]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5391]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5392]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5393]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5394]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5395]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5396]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5397]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5398]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5399]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5400]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5401]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5402]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5403]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5404]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5405]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5406]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5407]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5408]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5409]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5410]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5411]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5412]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5413]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5414]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5415]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5416]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5417]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip))) {
        ++(vlSymsp->__Vcoverage[5418]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__mip) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_cause 
        = ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                      & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie))
            ? 0xbU : ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                                & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie))
                       ? 7U : 3U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_req 
        = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__glob_ie) 
           & ((((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                 & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie) 
                >> 0xbU) | ((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                             & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie) 
                            >> 7U)) | ((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
                                        & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie) 
                                       >> 3U)));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__cur_priv) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__cur_priv))) {
        ++(vlSymsp->__Vcoverage[2153]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__cur_priv 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__cur_priv)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__cur_priv)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__cur_priv) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__cur_priv))) {
        ++(vlSymsp->__Vcoverage[2154]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__cur_priv 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__cur_priv)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__cur_priv)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__priv_u = (0U 
                                                   == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__cur_priv));
    if ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn))) {
        ++(vlSymsp->__Vcoverage[2146]);
    }
    if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn))) {
        if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn))) {
            ++(vlSymsp->__Vcoverage[2147]);
        }
    }
    if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn))) {
        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn))) {
            if ((3U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn))) {
                ++(vlSymsp->__Vcoverage[2148]);
            }
        }
    }
    if ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn))) {
        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn))) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn))) {
                ++(vlSymsp->__Vcoverage[2149]);
            }
        }
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_fn))) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_fn 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_fn)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_fn))) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_fn 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_fn)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn)));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_imm_mode) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_imm_mode)) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_imm_mode 
            = vlTOPp->bench_top__DOT__u_core__DOT__csr_imm_mode;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__fetch_m) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_m)) {
        ++(vlSymsp->__Vcoverage[2155]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__fetch_m 
            = vlTOPp->bench_top__DOT__u_core__DOT__fetch_m;
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.priv_m 
        = vlTOPp->bench_top__DOT__u_core__DOT__fetch_m;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__data_m) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__data_m)) {
        ++(vlSymsp->__Vcoverage[2156]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__data_m 
            = vlTOPp->bench_top__DOT__u_core__DOT__data_m;
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.priv_m 
        = vlTOPp->bench_top__DOT__u_core__DOT__data_m;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__mmwp_w) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mmwp_w)) {
        ++(vlSymsp->__Vcoverage[2157]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mmwp_w 
            = vlTOPp->bench_top__DOT__u_core__DOT__mmwp_w;
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.mmwp 
        = vlTOPp->bench_top__DOT__u_core__DOT__mmwp_w;
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.mmwp 
        = vlTOPp->bench_top__DOT__u_core__DOT__mmwp_w;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__mml_w) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mml_w)) {
        ++(vlSymsp->__Vcoverage[2158]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__mml_w 
            = vlTOPp->bench_top__DOT__u_core__DOT__mml_w;
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.mml 
        = vlTOPp->bench_top__DOT__u_core__DOT__mml_w;
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.mml 
        = vlTOPp->bench_top__DOT__u_core__DOT__mml_w;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[0U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U]));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2211]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2212]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2213]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2214]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2215]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2216]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2217]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2218]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2219]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2220]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2221]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]))) {
        ++(vlSymsp->__Vcoverage[2222]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[1U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U]));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2223]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2224]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2225]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2226]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2227]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2228]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2229]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2230]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2231]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2232]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2233]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2234]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2235]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2236]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2237]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2238]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2239]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2240]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2241]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2242]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2243]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2244]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2245]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2246]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2247]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2248]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2249]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2250]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2251]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2252]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2253]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[2U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[2U]));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2255]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2256]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2257]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2258]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2259]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2260]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2261]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2262]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2263]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2264]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2265]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2266]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2267]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2268]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2269]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2270]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2271]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2272]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2273]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2274]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2275]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2276]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2277]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2278]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2279]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2280]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2281]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2282]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2283]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2284]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2285]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]))) {
        ++(vlSymsp->__Vcoverage[2286]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__pmpcfg_w[3U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[3U]));
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.cfg 
        = (((QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U])) 
            << 0x20U) | (QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U])));
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.cfg 
        = (((QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[1U])) 
            << 0x20U) | (QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__pmpcfg_w[0U])));
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[0U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[0U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[1U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[1U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[2U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[2U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[3U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[3U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[4U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[4U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[5U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[5U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[6U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[6U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addrreg[7U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[7U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[0U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[0U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[1U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[1U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[2U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[2U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[3U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[3U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[4U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[4U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[5U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[5U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[6U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[6U];
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.addrreg[7U] 
        = vlTOPp->bench_top__DOT__u_core__DOT__pmpaddr_w[7U];
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__uses_rs2) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__uses_rs2)) {
        ++(vlSymsp->__Vcoverage[3394]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__uses_rs2 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__uses_rs2;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_uses_rs2 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__uses_rs2;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__md_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__md_op))) {
        ++(vlSymsp->__Vcoverage[3371]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__md_op 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__md_op)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__md_op)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__md_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__md_op))) {
        ++(vlSymsp->__Vcoverage[3372]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__md_op 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__md_op)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__md_op)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__md_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__md_op))) {
        ++(vlSymsp->__Vcoverage[3373]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__md_op 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__md_op)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__md_op)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_md_op = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__md_op;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__reg_we)) {
        ++(vlSymsp->__Vcoverage[3379]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__reg_we 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_reg_we = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__reg_we;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op))) {
        ++(vlSymsp->__Vcoverage[3362]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op 
            = ((0x3eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op))) {
        ++(vlSymsp->__Vcoverage[3363]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op 
            = ((0x3dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op 
            = ((0x3bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op 
            = ((0x37U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op 
            = ((0x2fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op))) {
        ++(vlSymsp->__Vcoverage[3367]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op 
            = ((0x1fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__alu_op)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__alu_op;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__use_imm) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__use_imm)) {
        ++(vlSymsp->__Vcoverage[3378]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__use_imm 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__use_imm;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_use_imm 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__use_imm;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__use_pc) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__use_pc)) {
        ++(vlSymsp->__Vcoverage[3377]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__use_pc 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__use_pc;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_use_pc = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__use_pc;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_branch) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_branch)) {
        ++(vlSymsp->__Vcoverage[3385]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_branch 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_branch;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_is_branch 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_branch;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_jalr) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_jalr)) {
        ++(vlSymsp->__Vcoverage[3387]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_jalr 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_jalr;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_is_jalr 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_jalr;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_jal) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_jal)) {
        ++(vlSymsp->__Vcoverage[3386]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_jal 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_jal;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_is_jal = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_jal;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_md) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_md)) {
        ++(vlSymsp->__Vcoverage[3388]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_md 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_md;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_is_md = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_md;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__br_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__br_op))) {
        ++(vlSymsp->__Vcoverage[3368]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__br_op 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__br_op)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__br_op)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__br_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__br_op))) {
        ++(vlSymsp->__Vcoverage[3369]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__br_op 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__br_op)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__br_op)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__br_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__br_op))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__br_op 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__br_op)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__br_op)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_br_op = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__br_op;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_ecall) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_ecall)) {
        ++(vlSymsp->__Vcoverage[3390]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_ecall 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_ecall;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_is_ecall 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_ecall;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_ebreak) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_ebreak)) {
        ++(vlSymsp->__Vcoverage[3391]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_ebreak 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_ebreak;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_is_ebreak 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_ebreak;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__wb_sel))) {
        ++(vlSymsp->__Vcoverage[3374]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__wb_sel 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__wb_sel)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__wb_sel))) {
        ++(vlSymsp->__Vcoverage[3375]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__wb_sel 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__wb_sel)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__wb_sel))) {
        ++(vlSymsp->__Vcoverage[3376]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__wb_sel 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__wb_sel)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__wb_sel;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__illegal)) {
        ++(vlSymsp->__Vcoverage[3393]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__illegal 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_illegal 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__illegal;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_unsigned) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__mem_unsigned)) {
        ++(vlSymsp->__Vcoverage[3382]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__mem_unsigned 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_unsigned;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_mem_unsigned 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_unsigned;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_mret) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_mret)) {
        ++(vlSymsp->__Vcoverage[3392]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_mret 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_mret;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_is_mret 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_mret;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__mem_width))) {
        ++(vlSymsp->__Vcoverage[3383]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__mem_width 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__mem_width)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__mem_width))) {
        ++(vlSymsp->__Vcoverage[3384]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__mem_width 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__mem_width)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_mem_width 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_width;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_csr) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_csr)) {
        ++(vlSymsp->__Vcoverage[3389]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__is_csr 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_csr;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_is_csr = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__is_csr;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_re) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__mem_re)) {
        ++(vlSymsp->__Vcoverage[3380]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__mem_re 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_re;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_re;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_we) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__mem_we)) {
        ++(vlSymsp->__Vcoverage[3381]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__mem_we 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_we;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__mem_we;
    if (((IData)(vlTOPp->bench_top__DOT__dbg_haltreq) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dbg_haltreq)) {
        ++(vlSymsp->__Vcoverage[369]);
        vlTOPp->bench_top__DOT____Vtogcov__dbg_haltreq 
            = vlTOPp->bench_top__DOT__dbg_haltreq;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_haltreq 
        = vlTOPp->bench_top__DOT__dbg_haltreq;
    if (((IData)(vlTOPp->bench_top__DOT__ndmreset) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__ndmreset)) {
        ++(vlSymsp->__Vcoverage[372]);
        vlTOPp->bench_top__DOT____Vtogcov__ndmreset 
            = vlTOPp->bench_top__DOT__ndmreset;
    }
    vlTOPp->bench_top__DOT__core_rst = ((IData)(vlTOPp->rst) 
                                        | (IData)(vlTOPp->bench_top__DOT__ndmreset));
    if (((IData)(vlTOPp->bench_top__DOT__dm_in_dram) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dm_in_dram)) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_in_dram 
            = vlTOPp->bench_top__DOT__dm_in_dram;
    }
    if (((IData)(vlTOPp->bench_top__DOT__dm_in_imem) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dm_in_imem)) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_in_imem 
            = vlTOPp->bench_top__DOT__dm_in_imem;
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__dm_dram_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx 
            = ((0x3ffeU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__dm_dram_idx)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__dm_dram_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx 
            = ((0x3ffdU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__dm_dram_idx)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__dm_dram_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx 
            = ((0x3ffbU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__dm_dram_idx)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__dm_dram_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx 
            = ((0x3ff7U & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__dm_dram_idx)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__dm_dram_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx 
            = ((0x3fefU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__dm_dram_idx)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__dm_dram_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx 
            = ((0x3fdfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__dm_dram_idx)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__dm_dram_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx 
            = ((0x3fbfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__dm_dram_idx)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__dm_dram_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx 
            = ((0x3f7fU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__dm_dram_idx)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__dm_dram_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx 
            = ((0x3effU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__dm_dram_idx)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__dm_dram_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx 
            = ((0x3dffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__dm_dram_idx)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__dm_dram_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx 
            = ((0x3bffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__dm_dram_idx)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__dm_dram_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx 
            = ((0x37ffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__dm_dram_idx)));
    }
    if ((0x1000U & ((IData)(vlTOPp->bench_top__DOT__dm_dram_idx) 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx 
            = ((0x2fffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx)) 
               | (0x1000U & (IData)(vlTOPp->bench_top__DOT__dm_dram_idx)));
    }
    if ((0x2000U & ((IData)(vlTOPp->bench_top__DOT__dm_dram_idx) 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx 
            = ((0x1fffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_dram_idx)) 
               | (0x2000U & (IData)(vlTOPp->bench_top__DOT__dm_dram_idx)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__dm_imem_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx 
            = ((0x3ffeU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__dm_imem_idx)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__dm_imem_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx 
            = ((0x3ffdU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__dm_imem_idx)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__dm_imem_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx 
            = ((0x3ffbU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__dm_imem_idx)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__dm_imem_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx))) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx 
            = ((0x3ff7U & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__dm_imem_idx)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__dm_imem_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx 
            = ((0x3fefU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__dm_imem_idx)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__dm_imem_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx 
            = ((0x3fdfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__dm_imem_idx)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__dm_imem_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx 
            = ((0x3fbfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__dm_imem_idx)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__dm_imem_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx 
            = ((0x3f7fU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__dm_imem_idx)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__dm_imem_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx 
            = ((0x3effU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__dm_imem_idx)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__dm_imem_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx 
            = ((0x3dffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__dm_imem_idx)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__dm_imem_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx 
            = ((0x3bffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__dm_imem_idx)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__dm_imem_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx 
            = ((0x37ffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__dm_imem_idx)));
    }
    if ((0x1000U & ((IData)(vlTOPp->bench_top__DOT__dm_imem_idx) 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx 
            = ((0x2fffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx)) 
               | (0x1000U & (IData)(vlTOPp->bench_top__DOT__dm_imem_idx)));
    }
    if ((0x2000U & ((IData)(vlTOPp->bench_top__DOT__dm_imem_idx) 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx 
            = ((0x1fffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dm_imem_idx)) 
               | (0x2000U & (IData)(vlTOPp->bench_top__DOT__dm_imem_idx)));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_do)) {
        ++(vlSymsp->__Vcoverage[1836]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_do 
            = vlTOPp->bench_top__DOT__u_core__DOT__dbg_do;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_gpr_we 
        = (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) 
            & (IData)(vlTOPp->bench_top__DOT__dbg_ar_write)) 
           & (~ (IData)(vlTOPp->bench_top__DOT__dbg_ar_csr)));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_csr_local) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_csr_local)) {
        ++(vlSymsp->__Vcoverage[2438]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_csr_local 
            = vlTOPp->bench_top__DOT__u_core__DOT__dbg_csr_local;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_csr_we 
        = ((((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) 
             & (IData)(vlTOPp->bench_top__DOT__dbg_ar_write)) 
            & (IData)(vlTOPp->bench_top__DOT__dbg_ar_csr)) 
           & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_csr_local)));
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ra1 
        = vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1))) {
        ++(vlSymsp->__Vcoverage[1838]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1))) {
        ++(vlSymsp->__Vcoverage[1839]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1))) {
        ++(vlSymsp->__Vcoverage[1840]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1))) {
        ++(vlSymsp->__Vcoverage[1841]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1))) {
        ++(vlSymsp->__Vcoverage[1842]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_ra1)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_addr 
        = vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff))) {
        ++(vlSymsp->__Vcoverage[2440]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff 
            = ((0xffeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff))) {
        ++(vlSymsp->__Vcoverage[2441]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff 
            = ((0xffdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff))) {
        ++(vlSymsp->__Vcoverage[2442]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff 
            = ((0xffbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff))) {
        ++(vlSymsp->__Vcoverage[2443]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff 
            = ((0xff7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff))) {
        ++(vlSymsp->__Vcoverage[2444]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff 
            = ((0xfefU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff))) {
        ++(vlSymsp->__Vcoverage[2445]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff 
            = ((0xfdfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff))) {
        ++(vlSymsp->__Vcoverage[2446]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff 
            = ((0xfbfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff))) {
        ++(vlSymsp->__Vcoverage[2447]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff 
            = ((0xf7fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff))) {
        ++(vlSymsp->__Vcoverage[2448]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff 
            = ((0xeffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff))) {
        ++(vlSymsp->__Vcoverage[2449]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff 
            = ((0xdffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff))) {
        ++(vlSymsp->__Vcoverage[2450]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff 
            = ((0xbffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff))) {
        ++(vlSymsp->__Vcoverage[2451]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff 
            = ((0x7ffU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_addr_eff)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg 
        = (0xe8U == (0x3ffU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                               >> 2U)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr 
        = (0x3bU == (0xffU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 4U)));
    vlTOPp->tdo = vlTOPp->bench_top__DOT__tdo;
    if (((IData)(vlTOPp->bench_top__DOT__tdo) ^ vlTOPp->bench_top__DOT____Vtogcov__tdo)) {
        ++(vlSymsp->__Vcoverage[5]);
        vlTOPp->bench_top__DOT____Vtogcov__tdo = vlTOPp->bench_top__DOT__tdo;
    }
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
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__retire_rd) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__retire_rd)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__retire_rd)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__retire_rd) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__retire_rd)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__retire_rd)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__retire_rd) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__retire_rd)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__retire_rd)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__retire_rd) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT____Vtogcov__retire_rd)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__retire_rd)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__retire_rd) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__retire_rd))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlTOPp->bench_top__DOT____Vtogcov__retire_rd 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__retire_rd)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__retire_rd)));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6103]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6104]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (2U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6105]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (4U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
               ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6106]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (8U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6107]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x10U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6108]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x20U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6109]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x40U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                  ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6110]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x80U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6111]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x100U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6112]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x200U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6113]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x400U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                   ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6114]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x800U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6115]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6116]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6117]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                    ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6118]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6119]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6120]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6121]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                     ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6122]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6123]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6124]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6125]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                      ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6126]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6127]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6128]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6129]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                       ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6130]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6131]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6132]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6133]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val 
                        ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val))) {
        ++(vlSymsp->__Vcoverage[6134]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__dmstatus_val) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__q_digit) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__q_digit))) {
        ++(vlSymsp->__Vcoverage[4399]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__q_digit 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__q_digit)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__q_digit)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__q_digit) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__q_digit))) {
        ++(vlSymsp->__Vcoverage[4400]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__q_digit 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__q_digit)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__q_digit)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next)))) {
        ++(vlSymsp->__Vcoverage[4364]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7fffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4365]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7fffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4366]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7fffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4367]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7fffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4368]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7ffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4369]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7ffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4370]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7ffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4371]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7ffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4372]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7fffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4373]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7fffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4374]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7fffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4375]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7fffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4376]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7ffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4377]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7ffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4378]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7ffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4379]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7ffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4380]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7fffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4381]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7fffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4382]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7fffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4383]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7fff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4384]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7ffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4385]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7ffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4386]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7ffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4387]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7ff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4388]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7feffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4389]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7fdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4390]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7fbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4391]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7f7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4392]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7efffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4393]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7dfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4394]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x7bfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4395]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x77fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4396]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x6ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4397]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x5ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4398]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next 
            = ((0x3ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__rem_next) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3858]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3859]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3860]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3861]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3862]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3863]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3864]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3865]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3866]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3867]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3868]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3869]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3870]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3871]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3872]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3873]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3874]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3875]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3876]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3877]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3878]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3879]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3880]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3881]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3882]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3883]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3884]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3885]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3886]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3887]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3888]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]))) {
        ++(vlSymsp->__Vcoverage[3889]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[0U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U]));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3890]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3891]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3892]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3893]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3894]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3895]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3896]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3897]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3898]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3899]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3900]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3901]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3902]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3903]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3904]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3905]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3906]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3907]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3908]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3909]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3910]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3911]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3912]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3913]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3914]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3915]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3916]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3917]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3918]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3919]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3920]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U] 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]))) {
        ++(vlSymsp->__Vcoverage[3921]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U] 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[1U]) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U]));
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[2U]))) {
        ++(vlSymsp->__Vcoverage[3922]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[2U] 
            = ((2U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[2U]) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[2U]));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[2U] 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[2U]))) {
        ++(vlSymsp->__Vcoverage[3923]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[2U] 
            = ((1U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod_full[2U]) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[2U]));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
        = (((QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[1U])) 
            << 0x20U) | (QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_full[0U])));
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3395]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3396]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3397]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3398]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3399]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3400]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3401]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3402]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3403]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3404]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3405]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3406]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3407]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3408]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3409]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3410]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3411]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3412]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3413]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3414]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3415]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3416]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3417]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3418]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3419]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3420]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3421]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3422]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3423]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3424]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3425]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[3426]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT____Vtogcov__id_imm) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__id_imm = vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__id_imm;
    if (((IData)(vlTOPp->bench_top__DOT__in_dram_fetch) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__in_dram_fetch)) {
        ++(vlSymsp->__Vcoverage[632]);
        vlTOPp->bench_top__DOT____Vtogcov__in_dram_fetch 
            = vlTOPp->bench_top__DOT__in_dram_fetch;
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__imem_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__imem_idx))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_idx 
            = ((0x3ffeU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_idx)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__imem_idx)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__imem_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__imem_idx))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_idx 
            = ((0x3ffdU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_idx)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__imem_idx)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__imem_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__imem_idx))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_idx 
            = ((0x3ffbU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_idx)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__imem_idx)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__imem_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__imem_idx))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_idx 
            = ((0x3ff7U & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_idx)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__imem_idx)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__imem_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_idx))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_idx 
            = ((0x3fefU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_idx)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__imem_idx)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__imem_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_idx))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_idx 
            = ((0x3fdfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_idx)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__imem_idx)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__imem_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_idx))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_idx 
            = ((0x3fbfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_idx)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__imem_idx)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__imem_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_idx))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_idx 
            = ((0x3f7fU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_idx)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__imem_idx)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__imem_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_idx))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_idx 
            = ((0x3effU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_idx)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__imem_idx)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__imem_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_idx))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_idx 
            = ((0x3dffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_idx)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__imem_idx)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__imem_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_idx))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_idx 
            = ((0x3bffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_idx)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__imem_idx)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__imem_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_idx))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_idx 
            = ((0x37ffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_idx)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__imem_idx)));
    }
    if ((0x1000U & ((IData)(vlTOPp->bench_top__DOT__imem_idx) 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__imem_idx))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_idx 
            = ((0x2fffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_idx)) 
               | (0x1000U & (IData)(vlTOPp->bench_top__DOT__imem_idx)));
    }
    if ((0x2000U & ((IData)(vlTOPp->bench_top__DOT__imem_idx) 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__imem_idx))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_idx 
            = ((0x1fffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__imem_idx)) 
               | (0x2000U & (IData)(vlTOPp->bench_top__DOT__imem_idx)));
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__dram_fetch_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx 
            = ((0x3ffeU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__dram_fetch_idx)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__dram_fetch_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx 
            = ((0x3ffdU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__dram_fetch_idx)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__dram_fetch_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx 
            = ((0x3ffbU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__dram_fetch_idx)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__dram_fetch_idx) 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx 
            = ((0x3ff7U & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__dram_fetch_idx)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__dram_fetch_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx 
            = ((0x3fefU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__dram_fetch_idx)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__dram_fetch_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx 
            = ((0x3fdfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__dram_fetch_idx)));
    }
    if ((0x40U & ((IData)(vlTOPp->bench_top__DOT__dram_fetch_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx 
            = ((0x3fbfU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx)) 
               | (0x40U & (IData)(vlTOPp->bench_top__DOT__dram_fetch_idx)));
    }
    if ((0x80U & ((IData)(vlTOPp->bench_top__DOT__dram_fetch_idx) 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx 
            = ((0x3f7fU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx)) 
               | (0x80U & (IData)(vlTOPp->bench_top__DOT__dram_fetch_idx)));
    }
    if ((0x100U & ((IData)(vlTOPp->bench_top__DOT__dram_fetch_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx 
            = ((0x3effU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx)) 
               | (0x100U & (IData)(vlTOPp->bench_top__DOT__dram_fetch_idx)));
    }
    if ((0x200U & ((IData)(vlTOPp->bench_top__DOT__dram_fetch_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx 
            = ((0x3dffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx)) 
               | (0x200U & (IData)(vlTOPp->bench_top__DOT__dram_fetch_idx)));
    }
    if ((0x400U & ((IData)(vlTOPp->bench_top__DOT__dram_fetch_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx 
            = ((0x3bffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx)) 
               | (0x400U & (IData)(vlTOPp->bench_top__DOT__dram_fetch_idx)));
    }
    if ((0x800U & ((IData)(vlTOPp->bench_top__DOT__dram_fetch_idx) 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx 
            = ((0x37ffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx)) 
               | (0x800U & (IData)(vlTOPp->bench_top__DOT__dram_fetch_idx)));
    }
    if ((0x1000U & ((IData)(vlTOPp->bench_top__DOT__dram_fetch_idx) 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx 
            = ((0x2fffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx)) 
               | (0x1000U & (IData)(vlTOPp->bench_top__DOT__dram_fetch_idx)));
    }
    if ((0x2000U & ((IData)(vlTOPp->bench_top__DOT__dram_fetch_idx) 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx 
            = ((0x1fffU & (IData)(vlTOPp->bench_top__DOT____Vtogcov__dram_fetch_idx)) 
               | (0x2000U & (IData)(vlTOPp->bench_top__DOT__dram_fetch_idx)));
    }
    vlTOPp->bench_top__DOT__imem_rdata = ((IData)(vlTOPp->bench_top__DOT__in_dram_fetch)
                                           ? vlTOPp->bench_top__DOT__dram
                                          [vlTOPp->bench_top__DOT__dram_fetch_idx]
                                           : vlTOPp->bench_top__DOT__imem
                                          [vlTOPp->bench_top__DOT__imem_idx]);
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__irq_cause))) {
        ++(vlSymsp->__Vcoverage[4728]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__irq_cause 
            = ((0xeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__irq_cause)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_cause)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__irq_cause))) {
        ++(vlSymsp->__Vcoverage[4729]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__irq_cause 
            = ((0xdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__irq_cause)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_cause)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__irq_cause))) {
        ++(vlSymsp->__Vcoverage[4730]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__irq_cause 
            = ((0xbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__irq_cause)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_cause)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__irq_cause))) {
        ++(vlSymsp->__Vcoverage[4731]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__irq_cause 
            = ((7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__irq_cause)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_cause)));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__irq_cause 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_cause;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_req) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__irq_req)) {
        ++(vlSymsp->__Vcoverage[4727]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__irq_req 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_req;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__irq_req = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__irq_req;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__priv_u) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__priv_u)) {
        ++(vlSymsp->__Vcoverage[2291]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__priv_u 
            = vlTOPp->bench_top__DOT__u_core__DOT__priv_u;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_uses_rs2) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_uses_rs2)) {
        ++(vlSymsp->__Vcoverage[1915]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_uses_rs2 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_uses_rs2;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op 
        = vlTOPp->bench_top__DOT__u_core__DOT__d_md_op;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_md_op))) {
        ++(vlSymsp->__Vcoverage[1892]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_md_op 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_md_op)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_md_op))) {
        ++(vlSymsp->__Vcoverage[1893]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_md_op 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_md_op)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_md_op))) {
        ++(vlSymsp->__Vcoverage[1894]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_md_op 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_md_op)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op)));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_reg_we) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_reg_we)) {
        ++(vlSymsp->__Vcoverage[1900]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_reg_we 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_reg_we;
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3648]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3651]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3653]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3656]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3657]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3658]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3659]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3660]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3661]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3655]);
                        }
                    }
                }
            }
        }
    }
    if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    ++(vlSymsp->__Vcoverage[3671]);
                }
            }
        }
    }
    if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                ++(vlSymsp->__Vcoverage[3671]);
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3662]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3647]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3666]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3652]);
                        }
                    }
                }
            }
        }
    }
    if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3670]);
                        }
                    }
                }
            }
        }
    }
    if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            ++(vlSymsp->__Vcoverage[3671]);
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3667]);
                        }
                    }
                }
            }
        }
    }
    if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3671]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3654]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3664]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3649]);
                        }
                    }
                }
            }
        }
    }
    if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3669]);
                        }
                    }
                }
            }
        }
    }
    if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3668]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3650]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3665]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3663]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3646]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3645]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3644]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3643]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3642]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3641]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3640]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3639]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3638]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op))) {
                            ++(vlSymsp->__Vcoverage[3637]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)))) {
                            ++(vlSymsp->__Vcoverage[3636]);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_alu__DOT__op 
        = vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op))) {
        ++(vlSymsp->__Vcoverage[1883]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op 
            = ((0x3eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op))) {
        ++(vlSymsp->__Vcoverage[1884]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op 
            = ((0x3dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op))) {
        ++(vlSymsp->__Vcoverage[1885]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op 
            = ((0x3bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op))) {
        ++(vlSymsp->__Vcoverage[1886]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op 
            = ((0x37U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op))) {
        ++(vlSymsp->__Vcoverage[1887]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op 
            = ((0x2fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)));
    }
    if ((0x20U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op))) {
        ++(vlSymsp->__Vcoverage[1888]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op 
            = ((0x1fU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_alu_op)) 
               | (0x20U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_alu_op)));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_use_imm) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_use_imm)) {
        ++(vlSymsp->__Vcoverage[1899]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_use_imm 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_use_imm;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_use_pc) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_use_pc)) {
        ++(vlSymsp->__Vcoverage[1898]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_use_pc 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_use_pc;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_branch) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_branch)) {
        ++(vlSymsp->__Vcoverage[1906]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_branch 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_is_branch;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_jalr) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_jalr)) {
        ++(vlSymsp->__Vcoverage[1908]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_jalr 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_is_jalr;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_jal) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_jal)) {
        ++(vlSymsp->__Vcoverage[1907]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_jal 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_is_jal;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_md) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_md)) {
        ++(vlSymsp->__Vcoverage[1909]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_md 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_is_md;
    }
    vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_md__start 
        = ((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
           & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_md));
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op))) {
                ++(vlSymsp->__Vcoverage[3675]);
            }
        }
    }
    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op)))) {
                ++(vlSymsp->__Vcoverage[3678]);
            }
        }
    }
    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op))) {
                ++(vlSymsp->__Vcoverage[3679]);
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op)))) {
                ++(vlSymsp->__Vcoverage[3676]);
            }
        }
    }
    if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op))) {
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op))) {
            ++(vlSymsp->__Vcoverage[3680]);
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op))) {
            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op))) {
                ++(vlSymsp->__Vcoverage[3677]);
            }
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op)))) {
                ++(vlSymsp->__Vcoverage[3674]);
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_br__DOT__br_op 
        = vlTOPp->bench_top__DOT__u_core__DOT__d_br_op;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_br_op))) {
        ++(vlSymsp->__Vcoverage[1889]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_br_op 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_br_op)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_br_op))) {
        ++(vlSymsp->__Vcoverage[1890]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_br_op 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_br_op)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_br_op))) {
        ++(vlSymsp->__Vcoverage[1891]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_br_op 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_br_op)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_br_op)));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_ecall) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_ecall)) {
        ++(vlSymsp->__Vcoverage[1911]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_ecall 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_is_ecall;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_ebreak) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_ebreak)) {
        ++(vlSymsp->__Vcoverage[1912]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_ebreak 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_is_ebreak;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug 
        = ((((1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_ebreak)) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_ebreakm)) 
           & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode)));
    if ((1U & (~ ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
                  | (5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))))) {
        if ((3U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
            if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel))) {
                if ((3U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel))) {
                    if ((4U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel))) {
                        ++(vlSymsp->__Vcoverage[2873]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
                  | (5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))))) {
        if ((3U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
            if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel))) {
                if ((3U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel))) {
                    if ((4U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel))) {
                        ++(vlSymsp->__Vcoverage[2872]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
                  | (5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))))) {
        if ((3U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
            if ((2U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel))) {
                if ((3U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel))) {
                    ++(vlSymsp->__Vcoverage[2871]);
                }
            }
        }
    }
    if ((1U & (~ ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
                  | (5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))))) {
        if ((3U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
            if ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel))) {
                ++(vlSymsp->__Vcoverage[2870]);
            }
        }
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_wb_sel))) {
        ++(vlSymsp->__Vcoverage[1895]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_wb_sel 
            = ((6U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_wb_sel)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_wb_sel))) {
        ++(vlSymsp->__Vcoverage[1896]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_wb_sel 
            = ((5U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_wb_sel)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_wb_sel))) {
        ++(vlSymsp->__Vcoverage[1897]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_wb_sel 
            = ((3U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_wb_sel)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_wb_sel)));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_illegal) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_illegal)) {
        ++(vlSymsp->__Vcoverage[1914]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_illegal 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_illegal;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_unsigned) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_mem_unsigned)) {
        ++(vlSymsp->__Vcoverage[1903]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_mem_unsigned 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_mem_unsigned;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_mret) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_mret)) {
        ++(vlSymsp->__Vcoverage[1913]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_mret 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_is_mret;
    }
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_width) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_mem_width))) {
        ++(vlSymsp->__Vcoverage[1904]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_mem_width 
            = ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_mem_width)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_width)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_width) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_mem_width))) {
        ++(vlSymsp->__Vcoverage[1905]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_mem_width 
            = ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_mem_width)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_width)));
    }
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
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_csr) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_csr)) {
        ++(vlSymsp->__Vcoverage[1910]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_is_csr 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_is_csr;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__priv_fault 
        = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__priv_u) 
           & (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_csr) 
               & (0U != (3U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                               >> 8U)))) | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_mret)));
    vlTOPp->bench_top__DOT__u_core__DOT__csr_do_write 
        = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_csr) 
           & (~ ((1U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_fn)) 
                 & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_imm_mode)
                     ? (0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1))
                     : (0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs1))))));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_mem_re)) {
        ++(vlSymsp->__Vcoverage[1901]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_mem_re 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re;
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.do_r 
        = vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_mem_we)) {
        ++(vlSymsp->__Vcoverage[1902]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__d_mem_we 
            = vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we;
    }
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_ls.do_w 
        = vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we;
    if (((IData)(vlTOPp->bench_top__DOT__core_rst) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__core_rst)) {
        ++(vlSymsp->__Vcoverage[559]);
        vlTOPp->bench_top__DOT____Vtogcov__core_rst 
            = vlTOPp->bench_top__DOT__core_rst;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__rst = vlTOPp->bench_top__DOT__core_rst;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_gpr_we) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_gpr_we)) {
        ++(vlSymsp->__Vcoverage[1837]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_gpr_we 
            = vlTOPp->bench_top__DOT__u_core__DOT__dbg_gpr_we;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__rf_wa = (0x1fU 
                                                  & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_gpr_we)
                                                      ? (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno)
                                                      : (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rd)));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_csr_we) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_csr_we)) {
        ++(vlSymsp->__Vcoverage[2439]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_csr_we 
            = vlTOPp->bench_top__DOT__u_core__DOT__dbg_csr_we;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__is_pmpcfg)) {
        ++(vlSymsp->__Vcoverage[5255]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__is_pmpcfg 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg;
    }
    if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr) {
        ++(vlSymsp->__Vcoverage[5444]);
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
            ++(vlSymsp->__Vcoverage[5443]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        ++(vlSymsp->__Vcoverage[5440]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                ++(vlSymsp->__Vcoverage[5440]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5429]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                ++(vlSymsp->__Vcoverage[5440]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((0x20U 
                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            ++(vlSymsp->__Vcoverage[5440]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        ++(vlSymsp->__Vcoverage[5440]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5432]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    ++(vlSymsp->__Vcoverage[5440]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                ++(vlSymsp->__Vcoverage[5440]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((0x20U 
                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            ++(vlSymsp->__Vcoverage[5440]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        ++(vlSymsp->__Vcoverage[5440]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5433]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5440]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5435]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5440]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        ++(vlSymsp->__Vcoverage[5440]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    ++(vlSymsp->__Vcoverage[5440]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                ++(vlSymsp->__Vcoverage[5440]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5440]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5431]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5440]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5440]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        ++(vlSymsp->__Vcoverage[5440]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    ++(vlSymsp->__Vcoverage[5440]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        ++(vlSymsp->__Vcoverage[5440]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    ++(vlSymsp->__Vcoverage[5440]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((0x20U 
                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            ++(vlSymsp->__Vcoverage[5440]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5440]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        ++(vlSymsp->__Vcoverage[5440]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5436]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5434]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                ++(vlSymsp->__Vcoverage[5440]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                ++(vlSymsp->__Vcoverage[5441]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            ++(vlSymsp->__Vcoverage[5440]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        ++(vlSymsp->__Vcoverage[5440]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    ++(vlSymsp->__Vcoverage[5440]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((0x20U 
                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            ++(vlSymsp->__Vcoverage[5440]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5440]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5440]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            ++(vlSymsp->__Vcoverage[5440]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5439]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5440]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5440]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        ++(vlSymsp->__Vcoverage[5440]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5430]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    ++(vlSymsp->__Vcoverage[5440]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5438]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            ++(vlSymsp->__Vcoverage[5440]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5437]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5440]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                ++(vlSymsp->__Vcoverage[5440]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    ++(vlSymsp->__Vcoverage[5440]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                ++(vlSymsp->__Vcoverage[5440]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x20U 
                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            ++(vlSymsp->__Vcoverage[5440]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                ++(vlSymsp->__Vcoverage[5440]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        ++(vlSymsp->__Vcoverage[5440]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                ++(vlSymsp->__Vcoverage[5440]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((0x80U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    ++(vlSymsp->__Vcoverage[5440]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((0x800U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                    if ((0x400U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((0x20U 
                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            ++(vlSymsp->__Vcoverage[5440]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5440]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5428]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5427]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5426]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5425]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5424]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((0x20U 
                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            ++(vlSymsp->__Vcoverage[5440]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                ++(vlSymsp->__Vcoverage[5440]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    ++(vlSymsp->__Vcoverage[5440]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            ++(vlSymsp->__Vcoverage[5440]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5423]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5422]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            ++(vlSymsp->__Vcoverage[5440]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5421]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((0x100U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                                                ++(vlSymsp->__Vcoverage[5420]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                          >> 8U)))) {
                                ++(vlSymsp->__Vcoverage[5440]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                  >> 0xaU)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                      >> 9U)))) {
                            ++(vlSymsp->__Vcoverage[5440]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                ++(vlSymsp->__Vcoverage[5442]);
            }
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__is_pmpaddr)) {
        ++(vlSymsp->__Vcoverage[5254]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__is_pmpaddr 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr;
    }
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
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod)))) {
        ++(vlSymsp->__Vcoverage[3924]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3925]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3926]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3927]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3928]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3929]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3930]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3931]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3932]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3933]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3934]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3935]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3936]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3937]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3938]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3939]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3940]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3941]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3942]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3943]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3944]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3945]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3946]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3947]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3948]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffeffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3949]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3950]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffffbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3951]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffff7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3952]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffefffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3953]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffdfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3954]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffffbfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3955]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffff7fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3956]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffeffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3957]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffdffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x22U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3958]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffffbffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x23U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3959]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffff7ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x24U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3960]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffefffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x25U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3961]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffdfffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x26U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3962]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffffbfffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x27U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3963]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffff7fffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x28U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3964]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffeffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x29U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3965]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffdffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x2aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3966]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffffbffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x2bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3967]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffff7ffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x2cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3968]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffefffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x2dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3969]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffdfffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x2eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3970]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffffbfffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x2fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3971]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffff7fffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x30U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3972]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffeffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x31U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3973]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffdffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x32U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3974]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfffbffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x33U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3975]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfff7ffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x34U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3976]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffefffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x35U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3977]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffdfffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x36U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3978]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xffbfffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x37U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3979]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xff7fffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x38U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3980]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfeffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x39U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3981]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfdffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x3aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3982]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xfbffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x3bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3983]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xf7ffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x3cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3984]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xefffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x3dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3985]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xdfffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x3eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3986]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0xbfffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                        >> 0x3fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3987]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod 
            = ((0x7fffffffffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__prod) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo 
        = (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod);
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi 
        = (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod 
                   >> 0x20U));
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__id_imm 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__id_imm) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__id_imm));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__imem_rdata 
        = vlTOPp->bench_top__DOT__imem_rdata;
    if ((1U & (vlTOPp->bench_top__DOT__imem_rdata ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (1U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__imem_rdata ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (2U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__imem_rdata ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (4U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__imem_rdata ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (8U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__imem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x10U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__imem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x20U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__imem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x40U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__imem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x80U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__imem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x100U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__imem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x200U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__imem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x400U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__imem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x800U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__imem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__imem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__imem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__imem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__imem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__imem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__imem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__imem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__imem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__imem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__imem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__imem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__imem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__imem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__imem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__imem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__imem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__imem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__imem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__imem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__imem_rdata))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlTOPp->bench_top__DOT____Vtogcov__imem_rdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__imem_rdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__imem_rdata));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__fetch_half 
        = (0xffffU & ((2U & vlTOPp->bench_top__DOT__u_core__DOT__pc)
                       ? (vlTOPp->bench_top__DOT__imem_rdata 
                          >> 0x10U) : vlTOPp->bench_top__DOT__imem_rdata));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__irq_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__irq_cause))) {
        ++(vlSymsp->__Vcoverage[2429]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__irq_cause 
            = ((0xeU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__irq_cause)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__irq_cause)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__irq_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__irq_cause))) {
        ++(vlSymsp->__Vcoverage[2430]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__irq_cause 
            = ((0xdU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__irq_cause)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__irq_cause)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__irq_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__irq_cause))) {
        ++(vlSymsp->__Vcoverage[2431]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__irq_cause 
            = ((0xbU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__irq_cause)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__irq_cause)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__irq_cause) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__irq_cause))) {
        ++(vlSymsp->__Vcoverage[2432]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__irq_cause 
            = ((7U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__irq_cause)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__irq_cause)));
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__irq_req) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__irq_req)) {
        ++(vlSymsp->__Vcoverage[2428]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__irq_req 
            = vlTOPp->bench_top__DOT__u_core__DOT__irq_req;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__start 
        = vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_md__start;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_md__start) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__start)) {
        ++(vlSymsp->__Vcoverage[3682]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__start 
            = vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_md__start;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ebreak_to_debug)) {
        ++(vlSymsp->__Vcoverage[2152]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ebreak_to_debug 
            = vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug;
    }
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
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__priv_fault) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__priv_fault)) {
        ++(vlSymsp->__Vcoverage[2292]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__priv_fault 
            = vlTOPp->bench_top__DOT__u_core__DOT__priv_fault;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_do_write) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_do_write)) {
        ++(vlSymsp->__Vcoverage[2151]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_do_write 
            = vlTOPp->bench_top__DOT__u_core__DOT__csr_do_write;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__csr_ro_fault 
        = (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_csr) 
            & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_do_write)) 
           & (3U == (3U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12) 
                           >> 0xaU))));
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rst 
        = vlTOPp->bench_top__DOT__u_core__DOT__rst;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rst 
        = vlTOPp->bench_top__DOT__u_core__DOT__rst;
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__wa 
        = vlTOPp->bench_top__DOT__u_core__DOT__rf_wa;
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa))) {
        ++(vlSymsp->__Vcoverage[1843]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa 
            = ((0x1eU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa)) 
               | (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)));
    }
    if ((2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa))) {
        ++(vlSymsp->__Vcoverage[1844]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa 
            = ((0x1dU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa)) 
               | (2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)));
    }
    if ((4U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa))) {
        ++(vlSymsp->__Vcoverage[1845]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa 
            = ((0x1bU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa)) 
               | (4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)));
    }
    if ((8U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa) 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa))) {
        ++(vlSymsp->__Vcoverage[1846]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa 
            = ((0x17U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa)) 
               | (8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)));
    }
    if ((0x10U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa) 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa))) {
        ++(vlSymsp->__Vcoverage[1847]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa 
            = ((0xfU & (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__rf_wa)) 
               | (0x10U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)));
    }
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
}
