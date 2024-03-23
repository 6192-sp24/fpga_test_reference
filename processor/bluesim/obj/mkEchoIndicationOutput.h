/*
 * Generated by Bluespec Compiler (build 7d25cde)
 * 
 * On Sat Mar 23 17:25:05 EDT 2024
 * 
 */

/* Generation options: */
#ifndef __mkEchoIndicationOutput_h__
#define __mkEchoIndicationOutput_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkEchoIndicationOutputPipes.h"


/* Class declaration for the mkEchoIndicationOutput module */
class MOD_mkEchoIndicationOutput : public Module {
 
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
  MOD_mkEchoIndicationOutputPipes INST_indicationPipes;
 
 /* Constructor */
 public:
  MOD_mkEchoIndicationOutput(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
 
 /* Publicly accessible definitions */
 public:
 
 /* Local definitions */
 private:
 
 /* Rules */
 public:
 
 /* Methods */
 public:
  tUInt32 METH_portalIfc_messageSize_size(tUInt32 ARG_portalIfc_messageSize_size_methodNumber);
  tUInt8 METH_RDY_portalIfc_messageSize_size();
  tUInt32 METH_portalIfc_indications_0_first();
  tUInt8 METH_RDY_portalIfc_indications_0_first();
  void METH_portalIfc_indications_0_deq();
  tUInt8 METH_RDY_portalIfc_indications_0_deq();
  tUInt8 METH_portalIfc_indications_0_notEmpty();
  tUInt8 METH_RDY_portalIfc_indications_0_notEmpty();
  tUInt32 METH_portalIfc_indications_1_first();
  tUInt8 METH_RDY_portalIfc_indications_1_first();
  void METH_portalIfc_indications_1_deq();
  tUInt8 METH_RDY_portalIfc_indications_1_deq();
  tUInt8 METH_portalIfc_indications_1_notEmpty();
  tUInt8 METH_RDY_portalIfc_indications_1_notEmpty();
  tUInt8 METH_portalIfc_intr_status();
  tUInt8 METH_RDY_portalIfc_intr_status();
  tUInt32 METH_portalIfc_intr_channel();
  tUInt8 METH_RDY_portalIfc_intr_channel();
  void METH_ifc_heard(tUInt32 ARG_ifc_heard_v);
  tUInt8 METH_RDY_ifc_heard();
  void METH_ifc_heard2(tUInt32 ARG_ifc_heard2_a, tUInt32 ARG_ifc_heard2_b);
  tUInt8 METH_RDY_ifc_heard2();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkEchoIndicationOutput &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkEchoIndicationOutput &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkEchoIndicationOutput &backing);
};

#endif /* ifndef __mkEchoIndicationOutput_h__ */
