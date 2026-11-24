// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench_top.h for the primary calling header

#include "Vbench_top.h"
#include "Vbench_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vbench_top::_sequent__TOP__26(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_sequent__TOP__26\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                        if ((0x1eU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    if ((0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__8__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ecc_cerr 
        = ((((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1)) 
             & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__fwd1))) 
            & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                       >> 0x20U))) | (((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2)) 
                                       & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__fwd2))) 
                                      & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d2 
                                                 >> 0x20U))));
    vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ecc_uerr 
        = ((((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_ra1)) 
             & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__fwd1))) 
            & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                       >> 0x21U))) | (((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rs2)) 
                                       & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__fwd2))) 
                                      & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d2 
                                                 >> 0x21U))));
    if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1) 
               ^ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1)))) {
        ++(vlSymsp->__Vcoverage[5593]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3fffffffeULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | (IData)((IData)((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1)))));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 1U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5594]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3fffffffdULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 2U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5595]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3fffffffbULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 3U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5596]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3fffffff7ULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 4U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5597]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3ffffffefULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 5U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5598]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3ffffffdfULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 6U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5599]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3ffffffbfULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 7U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5600]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3ffffff7fULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 8U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5601]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3fffffeffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 9U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5602]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3fffffdffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0xaU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5603]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3fffffbffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0xbU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5604]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3fffff7ffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0xcU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5605]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3ffffefffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0xdU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5606]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3ffffdfffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0xeU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5607]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3ffffbfffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0xfU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5608]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3ffff7fffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x10U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5609]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3fffeffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x11U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5610]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3fffdffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x12U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5611]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3fffbffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x13U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5612]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3fff7ffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x14U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5613]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3ffefffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x15U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5614]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3ffdfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x16U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5615]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3ffbfffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x17U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5616]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3ff7fffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x18U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5617]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3feffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x19U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5618]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3fdffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x1aU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5619]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3fbffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x1bU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5620]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3f7ffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x1cU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5621]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3efffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x1dU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5622]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3dfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x1eU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5623]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x3bfffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x1fU)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5624]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x37fffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x20U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5625]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x2ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                        >> 0x21U)) ^ (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5626]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1 
            = ((0x1ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__d1) 
               | ((QData)((IData)((1U & (IData)((vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__d1 
                                                 >> 0x21U))))) 
                  << 0x21U));
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
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_q) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tdi_q)) {
        ++(vlSymsp->__Vcoverage[5790]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tdi_q 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_q;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tck_rise)) {
        ++(vlSymsp->__Vcoverage[5788]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tck_rise 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise;
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
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ecc_cerr) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__ecc_cerr)) {
        ++(vlSymsp->__Vcoverage[5546]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__ecc_cerr 
            = vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ecc_cerr;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__ecc_cerr = vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ecc_cerr;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ecc_uerr) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__ecc_uerr)) {
        ++(vlSymsp->__Vcoverage[5547]);
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vtogcov__ecc_uerr 
            = vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ecc_uerr;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__ecc_uerr = vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__ecc_uerr;
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4459]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4460]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4461]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4462]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4463]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4464]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4465]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4466]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4467]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4468]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4469]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4470]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4471]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4472]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4473]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4474]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4475]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4476]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4477]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4478]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4479]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4480]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4481]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4482]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4483]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4484]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4485]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4486]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4487]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4488]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4489]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[4490]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT____Vtogcov__csr_rdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata));
    }
    vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__csr_rdata;
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
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__illegal_any) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__illegal_any)) {
        ++(vlSymsp->__Vcoverage[2294]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__illegal_any 
            = vlTOPp->bench_top__DOT__u_core__DOT__illegal_any;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tdo) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tdo)) {
        ++(vlSymsp->__Vcoverage[5664]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__tdo 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__tdo;
    }
    vlTOPp->bench_top__DOT__tdo = vlTOPp->bench_top__DOT__u_dbg__DOT__tdo;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__ecc_cerr) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ecc_cerr)) {
        ++(vlSymsp->__Vcoverage[1881]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ecc_cerr 
            = vlTOPp->bench_top__DOT__u_core__DOT__ecc_cerr;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__ecc_uerr) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ecc_uerr)) {
        ++(vlSymsp->__Vcoverage[1882]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__ecc_uerr 
            = vlTOPp->bench_top__DOT__u_core__DOT__ecc_uerr;
    }
    if ((1U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (1U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (2U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (4U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
               ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (8U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x10U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x20U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x40U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                  ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x80U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x100U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x200U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x400U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                   ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x800U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                    ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                     ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                      ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                       ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata 
                        ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__csr_rdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__u_core__DOT__csr_rdata));
    }
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
    vlTOPp->tdo = vlTOPp->bench_top__DOT__tdo;
    if (((IData)(vlTOPp->bench_top__DOT__tdo) ^ vlTOPp->bench_top__DOT____Vtogcov__tdo)) {
        ++(vlSymsp->__Vcoverage[5]);
        vlTOPp->bench_top__DOT____Vtogcov__tdo = vlTOPp->bench_top__DOT__tdo;
    }
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
}
