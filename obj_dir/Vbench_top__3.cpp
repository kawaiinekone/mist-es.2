// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench_top.h for the primary calling header

#include "Vbench_top.h"
#include "Vbench_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vbench_top::_sequent__TOP__12(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_sequent__TOP__12\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout;
    CData/*7:0*/ __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c;
    CData/*6:0*/ __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__Vfuncout;
    CData/*5:0*/ __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c;
    CData/*4:0*/ __Vdlyvdim0__bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs__v0;
    IData/*31:0*/ __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__Vfuncout;
    IData/*31:0*/ __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__v;
    IData/*31:0*/ __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__old;
    IData/*31:0*/ __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d;
    QData/*38:0*/ __Vdlyvval__bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs__v0;
    // Body
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                    ++(vlSymsp->__Vcoverage[6328]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        ++(vlSymsp->__Vcoverage[6326]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                    ++(vlSymsp->__Vcoverage[6328]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        ++(vlSymsp->__Vcoverage[6328]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                            ++(vlSymsp->__Vcoverage[6328]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        ++(vlSymsp->__Vcoverage[6328]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
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
                                        ++(vlSymsp->__Vcoverage[6327]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((0x40U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                ++(vlSymsp->__Vcoverage[6328]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        ++(vlSymsp->__Vcoverage[6323]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            ++(vlSymsp->__Vcoverage[6328]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                  >> 4U)))) {
                        ++(vlSymsp->__Vcoverage[6328]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        ++(vlSymsp->__Vcoverage[6320]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        ++(vlSymsp->__Vcoverage[6317]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        ++(vlSymsp->__Vcoverage[6328]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        ++(vlSymsp->__Vcoverage[6314]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                    ++(vlSymsp->__Vcoverage[6328]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        ++(vlSymsp->__Vcoverage[6307]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                if ((4U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                    if (vlTOPp->bench_top__DOT__dm_mem_ready) {
                        if (vlTOPp->bench_top__DOT__u_dbg__DOT__sbautoincrement) {
                            ++(vlSymsp->__Vcoverage[6341]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                if ((4U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                    if (vlTOPp->bench_top__DOT__dm_mem_ready) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbautoincrement)))) {
                            ++(vlSymsp->__Vcoverage[6342]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if ((3U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                if (vlTOPp->bench_top__DOT__dm_mem_ready) {
                    if (vlTOPp->bench_top__DOT__u_dbg__DOT__sbautoincrement) {
                        ++(vlSymsp->__Vcoverage[6336]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if ((3U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
                if (vlTOPp->bench_top__DOT__dm_mem_ready) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbautoincrement)))) {
                        ++(vlSymsp->__Vcoverage[6337]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        if (vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadonaddr) {
                                            ++(vlSymsp->__Vcoverage[6324]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__sbreadonaddr)))) {
                                            ++(vlSymsp->__Vcoverage[6325]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy)))) {
                                            ++(vlSymsp->__Vcoverage[6288]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        if (vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy) {
                                            ++(vlSymsp->__Vcoverage[6319]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy)))) {
                                            ++(vlSymsp->__Vcoverage[6318]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy)))) {
                                            if ((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlTOPp->__Vtask_bench_top__DOT__u_dbg__DOT__start_access_reg__15__cmd 
                                                     >> 0x18U)))) {
                                                ++(vlSymsp->__Vcoverage[6287]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy)))) {
                                            if ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->__Vtask_bench_top__DOT__u_dbg__DOT__start_access_reg__15__cmd 
                                                     >> 0x18U)))) {
                                                if (
                                                    (0x20000U 
                                                     & vlTOPp->__Vtask_bench_top__DOT__u_dbg__DOT__start_access_reg__15__cmd)) {
                                                    ++(vlSymsp->__Vcoverage[6285]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__abs_busy)))) {
                                            if ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->__Vtask_bench_top__DOT__u_dbg__DOT__start_access_reg__15__cmd 
                                                     >> 0x18U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->__Vtask_bench_top__DOT__u_dbg__DOT__start_access_reg__15__cmd 
                                                         >> 0x11U)))) {
                                                    ++(vlSymsp->__Vcoverage[6286]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        if ((1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                                     >> 0x1cU)))) {
                                                ++(vlSymsp->__Vcoverage[6311]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        if ((0x100U 
                                             & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data)) {
                                            ++(vlSymsp->__Vcoverage[6315]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        if ((1U & (~ vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data))) {
                                            ++(vlSymsp->__Vcoverage[6312]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        if ((0U != 
                                             (7U & 
                                              (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                               >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[6321]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        if ((0U == 
                                             (7U & 
                                              (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                               >> 0xcU)))) {
                                            ++(vlSymsp->__Vcoverage[6322]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                                    >> 8U)))) {
                                            ++(vlSymsp->__Vcoverage[6316]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        if ((1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data)) {
                                            if ((0x10000000U 
                                                 & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data)) {
                                                ++(vlSymsp->__Vcoverage[6310]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        if ((1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data)) {
                                            ++(vlSymsp->__Vcoverage[6313]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        if ((1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data)) {
                                            if (((vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                                  >> 0x1eU) 
                                                 & (IData)(vlTOPp->bench_top__DOT__dbg_halted))) {
                                                ++(vlSymsp->__Vcoverage[6308]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_pulse) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_addr)))) {
                                        if ((1U & vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data)) {
                                            if ((1U 
                                                 & (~ 
                                                    ((vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_we_data 
                                                      >> 0x1eU) 
                                                     & (IData)(vlTOPp->bench_top__DOT__dbg_halted))))) {
                                                ++(vlSymsp->__Vcoverage[6309]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state)))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_by_zero)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_overflow)))) {
                        if ((0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx))) {
                            ++(vlSymsp->__Vcoverage[4445]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state)))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_by_zero)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_overflow)))) {
                        if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx))) {
                            ++(vlSymsp->__Vcoverage[4444]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if (vlTOPp->bench_top__DOT__u_core__DOT__commit) {
            ++(vlSymsp->__Vcoverage[5446]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit)))) {
            ++(vlSymsp->__Vcoverage[5447]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (((IData)(vlTOPp->bench_top__DOT__mem_req) 
             & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall_q)))) {
            ++(vlSymsp->__Vcoverage[554]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__mem_req) 
                      & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall_q)))))) {
            ++(vlSymsp->__Vcoverage[555]);
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        ++(vlSymsp->__Vcoverage[1026]);
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__dmem_we)))) {
        ++(vlSymsp->__Vcoverage[1027]);
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
                if ((4U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))) {
                    if ((5U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))) {
                        if ((6U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))) {
                            ++(vlSymsp->__Vcoverage[4452]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
                if ((4U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))) {
                    if ((5U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))) {
                        if ((6U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))) {
                            ++(vlSymsp->__Vcoverage[4453]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
                if ((4U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))) {
                    if ((5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))) {
                        ++(vlSymsp->__Vcoverage[4451]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
                if ((4U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))) {
                    ++(vlSymsp->__Vcoverage[4450]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if (vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) {
            ++(vlSymsp->__Vcoverage[2957]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_do)))) {
            ++(vlSymsp->__Vcoverage[2958]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if (vlTOPp->bench_top__DOT__dbg_ar_done) {
                if (vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_write) {
                    ++(vlSymsp->__Vcoverage[6332]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if ((2U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__eng))) {
            if (vlTOPp->bench_top__DOT__dbg_ar_done) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dbg_ar_write)))) {
                    ++(vlSymsp->__Vcoverage[6331]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if (vlTOPp->bench_top__DOT__dbg_ar_valid) {
            ++(vlSymsp->__Vcoverage[2960]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__dbg_ar_valid)))) {
            ++(vlSymsp->__Vcoverage[2959]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if (vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) {
            if (((IData)(vlTOPp->bench_top__DOT__dbg_ar_write) 
                 & (IData)(vlTOPp->bench_top__DOT__dbg_ar_csr))) {
                ++(vlSymsp->__Vcoverage[2955]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if (vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__dbg_ar_write) 
                          & (IData)(vlTOPp->bench_top__DOT__dbg_ar_csr))))) {
                ++(vlSymsp->__Vcoverage[2956]);
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr) {
                        ++(vlSymsp->__Vcoverage[5474]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            ++(vlSymsp->__Vcoverage[5250]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            ++(vlSymsp->__Vcoverage[5250]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            ++(vlSymsp->__Vcoverage[5458]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            ++(vlSymsp->__Vcoverage[5458]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            ++(vlSymsp->__Vcoverage[5250]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            ++(vlSymsp->__Vcoverage[5250]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            ++(vlSymsp->__Vcoverage[5473]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            ++(vlSymsp->__Vcoverage[5458]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            ++(vlSymsp->__Vcoverage[5458]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__jb = 1U;
                            vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__jb = 2U;
                            vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__jb = 3U;
                            vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__jb = 4U;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
                       & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode))) 
                      & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_pending))))) {
            ++(vlSymsp->__Vcoverage[2962]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode))) 
             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_pending))) {
            ++(vlSymsp->__Vcoverage[2961]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                ++(vlSymsp->__Vcoverage[5471]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x304U 
                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            if ((0x305U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (0x340U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    if (
                                                        (0x341U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        ++(vlSymsp->__Vcoverage[5465]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x304U 
                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            if ((0x305U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (0x340U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    if (
                                                        (0x341U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (0x342U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            ++(vlSymsp->__Vcoverage[5466]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        ++(vlSymsp->__Vcoverage[5385]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        ++(vlSymsp->__Vcoverage[5386]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        ++(vlSymsp->__Vcoverage[5461]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x304U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            ++(vlSymsp->__Vcoverage[5462]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x304U 
                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            if ((0x305U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                ++(vlSymsp->__Vcoverage[5463]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x304U 
                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            if ((0x305U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (0x340U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    ++(vlSymsp->__Vcoverage[5464]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x304U 
                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            if ((0x305U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (0x340U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    if (
                                                        (0x341U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (0x342U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (0x343U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5467]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x304U 
                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            if ((0x305U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (0x340U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    if (
                                                        (0x341U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (0x342U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (0x343U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                ++(vlSymsp->__Vcoverage[5468]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((((((
                                                   ((0x300U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                                    | (0x304U 
                                                       == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                                   | (0x305U 
                                                      == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                                  | (0x340U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                                 | (0x341U 
                                                    == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                                | (0x342U 
                                                   == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                               | (0x343U 
                                                  == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                              | (0xb02U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))))) {
                                    if ((0xb82U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        ++(vlSymsp->__Vcoverage[5469]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((((((
                                                   ((0x300U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                                    | (0x304U 
                                                       == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                                   | (0x305U 
                                                      == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                                  | (0x340U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                                 | (0x341U 
                                                    == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                                | (0x342U 
                                                   == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                               | (0x343U 
                                                  == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                              | (0xb02U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))))) {
                                    if ((0xb82U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        ++(vlSymsp->__Vcoverage[5470]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                ++(vlSymsp->__Vcoverage[5472]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb) 
                                              | (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked)))))) {
                                    ++(vlSymsp->__Vcoverage[5460]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb) 
                                           | (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked))))) {
                                    ++(vlSymsp->__Vcoverage[5459]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if (vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) {
            if (((IData)(vlTOPp->bench_top__DOT__dbg_ar_write) 
                 & (IData)(vlTOPp->bench_top__DOT__dbg_ar_csr))) {
                if ((0x7b0U != (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                    if ((0x7b1U != (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                        if ((0x7b2U == (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                            ++(vlSymsp->__Vcoverage[2953]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if (vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) {
            if (((IData)(vlTOPp->bench_top__DOT__dbg_ar_write) 
                 & (IData)(vlTOPp->bench_top__DOT__dbg_ar_csr))) {
                if ((0x7b0U != (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                    if ((0x7b1U == (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                        ++(vlSymsp->__Vcoverage[2952]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if (vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) {
            if (((IData)(vlTOPp->bench_top__DOT__dbg_ar_write) 
                 & (IData)(vlTOPp->bench_top__DOT__dbg_ar_csr))) {
                if ((0x7b0U == (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                    ++(vlSymsp->__Vcoverage[2951]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if (vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) {
            if (((IData)(vlTOPp->bench_top__DOT__dbg_ar_write) 
                 & (IData)(vlTOPp->bench_top__DOT__dbg_ar_csr))) {
                if ((0x7b0U != (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                    if ((0x7b1U != (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                        if ((0x7b2U != (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                            ++(vlSymsp->__Vcoverage[2954]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret) {
                if ((3U == (3U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                                  >> 0xbU)))) {
                    ++(vlSymsp->__Vcoverage[5451]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret) {
                if ((3U != (3U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                                  >> 0xbU)))) {
                    ++(vlSymsp->__Vcoverage[5450]);
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if (vlTOPp->bench_top__DOT__in_dram) {
            ++(vlSymsp->__Vcoverage[1025]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr) {
                        if ((1U & ((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                       (3U & (((IData)(7U) 
                                               + (0x78U 
                                                  & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     << 3U))) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(7U) 
                                            + (0x78U 
                                               & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  << 3U)))))) 
                                   | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb)))) {
                            ++(vlSymsp->__Vcoverage[5454]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr) {
                        if ((1U & (~ ((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                          (3U & (((IData)(7U) 
                                                  + 
                                                  (0x78U 
                                                   & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                      << 3U))) 
                                                 >> 5U))] 
                                          >> (0x1fU 
                                              & ((IData)(7U) 
                                                 + 
                                                 (0x78U 
                                                  & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     << 3U)))))) 
                                      | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb))))) {
                            ++(vlSymsp->__Vcoverage[5455]);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if (vlTOPp->bench_top__DOT__in_imem) {
                ++(vlSymsp->__Vcoverage[1024]);
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_imem)))) {
                if (vlTOPp->bench_top__DOT__in_clint) {
                    ++(vlSymsp->__Vcoverage[1023]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            if ((1U & (((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                            (3U & (
                                                   ((IData)(7U) 
                                                    + 
                                                    (((IData)(3U) 
                                                      + 
                                                      (0xcU 
                                                       & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                          << 2U))) 
                                                     << 3U)) 
                                                   >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(7U) 
                                                   + 
                                                   (((IData)(3U) 
                                                     + 
                                                     (0xcU 
                                                      & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         << 2U))) 
                                                    << 3U))))) 
                                        | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb)) 
                                       & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb))) 
                                             & (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout)))))) {
                                ++(vlSymsp->__Vcoverage[5456]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            if ((1U & (~ (((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                               (3U 
                                                & (((IData)(7U) 
                                                    + 
                                                    (((IData)(2U) 
                                                      + 
                                                      (0xcU 
                                                       & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                          << 2U))) 
                                                     << 3U)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (((IData)(2U) 
                                                        + 
                                                        (0xcU 
                                                         & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                            << 2U))) 
                                                       << 3U))))) 
                                           | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb)) 
                                          & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb))) 
                                                & (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout))))))) {
                                ++(vlSymsp->__Vcoverage[5457]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            if ((1U & (~ (((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                               (3U 
                                                & (((IData)(7U) 
                                                    + 
                                                    (((IData)(1U) 
                                                      + 
                                                      (0xcU 
                                                       & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                          << 2U))) 
                                                     << 3U)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (((IData)(1U) 
                                                        + 
                                                        (0xcU 
                                                         & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                            << 2U))) 
                                                       << 3U))))) 
                                           | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb)) 
                                          & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb))) 
                                                & (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout))))))) {
                                ++(vlSymsp->__Vcoverage[5457]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            if ((1U & (((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                            (3U & (
                                                   ((IData)(7U) 
                                                    + 
                                                    (((IData)(1U) 
                                                      + 
                                                      (0xcU 
                                                       & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                          << 2U))) 
                                                     << 3U)) 
                                                   >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(7U) 
                                                   + 
                                                   (((IData)(1U) 
                                                     + 
                                                     (0xcU 
                                                      & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         << 2U))) 
                                                    << 3U))))) 
                                        | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb)) 
                                       & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb))) 
                                             & (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout)))))) {
                                ++(vlSymsp->__Vcoverage[5456]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            if ((1U & (~ (((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                               (3U 
                                                & (((IData)(7U) 
                                                    + 
                                                    (0x60U 
                                                     & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                        << 5U))) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (0x60U 
                                                       & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                          << 5U)))))) 
                                           | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb)) 
                                          & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb))) 
                                                & (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout))))))) {
                                ++(vlSymsp->__Vcoverage[5457]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            if ((1U & (((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                            (3U & (
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x60U 
                                                     & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                        << 5U))) 
                                                   >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(7U) 
                                                   + 
                                                   (0x60U 
                                                    & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                       << 5U)))))) 
                                        | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb)) 
                                       & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb))) 
                                             & (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout)))))) {
                                ++(vlSymsp->__Vcoverage[5456]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            if ((1U & (~ (((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                               (3U 
                                                & (((IData)(7U) 
                                                    + 
                                                    (((IData)(3U) 
                                                      + 
                                                      (0xcU 
                                                       & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                          << 2U))) 
                                                     << 3U)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (((IData)(3U) 
                                                        + 
                                                        (0xcU 
                                                         & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                            << 2U))) 
                                                       << 3U))))) 
                                           | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb)) 
                                          & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb))) 
                                                & (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout))))))) {
                                ++(vlSymsp->__Vcoverage[5457]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            if ((1U & (((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                            (3U & (
                                                   ((IData)(7U) 
                                                    + 
                                                    (((IData)(2U) 
                                                      + 
                                                      (0xcU 
                                                       & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                          << 2U))) 
                                                     << 3U)) 
                                                   >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(7U) 
                                                   + 
                                                   (((IData)(2U) 
                                                     + 
                                                     (0xcU 
                                                      & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         << 2U))) 
                                                    << 3U))))) 
                                        | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb)) 
                                       & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb))) 
                                             & (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout)))))) {
                                ++(vlSymsp->__Vcoverage[5456]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_imem)))) {
                if (vlTOPp->bench_top__DOT__in_clint) {
                    if ((0x4004U == (0xffffU & vlTOPp->bench_top__DOT__dmem_addr))) {
                        ++(vlSymsp->__Vcoverage[1019]);
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_imem)))) {
                if (vlTOPp->bench_top__DOT__in_clint) {
                    if ((0U != (0xffffU & vlTOPp->bench_top__DOT__dmem_addr))) {
                        ++(vlSymsp->__Vcoverage[1016]);
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_imem)))) {
                if (vlTOPp->bench_top__DOT__in_clint) {
                    if ((0U == (0xffffU & vlTOPp->bench_top__DOT__dmem_addr))) {
                        ++(vlSymsp->__Vcoverage[1015]);
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_imem)))) {
                if (vlTOPp->bench_top__DOT__in_clint) {
                    if ((0x4000U == (0xffffU & vlTOPp->bench_top__DOT__dmem_addr))) {
                        ++(vlSymsp->__Vcoverage[1017]);
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_imem)))) {
                if (vlTOPp->bench_top__DOT__in_clint) {
                    if ((0x4004U != (0xffffU & vlTOPp->bench_top__DOT__dmem_addr))) {
                        ++(vlSymsp->__Vcoverage[1020]);
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_imem)))) {
                if (vlTOPp->bench_top__DOT__in_clint) {
                    if ((0x4000U != (0xffffU & vlTOPp->bench_top__DOT__dmem_addr))) {
                        ++(vlSymsp->__Vcoverage[1018]);
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_imem)))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_clint)))) {
                    if ((1U & (~ ((0x20000000U == vlTOPp->bench_top__DOT__dmem_addr) 
                                  & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall_q)))))) {
                        ++(vlSymsp->__Vcoverage[1022]);
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_imem)))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_clint)))) {
                    if (((0x20000000U == vlTOPp->bench_top__DOT__dmem_addr) 
                         & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall_q)))) {
                        ++(vlSymsp->__Vcoverage[1021]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        ++(vlSymsp->__Vcoverage[2989]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        ++(vlSymsp->__Vcoverage[2992]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        ++(vlSymsp->__Vcoverage[3001]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        ++(vlSymsp->__Vcoverage[2984]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        ++(vlSymsp->__Vcoverage[2995]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        ++(vlSymsp->__Vcoverage[2973]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
            ++(vlSymsp->__Vcoverage[3002]);
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        ++(vlSymsp->__Vcoverage[2998]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        ++(vlSymsp->__Vcoverage[2970]);
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__dbg_resumereq)))) {
                            ++(vlSymsp->__Vcoverage[3000]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if (vlTOPp->bench_top__DOT__dbg_resumereq) {
                            ++(vlSymsp->__Vcoverage[2999]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__md_done)))) {
                            ++(vlSymsp->__Vcoverage[2997]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__md_done) {
                            ++(vlSymsp->__Vcoverage[2996]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug) {
                            ++(vlSymsp->__Vcoverage[2983]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if (vlTOPp->bench_top__DOT__mem_stall) {
                            ++(vlSymsp->__Vcoverage[2991]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            ++(vlSymsp->__Vcoverage[2993]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if (vlTOPp->bench_top__DOT__mem_stall) {
                            ++(vlSymsp->__Vcoverage[2994]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if (vlTOPp->bench_top__DOT__mem_stall) {
                            ++(vlSymsp->__Vcoverage[2972]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            ++(vlSymsp->__Vcoverage[2990]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            ++(vlSymsp->__Vcoverage[2971]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            ++(vlSymsp->__Vcoverage[2987]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if (vlTOPp->bench_top__DOT__mem_stall) {
                            ++(vlSymsp->__Vcoverage[2988]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if (vlTOPp->bench_top__DOT__mem_stall) {
                            ++(vlSymsp->__Vcoverage[2969]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            ++(vlSymsp->__Vcoverage[2968]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__mis)))) {
                                ++(vlSymsp->__Vcoverage[2986]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            if (vlTOPp->bench_top__DOT__u_core__DOT__mis) {
                                ++(vlSymsp->__Vcoverage[2985]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            if (((IData)(vlTOPp->bench_top__DOT__dbg_haltreq) 
                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode)))) {
                                ++(vlSymsp->__Vcoverage[2967]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__dbg_haltreq) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode)))))) {
                                if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_pending) 
                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_seen))) {
                                    ++(vlSymsp->__Vcoverage[2966]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__dbg_haltreq) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode)))))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_pending) 
                                              & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_seen))))) {
                                    if (vlTOPp->bench_top__DOT__u_core__DOT__c_is_comp) {
                                        ++(vlSymsp->__Vcoverage[2965]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__dbg_haltreq) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode)))))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_pending) 
                                              & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_seen))))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__c_is_comp)))) {
                                        if ((2U & vlTOPp->bench_top__DOT__u_core__DOT__pc)) {
                                            ++(vlSymsp->__Vcoverage[2964]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__dbg_haltreq) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode)))))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_pending) 
                                              & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_seen))))) {
                                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__c_is_comp)))) {
                                        if ((1U & (~ 
                                                   (vlTOPp->bench_top__DOT__u_core__DOT__pc 
                                                    >> 1U)))) {
                                            ++(vlSymsp->__Vcoverage[2963]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug)))) {
                            if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re) 
                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
                                ++(vlSymsp->__Vcoverage[2982]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_md) 
                                     & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
                                    ++(vlSymsp->__Vcoverage[2981]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_md) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                    if ((1U & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                                   & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap))) 
                                                  & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__mis))))) {
                                        if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                             & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
                                            ++(vlSymsp->__Vcoverage[2978]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_md) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                    if ((((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap))) 
                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__mis))) {
                                        ++(vlSymsp->__Vcoverage[2980]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_md) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                    if ((1U & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                                   & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap))) 
                                                  & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__mis))))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                                    & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                            ++(vlSymsp->__Vcoverage[2979]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_md) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                    if ((((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap))) 
                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__mis))) {
                                        if (vlTOPp->bench_top__DOT__mem_stall) {
                                            ++(vlSymsp->__Vcoverage[2975]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_md) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                    if ((((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap))) 
                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__mis))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                                            ++(vlSymsp->__Vcoverage[2974]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_md) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                    if ((1U & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                                   & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap))) 
                                                  & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__mis))))) {
                                        if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                             & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
                                            if (vlTOPp->bench_top__DOT__mem_stall) {
                                                ++(vlSymsp->__Vcoverage[2977]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__core_rst)))) {
        if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug)))) {
                            if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                if ((1U & (~ ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_md) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))))) {
                                    if ((1U & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                                   & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap))) 
                                                  & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__mis))))) {
                                        if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                             & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                                                ++(vlSymsp->__Vcoverage[2976]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_s = ((2U 
                                                  & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_s) 
                                                     << 1U)) 
                                                 | (IData)(vlTOPp->tdi));
    vlTOPp->bench_top__DOT__u_dbg__DOT__tms_s = ((2U 
                                                  & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_s) 
                                                     << 1U)) 
                                                 | (IData)(vlTOPp->tms));
    vlTOPp->bench_top__DOT__u_dbg__DOT__tck_s = ((2U 
                                                  & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tck_s) 
                                                     << 1U)) 
                                                 | (IData)(vlTOPp->tck));
    if (vlTOPp->rst) {
        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__tap = 0U;
    } else {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__tap 
                = ((8U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                    ? ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                        ? ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                            ? ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                                ? ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                    ? 2U : 1U) : ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                                   ? 0xfU
                                                   : 0xbU))
                            : ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                                ? ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                    ? 0xeU : 0xdU) : 
                               ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                 ? 0xfU : 0xdU))) : 
                       ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                         ? ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                             ? ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                 ? 0xcU : 0xbU) : ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                                    ? 0xcU
                                                    : 0xbU))
                         : ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                             ? ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                 ? 0U : 0xaU) : ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                                  ? 2U
                                                  : 1U))))
                    : ((4U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                        ? ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                            ? ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                                ? ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                    ? 8U : 4U) : ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                                   ? 7U
                                                   : 6U))
                            : ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                                ? ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                    ? 8U : 6U) : ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                                   ? 5U
                                                   : 4U)))
                        : ((2U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                            ? ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                                ? ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                    ? 5U : 4U) : ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                                   ? 9U
                                                   : 3U))
                            : ((1U & (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))
                                ? ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                    ? 2U : 1U) : ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q)
                                                   ? 0U
                                                   : 1U)))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                if ((4U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if ((1U & (~ ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)) 
                                  | (0x10U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)))))) {
                        if ((0x11U != (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                            vlTOPp->bench_top__DOT__u_dbg__DOT__bypass_bit 
                                = vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_q;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->__Vdly__bench_top__DOT__mem_stall_q = (
                                                   (~ (IData)(vlTOPp->rst)) 
                                                   & ((IData)(vlTOPp->bench_top__DOT__mem_req) 
                                                      & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall_q))));
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_done = 0U;
    } else {
        vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_done = 0U;
        if (vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) {
            vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_done = 1U;
        }
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_we_eff) 
         & (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa)))) {
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d 
            = vlTOPp->bench_top__DOT__u_core__DOT__rf_wd;
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((1U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                ? 3U : 0U);
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((2U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 5U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((4U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 6U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((8U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 7U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x10U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 9U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x20U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0xaU : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x40U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0xbU : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x80U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0xcU : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x100U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0xdU : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x200U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0xeU : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x400U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0xfU : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x800U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x11U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x1000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x12U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x2000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x13U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x4000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x14U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x8000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x15U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x10000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x16U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x20000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x17U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x40000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x18U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x80000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x19U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x100000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x1aU : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x200000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x1bU : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x400000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x1cU : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x800000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x1dU : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x1000000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x1eU : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x2000000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x1fU : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x4000000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x21U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x8000000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x22U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x10000000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x23U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x20000000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x24U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x40000000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x25U : 0U));
        vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__13__j = 0x1fU;
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c 
            = ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c) 
               ^ ((0x80000000U & __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d)
                   ? 0x26U : 0U));
        __Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__Vfuncout 
            = ((0x40U & ((VL_REDXOR_32(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__d) 
                          ^ VL_REDXOR_32((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c))) 
                         << 6U)) | (IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__c));
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vlvbound2 
            = (((QData)((IData)(__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__enc__12__Vfuncout)) 
                << 0x20U) | (QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wd)));
        if ((0x1eU >= (0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa) 
                                - (IData)(1U))))) {
            __Vdlyvval__bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs__v0 
                = vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs__v0 = 1U;
            __Vdlyvdim0__bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs__v0 
                = (0x1fU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__rf_wa) 
                            - (IData)(1U)));
        }
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_md__DOT__state = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__done = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result = 0U;
    } else {
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__done = 0U;
        if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
                vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                    = ((4U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))
                        ? ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__neg_quot)
                            ? ((IData)(1U) + (~ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q))
                            : vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q)
                        : ((5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))
                            ? vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q
                            : ((6U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))
                                ? ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__neg_rem)
                                    ? ((IData)(1U) 
                                       + (~ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo))
                                    : vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo)
                                : vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo)));
                vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__done = 1U;
                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_md__DOT__state = 0U;
            } else {
                if (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_by_zero) {
                    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                        = ((4U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))
                            ? 0xffffffffU : ((5U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))
                                              ? 0xffffffffU
                                              : vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw));
                    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__done = 1U;
                    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_md__DOT__state = 0U;
                } else {
                    if (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_overflow) {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                            = ((4U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))
                                ? 0x80000000U : 0U);
                        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__done = 1U;
                        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_md__DOT__state = 0U;
                    } else {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                            = ((0xfffffffcU & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q 
                                               << 2U)) 
                               | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__q_digit));
                        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q 
                            = (0x3ffffffffULL & vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_next);
                        if ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx))) {
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_md__DOT__state = 3U;
                        } else {
                            vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx 
                                = (0xfU & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx) 
                                           - (IData)(1U)));
                        }
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state))) {
                vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result 
                    = ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))
                        ? vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_lo
                        : vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__prod_hi);
                vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__done = 1U;
                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_md__DOT__state = 0U;
            } else {
                if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_md__start) {
                    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q 
                        = vlTOPp->bench_top__DOT__u_core__DOT__d_md_op;
                    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__a_q 
                        = vlTOPp->bench_top__DOT__u_core__DOT__rdata1;
                    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__b_q 
                        = vlTOPp->bench_top__DOT__u_core__DOT__rdata2;
                    if (((((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op)) 
                           | (1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op))) 
                          | (2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op))) 
                         | (3U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op)))) {
                        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_md__DOT__state = 1U;
                    } else {
                        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__quotient_q = 0U;
                        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx = 0xfU;
                        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_by_zero 
                            = (0U == vlTOPp->bench_top__DOT__u_core__DOT__rdata2);
                        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_overflow 
                            = ((((4U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op)) 
                                 | (6U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op))) 
                                & (0x80000000U == vlTOPp->bench_top__DOT__u_core__DOT__rdata1)) 
                               & (0xffffffffU == vlTOPp->bench_top__DOT__u_core__DOT__rdata2));
                        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_raw 
                            = vlTOPp->bench_top__DOT__u_core__DOT__rdata1;
                        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                            = ((((4U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op)) 
                                 | (6U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op))) 
                                & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                                   >> 0x1fU)) ? ((IData)(1U) 
                                                 + 
                                                 (~ vlTOPp->bench_top__DOT__u_core__DOT__rdata1))
                                : vlTOPp->bench_top__DOT__u_core__DOT__rdata1);
                        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag 
                            = ((((4U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op)) 
                                 | (6U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op))) 
                                & (vlTOPp->bench_top__DOT__u_core__DOT__rdata2 
                                   >> 0x1fU)) ? ((IData)(1U) 
                                                 + 
                                                 (~ vlTOPp->bench_top__DOT__u_core__DOT__rdata2))
                                : vlTOPp->bench_top__DOT__u_core__DOT__rdata2);
                        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q = 0ULL;
                        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__neg_quot 
                            = ((4U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op)) 
                               & ((vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                                   ^ vlTOPp->bench_top__DOT__u_core__DOT__rdata2) 
                                  >> 0x1fU));
                        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__neg_rem 
                            = ((6U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_md_op)) 
                               & (vlTOPp->bench_top__DOT__u_core__DOT__rdata1 
                                  >> 0x1fU));
                        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_md__DOT__state = 2U;
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_busy = 0U;
    } else {
        if (vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) {
            vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_busy = 1U;
        }
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__dbg_ar_valid)))) {
            vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_busy = 0U;
        }
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
        = ((IData)(vlTOPp->bench_top__DOT__core_rst)
            ? 0ULL : (1ULL + vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle));
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x304U 
                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            if ((0x305U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (0x340U 
                                                     == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mscratch 
                                                        = vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval = 0U;
    } else {
        if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set) {
            vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                = vlTOPp->bench_top__DOT__u_core__DOT__ex_tval;
        } else {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x304U 
                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            if ((0x305U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (0x340U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    if (
                                                        (0x341U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (0x342U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (0x343U 
                                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtval 
                                                                    = vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause = 0U;
    } else {
        if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set) {
            vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                = (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__take_irq) 
                    << 0x1fU) | (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_cause));
        } else {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x304U 
                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            if ((0x305U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (0x340U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    if (
                                                        (0x341U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (0x342U 
                                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcause 
                                                                = vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x304U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mie 
                                                = vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc = 0U;
    } else {
        if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set) {
            vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                = vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_epc;
        } else {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x304U 
                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            if ((0x305U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (0x340U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    if (
                                                        (0x341U 
                                                         == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc 
                                                            = vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x304U 
                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            if ((0x305U 
                                                 == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec 
                                                    = vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 = 0U;
    } else {
        if (vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) {
            if (((IData)(vlTOPp->bench_top__DOT__dbg_ar_write) 
                 & (IData)(vlTOPp->bench_top__DOT__dbg_ar_csr))) {
                if ((0x7b0U != (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                    if ((0x7b1U != (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                        if ((0x7b2U == (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                            vlTOPp->bench_top__DOT__u_core__DOT__dscratch0 
                                = vlTOPp->bench_top__DOT__dbg_ar_wdata;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->bench_top__DOT__u_core__DOT__dcsr_ebreakm = 0U;
    } else {
        if (vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) {
            if (((IData)(vlTOPp->bench_top__DOT__dbg_ar_write) 
                 & (IData)(vlTOPp->bench_top__DOT__dbg_ar_csr))) {
                if ((0x7b0U == (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                    vlTOPp->bench_top__DOT__u_core__DOT__dcsr_ebreakm 
                        = (1U & (vlTOPp->bench_top__DOT__dbg_ar_wdata 
                                 >> 0xfU));
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__minstret = 0ULL;
    } else {
        if (vlTOPp->bench_top__DOT__u_core__DOT__commit) {
            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                = (1ULL + vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret);
        }
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        if ((0x304U 
                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                            if ((0x305U 
                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                if (
                                                    (0x340U 
                                                     != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                    if (
                                                        (0x341U 
                                                         != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                        if (
                                                            (0x342U 
                                                             != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                            if (
                                                                (0x343U 
                                                                 != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                                                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                                                    = 
                                                                    (((QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_hi)) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0xb82U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
                                            = (((QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret_lo)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst)))) {
        if (vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise) {
            if ((3U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__dr 
                    = ((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))
                        ? 0x4d495355ULL : ((0x10U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))
                                            ? (QData)((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dtmcs_val))
                                            : ((0x11U 
                                                == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))
                                                ? (
                                                   ((QData)((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rdata)) 
                                                    << 2U) 
                                                   | (QData)((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__dmi_rstat)))
                                                : 0ULL)));
            } else {
                if ((4U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tap))) {
                    if (((1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)) 
                         | (0x10U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir)))) {
                        vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__dr 
                            = (((QData)((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_q)) 
                                << 0x1fU) | (QData)((IData)(
                                                            (0x7fffffffU 
                                                             & (IData)(
                                                                       (vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                                        >> 1U))))));
                    } else {
                        if ((0x11U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__ir))) {
                            vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__dr 
                                = (((QData)((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_q)) 
                                    << 0x28U) | (0xffffffffffULL 
                                                 & (vlTOPp->bench_top__DOT__u_dbg__DOT__dr 
                                                    >> 1U)));
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__priv = 3U;
    } else {
        if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set) {
            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                = ((0xffffff7fU & vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus) 
                   | (0x80U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                               << 4U)));
            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                = (0xfffffff7U & vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus);
            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                = ((0xffffe7ffU & vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus) 
                   | ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv) 
                      << 0xbU));
            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__priv = 3U;
        } else {
            if (vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret) {
                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                    = ((0xfffffff7U & vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus) 
                       | (8U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                                >> 4U)));
                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                    = (0x80U | vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus);
                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__priv 
                    = (3U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                             >> 0xbU));
                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                    = (0xffffe7ffU & vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus);
                if ((3U != (3U & (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                                  >> 0xbU)))) {
                    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                        = (0xfffdffffU & vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus);
                }
            } else {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr)))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg)))) {
                            if ((0x747U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                if (((((((((0x300U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)) 
                                           | (0x304U 
                                              == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                          | (0x305U 
                                             == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                         | (0x340U 
                                            == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                        | (0x341U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                       | (0x342U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                      | (0x343U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) 
                                     | (0xb02U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff)))) {
                                    if ((0x300U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                        __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__old 
                                            = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus;
                                        __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__v 
                                            = vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff;
                                        __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__Vfuncout = 0U;
                                        __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__Vfuncout 
                                            = ((0xfffffff7U 
                                                & __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__Vfuncout) 
                                               | (8U 
                                                  & __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__v));
                                        __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__Vfuncout 
                                            = ((0xffffff7fU 
                                                & __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__Vfuncout) 
                                               | (0x80U 
                                                  & __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__v));
                                        __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__Vfuncout 
                                            = ((0xffffe7ffU 
                                                & __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__Vfuncout) 
                                               | (0x1800U 
                                                  & ((((0U 
                                                        == 
                                                        (3U 
                                                         & (__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__v 
                                                            >> 0xbU))) 
                                                       | (3U 
                                                          == 
                                                          (3U 
                                                           & (__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__v 
                                                              >> 0xbU))))
                                                       ? 
                                                      (__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__v 
                                                       >> 0xbU)
                                                       : 
                                                      (__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__old 
                                                       >> 0xbU)) 
                                                     << 0xbU)));
                                        __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__Vfuncout 
                                            = ((0xfffdffffU 
                                                & __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__Vfuncout) 
                                               | (0x20000U 
                                                  & __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__v));
                                        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
                                            = __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus_wr__3__Vfuncout;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dm_mem_valid) {
        if (vlTOPp->bench_top__DOT__dm_mem_write) {
            if (vlTOPp->bench_top__DOT__dm_in_dram) {
                vlTOPp->__Vdlyvval__bench_top__DOT__dram__v1 
                    = vlTOPp->bench_top__DOT__dm_mem_wdata;
                vlTOPp->__Vdlyvset__bench_top__DOT__dram__v1 = 1U;
                vlTOPp->__Vdlyvdim0__bench_top__DOT__dram__v1 
                    = vlTOPp->bench_top__DOT__dm_dram_idx;
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if (vlTOPp->bench_top__DOT__in_dram) {
            vlTOPp->__Vdlyvval__bench_top__DOT__dram__v0 
                = vlTOPp->bench_top__DOT__merged_word;
            vlTOPp->__Vdlyvset__bench_top__DOT__dram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__bench_top__DOT__dram__v0 
                = vlTOPp->bench_top__DOT__dram_idx;
        }
    }
    if (vlTOPp->bench_top__DOT__dm_mem_valid) {
        if (vlTOPp->bench_top__DOT__dm_mem_write) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__dm_in_dram)))) {
                if (vlTOPp->bench_top__DOT__dm_in_imem) {
                    vlTOPp->__Vdlyvval__bench_top__DOT__imem__v1 
                        = vlTOPp->bench_top__DOT__dm_mem_wdata;
                    vlTOPp->__Vdlyvset__bench_top__DOT__imem__v1 = 1U;
                    vlTOPp->__Vdlyvdim0__bench_top__DOT__imem__v1 
                        = vlTOPp->bench_top__DOT__dm_imem_idx;
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if (vlTOPp->bench_top__DOT__in_imem) {
                vlTOPp->__Vdlyvval__bench_top__DOT__imem__v0 
                    = vlTOPp->bench_top__DOT__merged_imem_word;
                vlTOPp->__Vdlyvset__bench_top__DOT__imem__v0 = 1U;
                vlTOPp->__Vdlyvdim0__bench_top__DOT__imem__v0 
                    = vlTOPp->bench_top__DOT__imem_didx;
            }
        }
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[0U] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[1U] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[2U] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[3U] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[4U] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[5U] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[6U] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[7U] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[8U] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[9U] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[0xaU] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[0xbU] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[0xcU] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[0xdU] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[0xeU] = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r[0xfU] = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__trap_set)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT____Vcellinp__u_csr__mret)))) {
                if (vlTOPp->bench_top__DOT__u_core__DOT__csr_we_eff) {
                    if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpaddr) {
                        if ((1U & ((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                       (3U & (((IData)(7U) 
                                               + (0x78U 
                                                  & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     << 3U))) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(7U) 
                                            + (0x78U 
                                               & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                  << 3U)))))) 
                                   | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb)))) {
                            VL_ASSIGNSEL_WIII(32,(0x1e0U 
                                                  & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                     << 5U)), vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpaddr_r, vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff);
                        }
                    } else {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__is_pmpcfg) {
                            __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c 
                                = (0xffU & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff);
                            __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout 
                                = (1U & (((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                          >> 7U) & 
                                         ((((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                            >> 2U) 
                                           & (~ ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                                 >> 1U))) 
                                          | ((~ (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c)) 
                                             & ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                                >> 1U)))));
                            if ((1U & (((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                            (3U & (
                                                   ((IData)(7U) 
                                                    + 
                                                    (0x60U 
                                                     & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                        << 5U))) 
                                                   >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(7U) 
                                                   + 
                                                   (0x60U 
                                                    & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                       << 5U)))))) 
                                        | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb)) 
                                       & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb))) 
                                             & (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout)))))) {
                                VL_ASSIGNSEL_WIII(8,
                                                  (0x60U 
                                                   & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                      << 5U)), vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r, 
                                                  (0xffU 
                                                   & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
                            }
                            __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c 
                                = (0xffU & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                                            >> 8U));
                            __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout 
                                = (1U & (((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                          >> 7U) & 
                                         ((((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                            >> 2U) 
                                           & (~ ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                                 >> 1U))) 
                                          | ((~ (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c)) 
                                             & ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                                >> 1U)))));
                            if ((1U & (((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                            (3U & (
                                                   ((IData)(7U) 
                                                    + 
                                                    (((IData)(1U) 
                                                      + 
                                                      (0xcU 
                                                       & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                          << 2U))) 
                                                     << 3U)) 
                                                   >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(7U) 
                                                   + 
                                                   (((IData)(1U) 
                                                     + 
                                                     (0xcU 
                                                      & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         << 2U))) 
                                                    << 3U))))) 
                                        | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb)) 
                                       & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb))) 
                                             & (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout)))))) {
                                VL_ASSIGNSEL_WIII(8,
                                                  (0x7fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (0xcU 
                                                        & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                           << 2U))) 
                                                      << 3U)), vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r, 
                                                  (0xffU 
                                                   & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                                                      >> 8U)));
                            }
                            __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c 
                                = (0xffU & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                                            >> 0x10U));
                            __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout 
                                = (1U & (((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                          >> 7U) & 
                                         ((((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                            >> 2U) 
                                           & (~ ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                                 >> 1U))) 
                                          | ((~ (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c)) 
                                             & ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                                >> 1U)))));
                            if ((1U & (((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                            (3U & (
                                                   ((IData)(7U) 
                                                    + 
                                                    (((IData)(2U) 
                                                      + 
                                                      (0xcU 
                                                       & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                          << 2U))) 
                                                     << 3U)) 
                                                   >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(7U) 
                                                   + 
                                                   (((IData)(2U) 
                                                     + 
                                                     (0xcU 
                                                      & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         << 2U))) 
                                                    << 3U))))) 
                                        | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb)) 
                                       & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb))) 
                                             & (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout)))))) {
                                VL_ASSIGNSEL_WIII(8,
                                                  (0x7fU 
                                                   & (((IData)(2U) 
                                                       + 
                                                       (0xcU 
                                                        & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                           << 2U))) 
                                                      << 3U)), vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r, 
                                                  (0xffU 
                                                   & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                                                      >> 0x10U)));
                            }
                            __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c 
                                = (0xffU & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                                            >> 0x18U));
                            __Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout 
                                = (1U & (((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                          >> 7U) & 
                                         ((((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                            >> 2U) 
                                           & (~ ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                                 >> 1U))) 
                                          | ((~ (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c)) 
                                             & ((IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__c) 
                                                >> 1U)))));
                            if ((1U & (((~ (vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[
                                            (3U & (
                                                   ((IData)(7U) 
                                                    + 
                                                    (((IData)(3U) 
                                                      + 
                                                      (0xcU 
                                                       & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                          << 2U))) 
                                                     << 3U)) 
                                                   >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(7U) 
                                                   + 
                                                   (((IData)(3U) 
                                                     + 
                                                     (0xcU 
                                                      & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                         << 2U))) 
                                                    << 3U))))) 
                                        | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb)) 
                                       & (~ (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                                              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb))) 
                                             & (IData)(__Vfunc_bench_top__DOT__u_core__DOT__u_csr__DOT__mml_blocked__2__Vfuncout)))))) {
                                VL_ASSIGNSEL_WIII(8,
                                                  (0x7fU 
                                                   & (((IData)(3U) 
                                                       + 
                                                       (0xcU 
                                                        & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff) 
                                                           << 2U))) 
                                                      << 3U)), vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r, 
                                                  (0xffU 
                                                   & (vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff 
                                                      >> 0x18U)));
                            }
                        } else {
                            if ((0x747U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__csr_addr_eff))) {
                                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg 
                                    = ((6U & (IData)(vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg)) 
                                       | (1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                                                | vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff)));
                                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg 
                                    = ((5U & (IData)(vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg)) 
                                       | (2U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg) 
                                                | vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff)));
                                if ((1U & ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__rlb) 
                                           | (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__any_locked))))) {
                                    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg 
                                        = ((3U & (IData)(vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg)) 
                                           | (4U & vlTOPp->bench_top__DOT__u_core__DOT__csr_wdata_eff));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__tohost_we_r = 0U;
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_imem)))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_clint)))) {
                    if (((0x20000000U == vlTOPp->bench_top__DOT__dmem_addr) 
                         & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall_q)))) {
                        vlTOPp->bench_top__DOT__tohost_we_r = 1U;
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_imem)))) {
                if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_clint)))) {
                    if (((0x20000000U == vlTOPp->bench_top__DOT__dmem_addr) 
                         & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall_q)))) {
                        vlTOPp->bench_top__DOT__tohost_r 
                            = vlTOPp->bench_top__DOT__dmem_wdata;
                    }
                }
            }
        }
    }
    vlTOPp->bench_top__DOT__mtime = ((IData)(vlTOPp->rst)
                                      ? 0ULL : (1ULL 
                                                + vlTOPp->bench_top__DOT__mtime));
    if (vlTOPp->rst) {
        vlTOPp->bench_top__DOT__msip = 0U;
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_imem)))) {
                if (vlTOPp->bench_top__DOT__in_clint) {
                    if ((0U == (0xffffU & vlTOPp->bench_top__DOT__dmem_addr))) {
                        vlTOPp->bench_top__DOT__msip 
                            = (1U & vlTOPp->bench_top__DOT__dmem_wdata);
                    }
                }
            }
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->bench_top__DOT__mtimecmp = 0xffffffffffffffffULL;
    }
    if (vlTOPp->bench_top__DOT__dmem_we) {
        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_dram)))) {
            if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__in_imem)))) {
                if (vlTOPp->bench_top__DOT__in_clint) {
                    if ((0x4000U == (0xffffU & vlTOPp->bench_top__DOT__dmem_addr))) {
                        vlTOPp->bench_top__DOT__mtimecmp 
                            = ((0xffffffff00000000ULL 
                                & vlTOPp->bench_top__DOT__mtimecmp) 
                               | (IData)((IData)(vlTOPp->bench_top__DOT__dmem_wdata)));
                    }
                    if ((0x4004U == (0xffffU & vlTOPp->bench_top__DOT__dmem_addr))) {
                        vlTOPp->bench_top__DOT__mtimecmp 
                            = ((0xffffffffULL & vlTOPp->bench_top__DOT__mtimecmp) 
                               | ((QData)((IData)(vlTOPp->bench_top__DOT__dmem_wdata)) 
                                  << 0x20U));
                    }
                }
            }
        }
    }
    if (vlTOPp->bench_top__DOT__core_rst) {
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__pc = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__instr = 0x13U;
        vlTOPp->bench_top__DOT__u_core__DOT__instr_len = 4U;
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__lo16 = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__dbg_mode = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__dpc = 0U;
        vlTOPp->bench_top__DOT__u_core__DOT__dcsr_cause = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__step_pending = 0U;
        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__step_seen = 0U;
    } else {
        if (vlTOPp->bench_top__DOT__u_core__DOT__dbg_do) {
            if (((IData)(vlTOPp->bench_top__DOT__dbg_ar_write) 
                 & (IData)(vlTOPp->bench_top__DOT__dbg_ar_csr))) {
                if ((0x7b0U != (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                    if ((0x7b1U == (IData)(vlTOPp->bench_top__DOT__dbg_ar_regno))) {
                        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__dpc 
                            = vlTOPp->bench_top__DOT__dbg_ar_wdata;
                    }
                }
            }
        }
        if ((((IData)(vlTOPp->bench_top__DOT__u_core__DOT__commit) 
              & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode))) 
             & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_pending))) {
            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__step_seen = 1U;
        }
        if ((8U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 0U;
        } else {
            if ((4U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if (vlTOPp->bench_top__DOT__dbg_resumereq) {
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__dbg_mode = 0U;
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__pc 
                                = vlTOPp->bench_top__DOT__u_core__DOT__dpc;
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 0U;
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__step_pending 
                                = vlTOPp->bench_top__DOT__u_core__DOT__dcsr_step;
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__step_seen = 0U;
                        }
                    } else {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__pc 
                                = vlTOPp->bench_top__DOT__u_core__DOT__next_pc;
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 0U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__pc 
                                = vlTOPp->bench_top__DOT__u_core__DOT__next_pc;
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 0U;
                        }
                    } else {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                = ((0xffff0000U & (vlTOPp->bench_top__DOT__imem_rdata 
                                                   << 0x10U)) 
                                   | (IData)(vlTOPp->bench_top__DOT__u_core__DOT__lo16));
                            vlTOPp->bench_top__DOT__u_core__DOT__instr_len = 4U;
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 1U;
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__md_done) {
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__pc 
                                = vlTOPp->bench_top__DOT__u_core__DOT__next_pc;
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 0U;
                        }
                    } else {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            if (vlTOPp->bench_top__DOT__u_core__DOT__mis) {
                                vlTOPp->bench_top__DOT__u_core__DOT__ld_w0 
                                    = vlTOPp->bench_top__DOT__dmem_rdata;
                                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 5U;
                            } else {
                                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__pc 
                                    = vlTOPp->bench_top__DOT__u_core__DOT__next_pc;
                                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 0U;
                            }
                        }
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__state))) {
                        if (vlTOPp->bench_top__DOT__u_core__DOT__ebreak_to_debug) {
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__dpc 
                                = vlTOPp->bench_top__DOT__u_core__DOT__pc;
                            vlTOPp->bench_top__DOT__u_core__DOT__dcsr_cause = 1U;
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__dbg_mode = 1U;
                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 7U;
                        } else {
                            if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_re) 
                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
                                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 2U;
                            } else {
                                if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_is_md) 
                                     & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
                                    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 3U;
                                } else {
                                    if ((((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                          & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap))) 
                                         & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__mis))) {
                                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 6U;
                                        }
                                    } else {
                                        if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__d_mem_we) 
                                             & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__ex_trap)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                                                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__pc 
                                                    = vlTOPp->bench_top__DOT__u_core__DOT__next_pc;
                                                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 0U;
                                            }
                                        } else {
                                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__pc 
                                                = vlTOPp->bench_top__DOT__u_core__DOT__next_pc;
                                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ (IData)(vlTOPp->bench_top__DOT__mem_stall)))) {
                            if (((IData)(vlTOPp->bench_top__DOT__dbg_haltreq) 
                                 & (~ (IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode)))) {
                                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__dpc 
                                    = vlTOPp->bench_top__DOT__u_core__DOT__pc;
                                vlTOPp->bench_top__DOT__u_core__DOT__dcsr_cause = 3U;
                                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__dbg_mode = 1U;
                                vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 7U;
                            } else {
                                if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_pending) 
                                     & (IData)(vlTOPp->bench_top__DOT__u_core__DOT__step_seen))) {
                                    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__dpc 
                                        = vlTOPp->bench_top__DOT__u_core__DOT__pc;
                                    vlTOPp->bench_top__DOT__u_core__DOT__dcsr_cause = 4U;
                                    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__dbg_mode = 1U;
                                    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 7U;
                                    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__step_pending = 0U;
                                    vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__step_seen = 0U;
                                } else {
                                    if (vlTOPp->bench_top__DOT__u_core__DOT__c_is_comp) {
                                        vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                            = ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__c_illegal)
                                                ? 0U
                                                : vlTOPp->bench_top__DOT__u_core__DOT__c_instr32);
                                        vlTOPp->bench_top__DOT__u_core__DOT__instr_len = 2U;
                                        vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 1U;
                                    } else {
                                        if ((2U & vlTOPp->bench_top__DOT__u_core__DOT__pc)) {
                                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__lo16 
                                                = (0xffffU 
                                                   & (vlTOPp->bench_top__DOT__imem_rdata 
                                                      >> 0x10U));
                                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 4U;
                                        } else {
                                            vlTOPp->bench_top__DOT__u_core__DOT__instr 
                                                = vlTOPp->bench_top__DOT__imem_rdata;
                                            vlTOPp->bench_top__DOT__u_core__DOT__instr_len = 4U;
                                            vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->__Vdlyvset__bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs__v0) {
        vlTOPp->bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs[__Vdlyvdim0__bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs__v0] 
            = __Vdlyvval__bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__regs__v0;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state 
        = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_md__DOT__state;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__minstret 
        = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__minstret;
    vlTOPp->bench_top__DOT__u_dbg__DOT__dr = vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__dr;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus 
        = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mstatus;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__priv 
        = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__priv;
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U] 
        = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[0U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U] 
        = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[1U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U] 
        = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[2U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U] 
        = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__pmpcfg_r[3U];
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg 
        = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__u_csr__DOT__mseccfg;
    vlTOPp->bench_top__DOT__mem_stall_q = vlTOPp->__Vdly__bench_top__DOT__mem_stall_q;
    vlTOPp->bench_top__DOT__u_core__DOT__step_seen 
        = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__step_seen;
    vlTOPp->bench_top__DOT__u_core__DOT__step_pending 
        = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__step_pending;
    vlTOPp->bench_top__DOT__u_core__DOT__lo16 = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__lo16;
    vlTOPp->bench_top__DOT__u_core__DOT__dpc = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__dpc;
    vlTOPp->bench_top__DOT__u_core__DOT__pc = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__pc;
    vlTOPp->bench_top__DOT__u_core__DOT__dbg_mode = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__dbg_mode;
    vlTOPp->bench_top__DOT__u_core__DOT__state = vlTOPp->__Vdly__bench_top__DOT__u_core__DOT__state;
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
    vlTOPp->bench_top__DOT__u_dbg__DOT__tms_q = (1U 
                                                 & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tms_s) 
                                                    >> 1U));
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
    if (((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__bypass_bit) 
         ^ vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__bypass_bit)) {
        ++(vlSymsp->__Vcoverage[5908]);
        vlTOPp->bench_top__DOT__u_dbg__DOT____Vtogcov__bypass_bit 
            = vlTOPp->bench_top__DOT__u_dbg__DOT__bypass_bit;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_done) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_done)) {
        ++(vlSymsp->__Vcoverage[1306]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_done 
            = vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_done;
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
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_overflow) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__div_overflow)) {
        ++(vlSymsp->__Vcoverage[4189]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__div_overflow 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_overflow;
    }
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_by_zero) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__div_by_zero)) {
        ++(vlSymsp->__Vcoverage[4188]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__div_by_zero 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__div_by_zero;
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__busy 
        = (0U != (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__state));
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_lo 
        = (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__rem_q);
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__next_bits 
        = (3U & (vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__dividend_mag 
                 >> ((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__bit_idx) 
                     << 1U)));
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d1 
        = (QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag));
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__d2 
        = ((QData)((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__divisor_mag)) 
           << 1U);
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__done) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__done)) {
        ++(vlSymsp->__Vcoverage[3684]);
        vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT____Vtogcov__done 
            = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__done;
    }
    vlTOPp->bench_top__DOT__u_core__DOT__md_done = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__done;
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__is_signed_a 
        = (((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)) 
            | (1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q))) 
           | (2U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)));
    vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__is_signed_b 
        = ((0U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)) 
           | (1U == (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__op_q)));
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
    vlTOPp->bench_top__DOT__u_core__DOT__md_result 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_md__DOT__result;
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_busy) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_busy)) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dbg_ar_busy 
            = vlTOPp->bench_top__DOT__u_core__DOT__dbg_ar_busy;
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_lo 
        = (IData)(vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle);
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle_hi 
        = (IData)((vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mcycle 
                   >> 0x20U));
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc_o 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mepc;
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
    vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec_o 
        = vlTOPp->bench_top__DOT__u_core__DOT__u_csr__DOT__mtvec;
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
    if (((IData)(vlTOPp->bench_top__DOT__u_core__DOT__dcsr_ebreakm) 
         ^ vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_ebreakm)) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlTOPp->bench_top__DOT__u_core__DOT____Vtogcov__dcsr_ebreakm 
            = vlTOPp->bench_top__DOT__u_core__DOT__dcsr_ebreakm;
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
}
