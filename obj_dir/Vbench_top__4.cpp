// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench_top.h for the primary calling header

#include "Vbench_top.h"
#include "Vbench_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vbench_top::_sequent__TOP__13(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_sequent__TOP__13\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__Vfuncout;
    // Body
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo 
        = (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret);
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi 
        = (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                   >> 0x20U));
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((8U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((0x11U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rstat = 0U;
                            } else {
                                if ((2U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                    vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rstat = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
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
    if (vlTOPp->rst) {
        vlTOPp->bench_top__DOT__u_dbg__DOT__dmactive = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset_r = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__haltreq_r = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__resumeack = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__havereset = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__abs_busy = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__data0 = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_resumereq = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_valid = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__dbg_ar_write = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_csr = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_valid = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_write = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbaddress0 = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbdata0 = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess = 2U;
        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbautoincrement = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbreadonaddr = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadondata = 0U;
        vlTOPp->bench_top__DOT__u_dbg__DOT__sberror = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__eng = 0U;
    } else {
        vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_resumereq = 0U;
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((8U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                        if ((0x11U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                            if ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_op))) {
                                vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a 
                                    = vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_addr;
                                __Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__Vfuncout 
                                    = ((0x40U & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                        ? 0U : ((0x20U 
                                                 & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                      ? 0U
                                                      : vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                      ? vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0
                                                      : vlTOPp->bench_top__DOT__u_dbg__DOT__sbcs_val)))
                                                   : 0U)
                                                  : 0U)
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                      ? 0U
                                                      : vlTOPp->bench_top__DOT__u_dbg__DOT__abstractcs_val)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                      ? vlTOPp->bench_top__DOT__u_dbg__DOT__dmstatus_val
                                                      : vlTOPp->bench_top__DOT__u_dbg__DOT__dmcontrol_val))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__a))
                                                      ? 0U
                                                      : vlTOPp->bench_top__DOT__u_dbg__DOT__data0))
                                                    : 0U)))));
                                vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata 
                                    = __Vfunc_bench_top__DOT__u_dbg__DOT__dm_read__14__Vfuncout;
                            }
                        }
                    }
                }
            }
        }
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbdata0 
                                            = vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data;
                                        vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_valid = 1U;
                                        vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_write = 1U;
                                        vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                                            = vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0;
                                        vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_wdata 
                                            = vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data;
                                        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__eng = 4U;
                                    }
                                }
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbaddress0 
                                            = vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data;
                                        if (vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadonaddr) {
                                            vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_valid = 1U;
                                            vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_write = 0U;
                                            vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_addr 
                                                = vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data;
                                            vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__eng = 3U;
                                        }
                                    } else {
                                        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbreadonaddr 
                                            = (1U & 
                                               (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                                >> 0x14U));
                                        vlTOPp->bench_top__DOT__u_dbg__DOT__sbaccess 
                                            = (7U & 
                                               (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                                >> 0x11U));
                                        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbautoincrement 
                                            = (1U & 
                                               (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                                >> 0x10U));
                                        vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadondata 
                                            = (1U & 
                                               (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                                >> 0xfU));
                                        if ((0U != 
                                             (7U & 
                                              (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                               >> 0xcU)))) {
                                            vlTOPp->bench_top__DOT__u_dbg__DOT__sberror = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy)))) {
                                            vlTOPp->__Vtask_bench_top__DOT__u_dbg__DOT__start_access_reg__15__cmd 
                                                = vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data;
                                            if ((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlTOPp->__Vtask_bench_top__DOT__u_dbg__DOT__start_access_reg__15__cmd 
                                                     >> 0x18U)))) {
                                                vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr = 2U;
                                            } else {
                                                if (
                                                    (0x20000U 
                                                     & vlTOPp->__Vtask_bench_top__DOT__u_dbg__DOT__start_access_reg__15__cmd)) {
                                                    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__abs_busy = 1U;
                                                    vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_regno 
                                                        = 
                                                        (0xfffU 
                                                         & vlTOPp->__Vtask_bench_top__DOT__u_dbg__DOT__start_access_reg__15__cmd);
                                                    vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_wdata 
                                                        = vlTOPp->bench_top__DOT__u_dbg__DOT__data0;
                                                    vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_valid = 1U;
                                                    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__eng = 2U;
                                                    vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_csr 
                                                        = 
                                                        (0U 
                                                         == 
                                                         (0xfU 
                                                          & (vlTOPp->__Vtask_bench_top__DOT__u_dbg__DOT__start_access_reg__15__cmd 
                                                             >> 0xcU)));
                                                    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__dbg_ar_write 
                                                        = 
                                                        (1U 
                                                         & (vlTOPp->__Vtask_bench_top__DOT__u_dbg__DOT__start_access_reg__15__cmd 
                                                            >> 0x10U));
                                                }
                                            }
                                        }
                                    } else {
                                        if ((0x100U 
                                             & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data)) {
                                            vlTOPp->bench_top__DOT__u_dbg__DOT__cmderr = 0U;
                                        }
                                    }
                                }
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        vlTOPp->bench_top__DOT__u_dbg__DOT__dmactive 
                                            = (1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data);
                                        if ((1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data)) {
                                            vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset_r 
                                                = (1U 
                                                   & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                                      >> 1U));
                                            vlTOPp->bench_top__DOT__u_dbg__DOT__haltreq_r 
                                                = (1U 
                                                   & (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                                      >> 0x1fU));
                                            if (((vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                                  >> 0x1eU) 
                                                 & (IData)(vlTOPp->bench_top__DOT__dbg_halted))) {
                                                vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_resumereq = 1U;
                                                vlTOPp->bench_top__DOT__u_dbg__DOT__resumeack = 1U;
                                            }
                                            if ((0x10000000U 
                                                 & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data)) {
                                                vlTOPp->bench_top__DOT__u_dbg__DOT__havereset = 0U;
                                            }
                                        } else {
                                            vlTOPp->bench_top__DOT__u_dbg__DOT__haltreq_r = 0U;
                                            vlTOPp->bench_top__DOT__u_dbg__DOT__ndmreset_r = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__data0 
                                            = vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((2U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_valid = 1U;
            if (vlTOPp->bench_top__DOT__dbg_ar_done) {
                vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_valid = 0U;
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_write)))) {
                    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__data0 
                        = vlTOPp->bench_top__DOT__dbg_ar_rdata;
                }
                vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__abs_busy = 0U;
                vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__eng = 0U;
            }
        } else {
            if ((3U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_valid = 0U;
                if (vlTOPp->bench_top__DOT__dm_mem_ready) {
                    if (vlTOPp->bench_top__DOT__u_dbg__DOT__sbautoincrement) {
                        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbaddress0 
                            = ((IData)(4U) + vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0);
                    }
                    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbdata0 
                        = vlTOPp->bench_top__DOT__dm_mem_rdata;
                    vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__eng = 0U;
                }
            } else {
                if ((4U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                    vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_valid = 0U;
                    if (vlTOPp->bench_top__DOT__dm_mem_ready) {
                        if (vlTOPp->bench_top__DOT__u_dbg__DOT__sbautoincrement) {
                            vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbaddress0 
                                = ((IData)(4U) + vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0);
                        }
                        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__eng = 0U;
                    }
                }
            }
        }
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__glob_ie 
        = (1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                 >> 3U));
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv_o 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__fetch_m_o 
        = (3U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__data_m_o 
        = ((0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus)
            ? (3U == (3U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                            >> 0xbU))) : (3U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv)));
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb 
        = (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                 >> 2U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mmwp_o 
        = (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                 >> 1U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mml_o 
        = (1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg));
    if (((IData)(vlTOPp->bench_top__DOT__tohost_we_r) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_we_r)) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_we_r 
            = vlTOPp->bench_top__DOT__tohost_we_r;
    }
    vlTOPp->bench_top__DOT__tohost_we = vlTOPp->bench_top__DOT__tohost_we_r;
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
    vlTOPp->bench_top__DOT__tohost = vlTOPp->bench_top__DOT__tohost_r;
    if (((IData)(vlTOPp->bench_top__DOT__mem_stall_q) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__mem_stall_q)) {
        ++(vlSymsp->__Vcoverage[552]);
        vlTOPp->bench_top__DOT____Vtogcov__mem_stall_q 
            = vlTOPp->bench_top__DOT__mem_stall_q;
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
    vlTOPp->bench_top__DOT__mtime_lo = (IData)(vlTOPp->bench_top__DOT__mtime);
    vlTOPp->bench_top__DOT__mtime_hi = (IData)((vlTOPp->bench_top__DOT__mtime 
                                                >> 0x20U));
    if (((IData)(vlTOPp->bench_top__DOT__msip) ^ vlTOPp->bench_top__DOT____Vtogcov__msip)) {
        ++(vlSymsp->__Vcoverage[366]);
        vlTOPp->bench_top__DOT____Vtogcov__msip = vlTOPp->bench_top__DOT__msip;
    }
    vlTOPp->bench_top__DOT__irq_soft_w = vlTOPp->bench_top__DOT__msip;
    vlTOPp->bench_top__DOT__irq_ext_w = ((IData)(vlTOPp->bench_top__DOT__msip) 
                                         & (IData)(
                                                   (vlTOPp->bench_top__DOT__mtime 
                                                    >> 1U)));
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
    vlTOPp->bench_top__DOT__irq_timer_w = (vlTOPp->bench_top__DOT__mtime 
                                           >= vlTOPp->bench_top__DOT__mtimecmp);
    vlTOPp->bench_top__DOT__mtimecmp_lo = (IData)(vlTOPp->bench_top__DOT__mtimecmp);
    vlTOPp->bench_top__DOT__mtimecmp_hi = (IData)((vlTOPp->bench_top__DOT__mtimecmp 
                                                   >> 0x20U));
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_seen) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__step_seen)) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__step_seen 
            = vlTOPp->bench_top__DOT__u_core__DOT__step_seen;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_pending) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__step_pending)) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__step_pending 
            = vlTOPp->bench_top__DOT__u_core__DOT__step_pending;
    }
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
    vlTOPp->bench_top__DOT__u_core__DOT__retire_pc 
        = vlTOPp->bench_top__DOT__u_core__DOT__pc;
    vlSymsp->TOP__bench_top__DOT__u_core__DOT__g_pmp__DOT__u_pmp_if.addr 
        = vlTOPp->bench_top__DOT__u_core__DOT__pc;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_mode)) {
        ++(vlSymsp->__Vcoverage[1311]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_mode 
            = vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode;
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
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->bench_top__DOT__u_core__DOT__dcsr_step = 0U;
    } else {
        if (vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) {
            if (((IData)(vlTOPp->bench_top__DOT__dbg_ar_write) 
                 & (IData)(vlTOPp->bench_top__DOT__dbg_ar_csr))) {
                if ((0x7b0U == (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                    vlTOPp->bench_top__DOT__u_core__DOT__dcsr_step 
                        = (1U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                                 >> 2U));
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_imm__DOT__instr 
        = vlTOPp->bench_top__DOT__u_core__DOT__instr;
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__instr 
        = vlTOPp->bench_top__DOT__u_core__DOT__instr;
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
    vlTOPp->bench_top__DOT__u_core__DOT__rd = (0x1fU 
                                               & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                                  >> 7U));
    vlTOPp->bench_top__DOT__u_core__DOT__retire_instr 
        = vlTOPp->bench_top__DOT__u_core__DOT__instr;
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__shamt_i 
        = (0x1fU & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                    >> 0x14U));
    vlTOPp->bench_top__DOT__u_core__DOT__rs1 = (0x1fU 
                                                & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                                   >> 0xfU));
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct7 
        = (0x7fU & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                    >> 0x19U));
    vlTOPp->bench_top__DOT__u_core__DOT__funct3 = (7U 
                                                   & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                                      >> 0xcU));
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__sys_imm12 
        = (0xfffU & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                     >> 0x14U));
    vlTOPp->bench_top__DOT__u_core__DOT__sys_imm12 
        = (0xfffU & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                     >> 0x14U));
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__funct3 
        = (7U & (vlTOPp->bench_top__DOT__u_core__DOT__instr 
                 >> 0xcU));
    vlTOPp->bench_top__DOT__u_core__DOT__u_dec__DOT__opcode 
        = (0x7fU & vlTOPp->bench_top__DOT__u_core__DOT__instr);
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
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_halted 
        = (7U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state));
    vlTOPp->bench_top__DOT__u_core__DOT__dmem_re = 
        ((2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)) 
         | (5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)));
    vlTOPp->bench_top__DOT__u_core__DOT__imem_addr 
        = ((4U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))
            ? ((IData)(4U) + (0xfffffffcU & vlTOPp->bench_top__DOT__u_core__DOT__pc))
            : vlTOPp->bench_top__DOT__u_core__DOT__pc);
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tms_q)) {
        ++(vlSymsp->__Vcoverage[5789]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tms_q 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__busy) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__busy)) {
        ++(vlSymsp->__Vcoverage[3683]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__busy 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__busy;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__md_busy = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__busy;
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
    vlTOPp->bench_top__DOT__dbg_ar_done = vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_done;
    vlTOPp->bench_top__DOT__u_dbg__DOT__eng = vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__eng;
    vlTOPp->bench_top__DOT__u_dbg__DOT__data0 = vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__data0;
    vlTOPp->bench_top__DOT__u_dbg__DOT__sbaddress0 
        = vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbaddress0;
    vlTOPp->bench_top__DOT__u_dbg__DOT__sbdata0 = vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbdata0;
    vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy = vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__abs_busy;
    vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadonaddr 
        = vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbreadonaddr;
    vlTOPp->bench_top__DOT__u_dbg__DOT__sbautoincrement 
        = vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__sbautoincrement;
    vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_write 
        = vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__dbg_ar_write;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__glob_ie) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__glob_ie)) {
        ++(vlSymsp->__Vcoverage[5419]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__glob_ie 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__glob_ie;
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
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__fetch_m_o) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__fetch_m_o)) {
        ++(vlSymsp->__Vcoverage[4493]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__fetch_m_o 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__fetch_m_o;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__fetch_m = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__fetch_m_o;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__data_m_o) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__data_m_o)) {
        ++(vlSymsp->__Vcoverage[4494]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__data_m_o 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__data_m_o;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__data_m = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__data_m_o;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__any_locked)) {
        ++(vlSymsp->__Vcoverage[5251]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__any_locked 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked;
    }
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
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__rlb)) {
        ++(vlSymsp->__Vcoverage[5217]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__rlb 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb;
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
    vlTOPp->tohost_we = vlTOPp->bench_top__DOT__tohost_we;
    if (((IData)(vlTOPp->bench_top__DOT__tohost_we) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__tohost_we)) {
        ++(vlSymsp->__Vcoverage[38]);
        vlTOPp->bench_top__DOT____Vtogcov__tohost_we 
            = vlTOPp->bench_top__DOT__tohost_we;
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
    if (((IData)(vlTOPp->bench_top__DOT__irq_soft_w) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__irq_soft_w)) {
        ++(vlSymsp->__Vcoverage[368]);
        vlTOPp->bench_top__DOT____Vtogcov__irq_soft_w 
            = vlTOPp->bench_top__DOT__irq_soft_w;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__irq_soft = vlTOPp->bench_top__DOT__irq_soft_w;
    if (((IData)(vlTOPp->bench_top__DOT__irq_ext_w) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__irq_ext_w)) {
        ++(vlSymsp->__Vcoverage[631]);
        vlTOPp->bench_top__DOT____Vtogcov__irq_ext_w 
            = vlTOPp->bench_top__DOT__irq_ext_w;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__irq_ext = vlTOPp->bench_top__DOT__irq_ext_w;
    if (((IData)(vlTOPp->bench_top__DOT__irq_timer_w) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__irq_timer_w)) {
        ++(vlSymsp->__Vcoverage[367]);
        vlTOPp->bench_top__DOT____Vtogcov__irq_timer_w 
            = vlTOPp->bench_top__DOT__irq_timer_w;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__irq_timer 
        = vlTOPp->bench_top__DOT__irq_timer_w;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mip 
        = ((((IData)(vlTOPp->bench_top__DOT__irq_ext_w) 
             << 0xbU) | ((IData)(vlTOPp->bench_top__DOT__irq_timer_w) 
                         << 7U)) | ((IData)(vlTOPp->bench_top__DOT__irq_soft_w) 
                                    << 3U));
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
}
