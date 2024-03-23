

TCLDIR=/home/seshan/fpga_test_reference/fpgamake/tcl
BUILDCACHE=/home/seshan/fpga_test_reference/buildcache/buildcache
CACHEDIR = /home/seshan/fpga_test_reference/processor/vcu108/Cache
FLOORPLAN=
FPGAMAKE_PARTNAME=xcvu095-ffva2104-2-e
FPGAMAKE_BOARDNAME=vcu108
FPGAMAKE_TOPMODULE=mkPcieTop
FPGAMAKE_FAMILY="VirtexUltrascale"
VERILOG_DEFINES=""
PRESERVE_CLOCK_GATES?=0
REPORT_NWORST_TIMING_PATHS?=
include $(TCLDIR)/Makefile.fpgamake.common

mkPcieTop_HEADERFILES = 
mkPcieTop_VFILES = verilog/mkPcieTop.v verilog/mkPcieTop.v verilog/mkTLPDispatcher.v /home/seshan/Bluespec/opensource/lib/Verilog/FIFO2.v verilog/mkPcieEndpointX7.v verilog/mkEchoIndicationOutputPipes.v verilog/mkMemServerIndicationOutput.v verilog/mkTLPArbiter.v verilog/mkPcieTracer.v verilog/mkMemServerRequestWrapperMemPortalPipes.v /home/seshan/fpga_test_reference/connectal/verilog/SyncReset.v verilog/mkEchoRequestInput.v verilog/mkConnectalTop.v /home/seshan/Bluespec/opensource/lib/Verilog/SyncResetA.v verilog/mkEchoIndicationOutput.v verilog/mkPcieToMem.v /home/seshan/fpga_test_reference/connectal/verilog/SyncFIFO.v verilog/mkPcieHost.v verilog/mkMMURequestWrapperMemPortalPipes.v verilog/mkMMUIndicationProxySynth.v verilog/mkMMURequestInput.v verilog/mkMMUSynth.v /home/seshan/Bluespec/opensource/lib/Verilog.Vivado/BRAM2BELoad.v verilog/mkMemInterrupt.v /home/seshan/Bluespec/opensource/lib/Verilog/Counter.v verilog/mkPcieControlAndStatusRegs.v verilog/mkMemServerIndicationOutputPipes.v /home/seshan/Bluespec/opensource/lib/Verilog/ClockGen.v verilog/mkMMUIndicationOutputPipes.v /home/seshan/Bluespec/opensource/lib/Verilog/FIFO1.v /home/seshan/Bluespec/opensource/lib/Verilog.Vivado/BRAM2.v verilog/mkMemServerRequestInput.v verilog/mkMemToPcieSynth.v /home/seshan/Bluespec/opensource/lib/Verilog/ResetInverter.v /home/seshan/Bluespec/opensource/lib/Verilog.Vivado/SizedFIFO.v /home/seshan/Bluespec/opensource/lib/Verilog.Vivado/RegFile.v verilog/mkMMUIndicationOutput.v verilog/mkMemServerIndicationProxySynth.v
mkPcieTop_VHDFILES = 
mkPcieTop_VHDL_LIBRARIES = 
mkPcieTop_STUBS = 
mkPcieTop_IP = /home/seshan/fpga_test_reference/connectal/out/vcu108/pcie3_ultrascale_0/pcie3_ultrascale_0.xci
mkPcieTop_SUBINST = 
mkPcieTop_PATH = verilog/mkPcieTop.v
mkPcieTop_USER_TCL_SCRIPT = /home/seshan/fpga_test_reference/connectal/constraints/xilinx/cdc.tcl
mkPcieTop_XDC = /home/seshan/fpga_test_reference/connectal/constraints/xilinx/vcu108.xdc

$(eval $(call SYNTH_RULE,mkPcieTop))

TopDown_XDC = /home/seshan/fpga_test_reference/connectal/constraints/xilinx/vcu108.xdc /home/seshan/fpga_test_reference/connectal/constraints/xilinx/pcie-clocks.xdc
TopDown_UNMANAGED_XDC = 
TopDown_NETLISTS = 
TopDown_RECONFIG = 
TopDown_SUBINST = 
TopDown_PRTOP = 

$(eval $(call TOP_RULE,top,mkPcieTop,hw/mkTop.bit,/home/seshan/fpga_test_reference/processor/vcu108/hw))

everything: hw/mkTop.bit

