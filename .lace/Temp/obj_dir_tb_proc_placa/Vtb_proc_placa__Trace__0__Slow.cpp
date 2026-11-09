// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_proc_placa__Syms.h"


VL_ATTR_COLD void Vtb_proc_placa___024root__trace_init_dtype____1(Vtb_proc_placa___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_proc_placa___024root__trace_init_sub__TOP__0(Vtb_proc_placa___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root__trace_init_sub__TOP__0\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_proc_placa", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"CLOCK_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"HEX0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"HEX1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"HEX2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"HEX3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"LEDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"LEDG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_PUSH_PREFIX(tracep, "esperado", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 15);
    for (int i = 0; i < 16; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 15,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"erros",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"CLOCK_50",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"KEY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"HEX0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"HEX1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"HEX2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"HEX3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"LEDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"LEDG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"passo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"modulo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "PC", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "circ_db", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+20,0,"key_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"estavel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+43,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"cont",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "memory", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);

    Vtb_proc_placa___024root__trace_init_dtype____1(vlSelf, tracep, "mem", 0, c+45, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mostra", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"HEX0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"HEX1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"HEX2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"HEX3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"HEX4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"neg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"d0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"d3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"d4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "quebra", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"d0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"d1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"d2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"d3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"d4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"bcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"seg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"seg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"seg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"seg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"seg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "proc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"acc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"resultado",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "acc_reg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "alu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_proc_placa___024root__trace_init_dtype_sub____1(Vtb_proc_placa___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_proc_placa___024root__trace_init_dtype____1(Vtb_proc_placa___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root__trace_init_dtype____1\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_proc_placa___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_proc_placa___024root__trace_init_dtype_sub____1(Vtb_proc_placa___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root__trace_init_dtype_sub____1\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 15);
    for (int i = 0; i < 16; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_proc_placa___024root__trace_init_top(Vtb_proc_placa___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root__trace_init_top\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_proc_placa___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_proc_placa___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_proc_placa___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_proc_placa___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_proc_placa___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_proc_placa___024root__trace_register(Vtb_proc_placa___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root__trace_register\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_proc_placa___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_proc_placa___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_proc_placa___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_proc_placa___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_proc_placa___024root__trace_const_0_sub_0(Vtb_proc_placa___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_proc_placa___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root__trace_const_0\n"); );
    // Body
    Vtb_proc_placa___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_proc_placa___024root*>(voidSelf);
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_proc_placa___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_proc_placa___024root__trace_const_0_sub_0(Vtb_proc_placa___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root__trace_const_0_sub_0\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+63,(4U),32);
    bufp->fullIData(oldp+64,(0xffffffffU),32);
}

VL_ATTR_COLD void Vtb_proc_placa___024root__trace_full_0_sub_0(Vtb_proc_placa___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_proc_placa___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root__trace_full_0\n"); );
    // Body
    Vtb_proc_placa___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_proc_placa___024root*>(voidSelf);
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_proc_placa___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<16>/*511:0*/ Vtb_proc_placa__ConstPool__CONST_h692a0ff4_0;
VL_ATTR_COLD void Vtb_proc_placa___024root__trace_full_dtype____0(Vtb_proc_placa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 16>& __VdtypeVar);

VL_ATTR_COLD void Vtb_proc_placa___024root__trace_full_0_sub_0(Vtb_proc_placa___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root__trace_full_0_sub_0\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.tb_proc_placa__DOT__KEY),2);
    bufp->fullSData(oldp+1,(vlSelfRef.tb_proc_placa__DOT__esperado[0]),16);
    bufp->fullSData(oldp+2,(vlSelfRef.tb_proc_placa__DOT__esperado[1]),16);
    bufp->fullSData(oldp+3,(vlSelfRef.tb_proc_placa__DOT__esperado[2]),16);
    bufp->fullSData(oldp+4,(vlSelfRef.tb_proc_placa__DOT__esperado[3]),16);
    bufp->fullSData(oldp+5,(vlSelfRef.tb_proc_placa__DOT__esperado[4]),16);
    bufp->fullSData(oldp+6,(vlSelfRef.tb_proc_placa__DOT__esperado[5]),16);
    bufp->fullSData(oldp+7,(vlSelfRef.tb_proc_placa__DOT__esperado[6]),16);
    bufp->fullSData(oldp+8,(vlSelfRef.tb_proc_placa__DOT__esperado[7]),16);
    bufp->fullSData(oldp+9,(vlSelfRef.tb_proc_placa__DOT__esperado[8]),16);
    bufp->fullSData(oldp+10,(vlSelfRef.tb_proc_placa__DOT__esperado[9]),16);
    bufp->fullSData(oldp+11,(vlSelfRef.tb_proc_placa__DOT__esperado[10]),16);
    bufp->fullSData(oldp+12,(vlSelfRef.tb_proc_placa__DOT__esperado[11]),16);
    bufp->fullSData(oldp+13,(vlSelfRef.tb_proc_placa__DOT__esperado[12]),16);
    bufp->fullSData(oldp+14,(vlSelfRef.tb_proc_placa__DOT__esperado[13]),16);
    bufp->fullSData(oldp+15,(vlSelfRef.tb_proc_placa__DOT__esperado[14]),16);
    bufp->fullSData(oldp+16,(vlSelfRef.tb_proc_placa__DOT__esperado[15]),16);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_proc_placa__DOT__k),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_proc_placa__DOT__erros),32);
    bufp->fullBit(oldp+19,((1U & (~ ((IData)(vlSelfRef.tb_proc_placa__DOT__KEY) 
                                     >> 1U)))));
    bufp->fullBit(oldp+20,((1U & (IData)(vlSelfRef.tb_proc_placa__DOT__KEY))));
    bufp->fullCData(oldp+21,((0x0000007fU & Vtb_proc_placa__ConstPool__CONST_h692a0ff4_0
                              [(0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)])),7);
    bufp->fullCData(oldp+22,((0x0000007fU & Vtb_proc_placa__ConstPool__CONST_h692a0ff4_0
                              [(0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                               >> 4U))])),7);
    bufp->fullCData(oldp+23,((0x0000007fU & Vtb_proc_placa__ConstPool__CONST_h692a0ff4_0
                              [(0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                               >> 8U))])),7);
    bufp->fullCData(oldp+24,((0x0000007fU & Vtb_proc_placa__ConstPool__CONST_h692a0ff4_0
                              [(0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                               >> 0x0000000cU))])),7);
    bufp->fullCData(oldp+25,((((0x7530U <= (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo)) 
                               << 2U) | (((0x4e20U 
                                           <= (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo)) 
                                          << 1U) | 
                                         (0x2710U <= (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo))))),3);
    bufp->fullSData(oldp+26,(vlSelfRef.tb_proc_placa__DOT__dut__DOT__b),16);
    bufp->fullSData(oldp+27,(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc),16);
    bufp->fullBit(oldp+28,((1U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc) 
                                  >> 0x0000000fU))));
    bufp->fullCData(oldp+29,(vlSelfRef.tb_proc_placa__DOT__dut__DOT__addr),4);
    bufp->fullSData(oldp+30,(vlSelfRef.tb_proc_placa__DOT__dut__DOT__modulo),16);
    bufp->fullCData(oldp+31,((0x0000007fU & Vtb_proc_placa__ConstPool__CONST_h692a0ff4_0
                              [(0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                               >> 0x00000010U))])),7);
    bufp->fullCData(oldp+32,((0x0000000fU & vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd)),4);
    bufp->fullCData(oldp+33,((0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                             >> 4U))),4);
    bufp->fullCData(oldp+34,((0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                             >> 8U))),4);
    bufp->fullCData(oldp+35,((0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                             >> 0x0000000cU))),4);
    bufp->fullCData(oldp+36,((0x0000000fU & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd 
                                             >> 0x00000010U))),4);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_proc_placa__DOT__dut__DOT__mostra__DOT__quebra__DOT__bcd),20);
    bufp->fullBit(oldp+38,(vlSelfRef.tb_proc_placa__DOT__CLOCK_50));
    bufp->fullCData(oldp+39,(((0x00000080U & ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc) 
                                              >> 8U)) 
                              | (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__passo))),8);
    bufp->fullSData(oldp+40,(vlSelfRef.tb_proc_placa__DOT__dut__DOT__memory__DOT__mem
                             [vlSelfRef.tb_proc_placa__DOT__dut__DOT__addr]),10);
    bufp->fullBit(oldp+41,(vlSelfRef.tb_proc_placa__DOT__dut__DOT__passo));
    bufp->fullBit(oldp+42,(vlSelfRef.tb_proc_placa__DOT__dut__DOT__circ_db__DOT__s0));
    bufp->fullBit(oldp+43,(vlSelfRef.tb_proc_placa__DOT__dut__DOT__circ_db__DOT__s1));
    bufp->fullCData(oldp+44,(vlSelfRef.tb_proc_placa__DOT__dut__DOT__circ_db__DOT__cont),4);
    Vtb_proc_placa___024root__trace_full_dtype____0(vlSelf, bufp, 45, vlSelfRef.tb_proc_placa__DOT__dut__DOT__memory__DOT__mem);
    bufp->fullCData(oldp+61,((3U & (vlSelfRef.tb_proc_placa__DOT__dut__DOT__memory__DOT__mem
                                    [vlSelfRef.tb_proc_placa__DOT__dut__DOT__addr] 
                                    >> 8U))),2);
    bufp->fullSData(oldp+62,((0x0000ffffU & ((0x00000200U 
                                              & vlSelfRef.tb_proc_placa__DOT__dut__DOT__memory__DOT__mem
                                              [vlSelfRef.tb_proc_placa__DOT__dut__DOT__addr])
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                                  ? 
                                                 VL_DIVS_III(16, (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc), (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__b))
                                                  : 
                                                 VL_MULS_III(16, (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc), (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__b)))
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                                  ? 
                                                 ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc) 
                                                  - (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__b))
                                                  : 
                                                 ((IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__acc) 
                                                  + (IData)(vlSelfRef.tb_proc_placa__DOT__dut__DOT__b)))))),16);
}

