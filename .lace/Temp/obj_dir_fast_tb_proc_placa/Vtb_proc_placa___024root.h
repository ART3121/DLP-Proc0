// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_proc_placa.h for the primary calling header

#ifndef VERILATED_VTB_PROC_PLACA___024ROOT_H_
#define VERILATED_VTB_PROC_PLACA___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_proc_placa__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_proc_placa___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_proc_placa__DOT__CLOCK_50;
    CData/*1:0*/ tb_proc_placa__DOT__KEY;
    CData/*0:0*/ tb_proc_placa__DOT__dut__DOT__passo;
    CData/*3:0*/ tb_proc_placa__DOT__dut__DOT__addr;
    CData/*0:0*/ tb_proc_placa__DOT__dut__DOT__circ_db__DOT__s0;
    CData/*0:0*/ tb_proc_placa__DOT__dut__DOT__circ_db__DOT__s1;
    CData/*3:0*/ tb_proc_placa__DOT__dut__DOT__circ_db__DOT__cont;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_proc_placa__DOT__dut__DOT__passo__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_proc_placa__DOT__CLOCK_50__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb_proc_placa__DOT__dut__DOT__b;
    SData/*15:0*/ tb_proc_placa__DOT__dut__DOT__acc;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<SData/*15:0*/, 16> tb_proc_placa__DOT__esperado;
    VlUnpacked<SData/*9:0*/, 16> tb_proc_placa__DOT__dut__DOT__memory__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_proc_placa__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_proc_placa___024root(Vtb_proc_placa__Syms* symsp, const char* namep);
    ~Vtb_proc_placa___024root();
    VL_UNCOPYABLE(Vtb_proc_placa___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
