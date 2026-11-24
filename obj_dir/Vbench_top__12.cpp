// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbench_top.h for the primary calling header

#include "Vbench_top.h"
#include "Vbench_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vbench_top::_sequent__TOP__21(Vbench_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbench_top::_sequent__TOP__21\n"); );
    Vbench_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    if (((IData)(vlTOPp->bench_top__DOT__dm_in_imem) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dm_in_imem)) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_in_imem 
            = vlTOPp->bench_top__DOT__dm_in_imem;
    }
    if (((IData)(vlTOPp->bench_top__DOT__dm_in_dram) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dm_in_dram)) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_in_dram 
            = vlTOPp->bench_top__DOT__dm_in_dram;
    }
    if (((IData)(vlTOPp->bench_top__DOT__dm_mem_write) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_write)) {
        ++(vlSymsp->__Vcoverage[454]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_write 
            = vlTOPp->bench_top__DOT__dm_mem_write;
    }
    if (((IData)(vlTOPp->bench_top__DOT__dm_mem_valid) 
         ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_valid)) {
        ++(vlSymsp->__Vcoverage[453]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_valid 
            = vlTOPp->bench_top__DOT__dm_mem_valid;
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
    vlTOPp->bench_top__DOT__u_dbg__DOT__dm_mem_rdata 
        = vlTOPp->bench_top__DOT__dm_mem_rdata;
    if ((1U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffffffeU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (1U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((2U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffffffdU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (2U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((4U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffffffbU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (4U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((8U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
               ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffffff7U & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (8U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x10U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffffffefU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x10U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x20U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffffffdfU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x20U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x40U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffffffbfU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x40U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x80U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                  ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffffff7fU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x80U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x100U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffffeffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x100U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x200U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffffdffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x200U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x400U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffffbffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x400U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x800U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                   ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffff7ffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x800U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x1000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffffefffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x1000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x2000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffffdfffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x2000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x4000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffffbfffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x4000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x8000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                    ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffff7fffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x8000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x10000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffeffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x10000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x20000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffdffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x20000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x40000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfffbffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x40000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x80000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                     ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfff7ffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x80000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x100000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffefffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x100000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x200000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffdfffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x200000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x400000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xffbfffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x400000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x800000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                      ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xff7fffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x800000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x1000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfeffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x1000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x2000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfdffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x2000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x4000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xfbffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x4000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x8000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                       ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xf7ffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x8000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x10000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xefffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x10000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x20000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xdfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x20000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x40000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0xbfffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x40000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    if ((0x80000000U & (vlTOPp->bench_top__DOT__dm_mem_rdata 
                        ^ vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata 
            = ((0x7fffffffU & vlTOPp->bench_top__DOT____Vtogcov__dm_mem_rdata) 
               | (0x80000000U & vlTOPp->bench_top__DOT__dm_mem_rdata));
    }
    vlTOPp->bench_top__DOT__imem_rdata = ((IData)(vlTOPp->bench_top__DOT__in_dram_fetch)
                                           ? vlTOPp->bench_top__DOT__dram
                                          [vlTOPp->bench_top__DOT__dram_fetch_idx]
                                           : vlTOPp->bench_top__DOT__imem
                                          [vlTOPp->bench_top__DOT__imem_idx]);
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
    vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_q = (1U 
                                                 & ((IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tdi_s) 
                                                    >> 1U));
    vlTOPp->bench_top__DOT__u_dbg__DOT__tck_rise = 
        (1U == (IData)(vlTOPp->bench_top__DOT__u_dbg__DOT__tck_s));
    vlTOPp->bench_top__DOT__u_dbg__DOT__ir_shift = vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__ir_shift;
    vlTOPp->bench_top__DOT__u_dbg__DOT__tap = vlTOPp->__Vdly__bench_top__DOT__u_dbg__DOT__tap;
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
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
                  & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))))) {
        ++(vlSymsp->__Vcoverage[5586]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if (((IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__perr) 
         & (0x26U == (IData)(vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__dec__6__s)))) {
        ++(vlSymsp->__Vcoverage[5585]);
    }
    if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5573]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((5U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((6U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5554]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((5U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((4U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5552]);
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5549]);
        }
    }
    if ((0U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        ++(vlSymsp->__Vcoverage[5548]);
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((5U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((6U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5555]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((5U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((6U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5554]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((4U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5552]);
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((5U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((4U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5552]);
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5549]);
        }
    }
    if ((0U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        ++(vlSymsp->__Vcoverage[5548]);
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((5U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((3U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5551]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5576]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5550]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5549]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((0U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        ++(vlSymsp->__Vcoverage[5548]);
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5573]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5572]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5568]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5567]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5566]);
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5565]);
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5564]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        ++(vlSymsp->__Vcoverage[5559]);
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5562]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5561]);
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5560]);
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    ++(vlSymsp->__Vcoverage[5558]);
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if (((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                   | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
               | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
            if ((0x10U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0x11U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x12U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x13U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x14U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5569]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((0xaU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0xbU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0xcU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0xdU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0xeU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    ++(vlSymsp->__Vcoverage[5563]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
        if ((1U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((2U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                if ((3U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((4U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((5U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5553]);
                        }
                    }
                }
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            if ((9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                ++(vlSymsp->__Vcoverage[5557]);
            }
        }
    }
    if (((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
               | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
              | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
             | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
            | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
           | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
          | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
         | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
        if ((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
            ++(vlSymsp->__Vcoverage[5556]);
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if ((1U & (~ ((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                                | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                               | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                              | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                             | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                            | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
                ++(vlSymsp->__Vcoverage[5580]);
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                if ((0x1cU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                    if ((0x1dU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                        if ((0x1eU 
                                             == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
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
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            if ((0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                                ++(vlSymsp->__Vcoverage[5575]);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((8U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                        | (9U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0xaU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0xbU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0xcU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0xdU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0xeU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0xfU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
        if ((1U & (~ ((((((((0x10U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                            | (0x11U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                           | (0x12U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                          | (0x13U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                         | (0x14U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                        | (0x15U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                       | (0x16U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x17U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))))) {
            if (((((((((0x18U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j) 
                       | (0x19U == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                      | (0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                     | (0x1bU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                    | (0x1cU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                   | (0x1dU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                  | (0x1eU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) 
                 | (0x1fU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j))) {
                if ((0x18U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                    if ((0x19U != vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                        if ((0x1aU == vlTOPp->__Vfunc_bench_top__DOT__u_core__DOT__g_rf_ecc__DOT__u_rf__DOT__hcol__7__j)) {
                            ++(vlSymsp->__Vcoverage[5574]);
                        }
                    }
                }
            }
        }
    }
}