VL_ATTR_COLD void Vtb_proc_placa___024root__trace_full_dtype____0(Vtb_proc_placa___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_proc_placa___024root__trace_full_dtype____0\n"); );
    Vtb_proc_placa__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0]),10);
    bufp->fullSData(oldp+1,(__VdtypeVar[1]),10);
    bufp->fullSData(oldp+2,(__VdtypeVar[2]),10);
    bufp->fullSData(oldp+3,(__VdtypeVar[3]),10);
    bufp->fullSData(oldp+4,(__VdtypeVar[4]),10);
    bufp->fullSData(oldp+5,(__VdtypeVar[5]),10);
    bufp->fullSData(oldp+6,(__VdtypeVar[6]),10);
    bufp->fullSData(oldp+7,(__VdtypeVar[7]),10);
    bufp->fullSData(oldp+8,(__VdtypeVar[8]),10);
    bufp->fullSData(oldp+9,(__VdtypeVar[9]),10);
    bufp->fullSData(oldp+10,(__VdtypeVar[10]),10);
    bufp->fullSData(oldp+11,(__VdtypeVar[11]),10);
    bufp->fullSData(oldp+12,(__VdtypeVar[12]),10);
    bufp->fullSData(oldp+13,(__VdtypeVar[13]),10);
    bufp->fullSData(oldp+14,(__VdtypeVar[14]),10);
    bufp->fullSData(oldp+15,(__VdtypeVar[15]),10);
}
