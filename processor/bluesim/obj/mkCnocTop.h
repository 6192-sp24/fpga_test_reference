/*
 * Generated by Bluespec Compiler (build 7d25cde)
 * 
 * On Sat Mar 23 17:25:05 EDT 2024
 * 
 */

/* Generation options: */
#ifndef __mkCnocTop_h__
#define __mkCnocTop_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkEchoIndicationOutput.h"
#include "mkEchoRequestInput.h"


/* Class declaration for the mkCnocTop module */
class MOD_mkCnocTop : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_mkEchoIndicationOutput INST_lEchoIndicationOutput;
  MOD_Reg<tUInt8> INST_lEchoIndicationOutputNoc_bpState;
  MOD_Fifo<tUInt32> INST_lEchoIndicationOutputNoc_fifoMsgSource;
  MOD_Reg<tUInt32> INST_lEchoIndicationOutputNoc_messageWordsReg;
  MOD_Reg<tUInt8> INST_lEchoIndicationOutputNoc_methodIdReg;
  MOD_mkEchoRequestInput INST_lEchoRequestInput;
  MOD_Reg<tUInt8> INST_lEchoRequestInputNoc_bpState;
  MOD_Fifo<tUInt32> INST_lEchoRequestInputNoc_fifoMsgSink;
  MOD_Reg<tUInt8> INST_lEchoRequestInputNoc_messageWordsReg;
  MOD_Reg<tUInt8> INST_lEchoRequestInputNoc_methodIdReg;
  MOD_Fifo<tUInt32> INST_lEcho_delay;
  MOD_Fifo<tUInt32> INST_lEcho_delay2;
  MOD_BRAM<tUInt32,tUInt32,tUInt8> INST_lEcho_p_bram_memory;
  MOD_Reg<tUInt8> INST_lEcho_p_bram_serverAdapterA_cnt;
  MOD_Wire<tUInt8> INST_lEcho_p_bram_serverAdapterA_cnt_1;
  MOD_Wire<tUInt8> INST_lEcho_p_bram_serverAdapterA_cnt_2;
  MOD_Wire<tUInt8> INST_lEcho_p_bram_serverAdapterA_cnt_3;
  MOD_Fifo<tUInt32> INST_lEcho_p_bram_serverAdapterA_outDataCore;
  MOD_Wire<tUInt8> INST_lEcho_p_bram_serverAdapterA_outData_deqCalled;
  MOD_Wire<tUInt32> INST_lEcho_p_bram_serverAdapterA_outData_enqData;
  MOD_Wire<tUInt32> INST_lEcho_p_bram_serverAdapterA_outData_outData;
  MOD_Reg<tUInt8> INST_lEcho_p_bram_serverAdapterA_s1;
  MOD_Wire<tUInt8> INST_lEcho_p_bram_serverAdapterA_s1_1;
  MOD_Wire<tUInt8> INST_lEcho_p_bram_serverAdapterA_writeWithResp;
  MOD_Reg<tUInt8> INST_lEcho_p_bram_serverAdapterB_cnt;
  MOD_Wire<tUInt8> INST_lEcho_p_bram_serverAdapterB_cnt_1;
  MOD_Wire<tUInt8> INST_lEcho_p_bram_serverAdapterB_cnt_2;
  MOD_Wire<tUInt8> INST_lEcho_p_bram_serverAdapterB_cnt_3;
  MOD_Fifo<tUInt32> INST_lEcho_p_bram_serverAdapterB_outDataCore;
  MOD_Wire<tUInt8> INST_lEcho_p_bram_serverAdapterB_outData_deqCalled;
  MOD_Wire<tUInt32> INST_lEcho_p_bram_serverAdapterB_outData_enqData;
  MOD_Wire<tUInt32> INST_lEcho_p_bram_serverAdapterB_outData_outData;
  MOD_Reg<tUInt8> INST_lEcho_p_bram_serverAdapterB_s1;
  MOD_Wire<tUInt8> INST_lEcho_p_bram_serverAdapterB_s1_1;
  MOD_Wire<tUInt8> INST_lEcho_p_bram_serverAdapterB_writeWithResp;
  MOD_Reg<tUInt32> INST_lEcho_p_cycle_count;
  MOD_Reg<tUWide> INST_lEcho_p_dreq;
  MOD_Reg<tUWide> INST_lEcho_p_ireq;
  MOD_Fifo<tUWide> INST_lEcho_p_mmioreq;
  MOD_Reg<tUInt64> INST_lEcho_p_rv_core_dInst;
  MOD_CReg<tUWide> INST_lEcho_p_rv_core_fromDmem_rv;
  MOD_CReg<tUWide> INST_lEcho_p_rv_core_fromImem_rv;
  MOD_CReg<tUWide> INST_lEcho_p_rv_core_fromMMIO_rv;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_lfh;
  MOD_Reg<tUInt8> INST_lEcho_p_rv_core_mem_business;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_pc;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_0;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_1;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_10;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_11;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_12;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_13;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_14;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_15;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_16;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_17;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_18;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_19;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_2;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_20;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_21;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_22;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_23;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_24;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_25;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_26;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_27;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_28;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_29;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_3;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_30;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_31;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_4;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_5;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_6;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_7;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_8;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rf_9;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rv1;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rv2;
  MOD_Reg<tUInt32> INST_lEcho_p_rv_core_rvd;
  MOD_Reg<tUInt8> INST_lEcho_p_rv_core_starting;
  MOD_Reg<tUInt8> INST_lEcho_p_rv_core_state;
  MOD_CReg<tUWide> INST_lEcho_p_rv_core_toDmem_rv;
  MOD_CReg<tUWide> INST_lEcho_p_rv_core_toImem_rv;
  MOD_CReg<tUWide> INST_lEcho_p_rv_core_toMMIO_rv;
  MOD_Reg<tUInt32> INST_lEcho_p_status;
 
 /* Constructor */
 public:
  MOD_mkCnocTop(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_readers_1_readData_put;
  tUWide PORT_readers_0_readData_put;
  tUWide PORT_writers_1_writeData_get;
  tUWide PORT_writers_1_writeReq_get;
  tUWide PORT_writers_0_writeData_get;
  tUWide PORT_writers_0_writeReq_get;
  tUWide PORT_readers_1_readReq_get;
  tUWide PORT_readers_0_readReq_get;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_lEchoIndicationOutputNoc_fifoMsgSource_i_notEm_ETC___d873;
  tUInt8 DEF_x__h16159;
  tUInt8 DEF_lEcho_p_rv_core_mem_business_88_BIT_0___d597;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BIT_6___d406;
  tUInt32 DEF_lEcho_p_rv_core_rv1_11_PLUS_IF_lEcho_p_rv_core_ETC___d451;
  tUWide DEF_lEcho_p_rv_core_fromMMIO_rv_port1__read____d598;
  tUWide DEF_lEcho_p_rv_core_fromMMIO_rv_port0__read____d781;
  tUWide DEF_lEcho_p_rv_core_toMMIO_rv_port1__read____d761;
  tUWide DEF_lEcho_p_rv_core_toMMIO_rv_port0__read____d457;
  tUWide DEF_lEcho_p_rv_core_fromDmem_rv_port1__read____d600;
  tUWide DEF_lEcho_p_rv_core_fromDmem_rv_port0__read____d752;
  tUWide DEF_lEcho_p_rv_core_toDmem_rv_port1__read____d739;
  tUWide DEF_lEcho_p_rv_core_toDmem_rv_port0__read____d460;
  tUWide DEF_lEcho_p_rv_core_fromImem_rv_port1__read____d130;
  tUWide DEF_lEcho_p_rv_core_fromImem_rv_port0__read____d730;
  tUWide DEF_lEcho_p_rv_core_toImem_rv_port1__read____d717;
  tUWide DEF_lEcho_p_rv_core_toImem_rv_port0__read____d119;
  tUInt64 DEF_lEcho_p_rv_core_dInst___d405;
  tUInt32 DEF_rs1_val__h11396;
  tUInt8 DEF_x__h15674;
  tUInt8 DEF_lEcho_p_rv_core_mem_business___d588;
  tUInt8 DEF_b__h2628;
  tUInt8 DEF_b__h1382;
  tUInt8 DEF_lEcho_p_bram_serverAdapterB_s1___d109;
  tUInt8 DEF_lEcho_p_bram_serverAdapterA_s1___d50;
  tUInt8 DEF_lEcho_p_bram_serverAdapterB_cnt_3_whas____d82;
  tUInt8 DEF_lEcho_p_bram_serverAdapterB_cnt_2_whas____d80;
  tUInt8 DEF_lEcho_p_bram_serverAdapterB_cnt_1_whas____d79;
  tUInt8 DEF_lEcho_p_bram_serverAdapterA_cnt_3_whas____d23;
  tUInt8 DEF_lEcho_p_bram_serverAdapterA_cnt_2_whas____d21;
  tUInt8 DEF_lEcho_p_bram_serverAdapterA_cnt_1_whas____d20;
  tUInt8 DEF_lEchoIndicationOutput_portalIfc_indications_1__ETC___d813;
  tUInt8 DEF_lEchoIndicationOutput_portalIfc_indications_0__ETC___d812;
  tUInt32 DEF_lEcho_p_rv_core_rv1_11_PLUS_IF_lEcho_p_rv_core_ETC___d450;
  tUInt32 DEF_x__h10133;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BITS_11_TO_7___d421;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BITS_34_TO_32___d413;
  tUInt8 DEF_lEcho_p_rv_core_mem_business_88_BITS_5_TO_3___d589;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BIT_36___d474;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BIT_35___d412;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BIT_31___d426;
  tUInt8 DEF_lEcho_p_bram_serverAdapterB_s1_09_BIT_0___d110;
  tUInt8 DEF_lEcho_p_bram_serverAdapterA_s1_0_BIT_0___d51;
  tUInt32 DEF_imm__h9990;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BIT_35_12_AND_lEcho_p_ETC___d415;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BIT_35_12_AND_lEcho_p_ETC___d419;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BIT_35_12_AND_lEcho_p_ETC___d425;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BIT_35_12_AND_lEcho_p_ETC___d434;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BITS_34_TO_32_13_EQ_3___d433;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BITS_34_TO_32_13_EQ_2___d424;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BITS_34_TO_32_13_EQ_1___d418;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BITS_34_TO_32_13_EQ_0___d414;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BITS_4_TO_3_07_EQ_0b0___d408;
  tUInt32 DEF_x__h10410;
  tUInt32 DEF_x__h10249;
  tUInt32 DEF_x__h10180;
  tUInt8 DEF_NOT_lEcho_p_rv_core_dInst_05_BIT_36_74___d475;
 
 /* Local definitions */
 private:
  tUWide DEF_lEcho_p_mmioreq_first____d785;
  tUWide DEF_lEcho_p_dreq___d757;
  tUWide DEF_lEcho_p_ireq___d735;
  tUInt32 DEF_data__h16118;
  tUInt32 DEF_pc__h11398;
  tUInt32 DEF_x__h2268;
  tUInt32 DEF_x__h1020;
  tUWide DEF_lEcho_p_rv_core_toMMIO_rv_port1__read__61_BITS_ETC___d779;
  tUWide DEF_lEcho_p_rv_core_toDmem_rv_port1__read__39_BITS_ETC___d743;
  tUWide DEF_lEcho_p_rv_core_toImem_rv_port1__read__17_BITS_ETC___d721;
  tUInt32 DEF__read_inst__h9848;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BIT_39___d468;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BIT_38___d470;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BIT_37___d472;
  tUInt8 DEF_NOT_lEcho_p_rv_core_dInst_05_BIT_6_06_86_AND_l_ETC___d487;
  tUWide DEF__16_CONCAT_lEcho_p_rv_core_pc_28_CONCAT_0___d129;
  tUWide DEF__1_CONCAT_lEcho_p_mmioreq_first__85___d786;
  tUWide DEF__1_CONCAT_lEcho_p_ireq_35_BITS_67_TO_32_36_CONC_ETC___d738;
  tUWide DEF__1_CONCAT_lEcho_p_dreq_57_BITS_67_TO_32_58_CONC_ETC___d760;
  tUWide DEF__1_CONCAT_IF_lEcho_p_rv_core_dInst_05_BIT_5_89__ETC___d507;
  tUWide DEF__0_CONCAT_DONTCARE___d135;
  tUInt8 DEF_NOT_lEcho_p_rv_core_dInst_05_BIT_39_68___d469;
  tUInt8 DEF_lEcho_p_rv_core_dInst_05_BIT_35_12_AND_NOT_lEc_ETC___d484;
  tUInt8 DEF_NOT_lEcho_p_rv_core_dInst_05_BIT_35_12___d476;
  tUInt8 DEF_NOT_lEcho_p_rv_core_dInst_05_BIT_37_72___d473;
  tUInt8 DEF_NOT_lEcho_p_rv_core_dInst_05_BIT_38_70___d471;
 
 /* Rules */
 public:
  void RL_lEcho_p_bram_serverAdapterA_outData_setFirstCore();
  void RL_lEcho_p_bram_serverAdapterA_outData_setFirstEnq();
  void RL_lEcho_p_bram_serverAdapterA_outData_enqOnly();
  void RL_lEcho_p_bram_serverAdapterA_outData_deqOnly();
  void RL_lEcho_p_bram_serverAdapterA_outData_enqAndDeq();
  void RL_lEcho_p_bram_serverAdapterA_cnt_finalAdd();
  void RL_lEcho_p_bram_serverAdapterA_s1__dreg_update();
  void RL_lEcho_p_bram_serverAdapterA_stageReadResponseAlways();
  void RL_lEcho_p_bram_serverAdapterA_moveToOutFIFO();
  void RL_lEcho_p_bram_serverAdapterA_overRun();
  void RL_lEcho_p_bram_serverAdapterB_outData_setFirstCore();
  void RL_lEcho_p_bram_serverAdapterB_outData_setFirstEnq();
  void RL_lEcho_p_bram_serverAdapterB_outData_enqOnly();
  void RL_lEcho_p_bram_serverAdapterB_outData_deqOnly();
  void RL_lEcho_p_bram_serverAdapterB_outData_enqAndDeq();
  void RL_lEcho_p_bram_serverAdapterB_cnt_finalAdd();
  void RL_lEcho_p_bram_serverAdapterB_s1__dreg_update();
  void RL_lEcho_p_bram_serverAdapterB_stageReadResponseAlways();
  void RL_lEcho_p_bram_serverAdapterB_moveToOutFIFO();
  void RL_lEcho_p_bram_serverAdapterB_overRun();
  void RL_lEcho_p_rv_core_fetch();
  void RL_lEcho_p_rv_core_decode();
  void RL_lEcho_p_rv_core_execute();
  void RL_lEcho_p_rv_core_writeback();
  void RL_lEcho_p_tic();
  void RL_lEcho_p_requestI();
  void RL_lEcho_p_responseI();
  void RL_lEcho_p_requestD();
  void RL_lEcho_p_responseD();
  void RL_lEcho_p_requestMMIO();
  void RL_lEcho_p_responseMMIO();
  void RL_lEcho_heard();
  void RL_lEcho_heard2();
  void RL_handle_say_request();
  void RL_handle_say2_request();
  void RL_handle_setLeds_request();
  void RL_lEchoIndicationOutputNoc_sendHeader();
  void RL_lEchoIndicationOutputNoc_sendMessage();
  void RL_lEchoRequestInputNoc_receiveMessageHeader();
  void RL_lEchoRequestInputNoc_receiveMessage();
 
 /* Methods */
 public:
  tUInt32 METH_requests_0_id();
  tUInt8 METH_RDY_requests_0_id();
  tUInt32 METH_indications_0_id();
  tUInt8 METH_RDY_indications_0_id();
  void METH_requests_0_message_enq(tUInt32 ARG_requests_0_message_enq_v);
  tUInt8 METH_RDY_requests_0_message_enq();
  tUInt8 METH_requests_0_message_notFull();
  tUInt8 METH_RDY_requests_0_message_notFull();
  tUInt32 METH_indications_0_message_first();
  tUInt8 METH_RDY_indications_0_message_first();
  void METH_indications_0_message_deq();
  tUInt8 METH_RDY_indications_0_message_deq();
  tUInt8 METH_indications_0_message_notEmpty();
  tUInt8 METH_RDY_indications_0_message_notEmpty();
  tUWide METH_readers_0_readReq_get();
  tUInt8 METH_RDY_readers_0_readReq_get();
  void METH_readers_0_readData_put(tUWide ARG_readers_0_readData_put);
  tUInt8 METH_RDY_readers_0_readData_put();
  tUWide METH_readers_1_readReq_get();
  tUInt8 METH_RDY_readers_1_readReq_get();
  void METH_readers_1_readData_put(tUWide ARG_readers_1_readData_put);
  tUInt8 METH_RDY_readers_1_readData_put();
  tUWide METH_writers_0_writeReq_get();
  tUInt8 METH_RDY_writers_0_writeReq_get();
  tUWide METH_writers_0_writeData_get();
  tUInt8 METH_RDY_writers_0_writeData_get();
  void METH_writers_0_writeDone_put(tUInt8 ARG_writers_0_writeDone_put);
  tUInt8 METH_RDY_writers_0_writeDone_put();
  tUWide METH_writers_1_writeReq_get();
  tUInt8 METH_RDY_writers_1_writeReq_get();
  tUWide METH_writers_1_writeData_get();
  tUInt8 METH_RDY_writers_1_writeData_get();
  void METH_writers_1_writeDone_put(tUInt8 ARG_writers_1_writeDone_put);
  tUInt8 METH_RDY_writers_1_writeDone_put();
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkCnocTop &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkCnocTop &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkCnocTop &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkCnocTop &backing);
};

#endif /* ifndef __mkCnocTop_h__ */