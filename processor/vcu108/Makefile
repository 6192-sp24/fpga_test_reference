

##    run: run the program
##         pass parameters to software via 'make RUN_ARGS= run'
RUN_ARGS?=

export DTOP=/home/seshan/fpga_test_reference/processor/vcu108
CONNECTALDIR=/home/seshan/fpga_test_reference/connectal
BSVPATH = /home/seshan/fpga_test_reference/processor:/home/seshan/fpga_test_reference/connectal/bsv:/home/seshan/fpga_test_reference/processor/vcu108/generatedbsv:/home/seshan/fpga_test_reference/connectal/lib/bsv:/home/seshan/fpga_test_reference/connectal/generated/xilinx:/home/seshan/fpga_test_reference/connectal/generated/altera

BOARD=vcu108
PROJECTDIR=/home/seshan/fpga_test_reference/processor/vcu108
MKTOP=mkPcieTop
OS=ubuntu
TOOLCHAIN?=
DUT=mkpcietop

export INTERFACES = MemServerRequest MMURequest MemServerIndication MMUIndication EchoRequest EchoIndication
BSVFILES = /home/seshan/fpga_test_reference/processor/Echo.bsv /home/seshan/fpga_test_reference/connectal/bsv/ConnectalMemory.bsv /home/seshan/fpga_test_reference/processor/vcu108/generatedbsv/IfcNames.bsv /home/seshan/fpga_test_reference/connectal/bsv/DisplayInd.bsv
XCIFILES = /home/seshan/fpga_test_reference/connectal/out/vcu108/pcie3_ultrascale_0/pcie3_ultrascale_0.xci

BSCFLAGS_PROJECT = +RTS -K46777216 -RTS
SIM_CXX_PROJECT = 
VERILATOR_PROJECT_ARGS = 
CFLAGS_PROJECT = 
CXXFLAGS_PROJECT = 
XELABFLAGS = 
XSIMFLAGS  = -R
AWSFLAGS   = 
TOPBSVFILE = /home/seshan/fpga_test_reference/connectal/bsv/PcieTop.bsv
BSVDEFINES =  -D TRACE_PORTAL -D ConnectalVersion=22.05.23b -D NumberOfMasters=1 -D PinType=Empty -D PinTypeInclude=Misc -D NumberOfUserTiles=1 -D SlaveDataBusWidth=32 -D SlaveControlAddrWidth=5 -D BurstLenSize=10 -D project_dir=$(DTOP) -D MainClockPeriod=4 -D DerivedClockPeriod=4.000000 -D PcieClockPeriod=4 -D XILINX=1 -D VirtexUltrascale -D XilinxUltrascale -D PCIE -D PCIE3 -D PcieHostInterface -D PhysAddrWidth=40 -D NUMBER_OF_LEDS=2 -D PcieLanes=8 -D CONNECTAL_BITS_DEPENDENCES=hw/mkTop.bit -D CONNECTAL_RUN_SCRIPT=$(CONNECTALDIR)/scripts/run.pcietest -D BOARD_vcu108
QTUSED = 
export BSVDEFINES_LIST = TRACE_PORTAL ConnectalVersion=22.05.23b NumberOfMasters=1 PinType=Empty PinTypeInclude=Misc NumberOfUserTiles=1 SlaveDataBusWidth=32 SlaveControlAddrWidth=5 BurstLenSize=10 project_dir=$(DTOP) MainClockPeriod=4 DerivedClockPeriod=4.000000 PcieClockPeriod=4 XILINX=1 VirtexUltrascale XilinxUltrascale PCIE PCIE3 PcieHostInterface PhysAddrWidth=40 NUMBER_OF_LEDS=2 PcieLanes=8 CONNECTAL_BITS_DEPENDENCES=hw/mkTop.bit CONNECTAL_RUN_SCRIPT=$(CONNECTALDIR)/scripts/run.pcietest BOARD_vcu108
export DUT_NAME = mkPcieTop





TRACE_PORTAL=TRACE_PORTAL
ConnectalVersion=22.05.23b
NumberOfMasters=1
PinType=Empty
PinTypeInclude=Misc
NumberOfUserTiles=1
SlaveDataBusWidth=32
SlaveControlAddrWidth=5
BurstLenSize=10
project_dir=$(DTOP)
MainClockPeriod=4
DerivedClockPeriod=4.000000
PcieClockPeriod=4
XILINX=1
VirtexUltrascale=VirtexUltrascale
XilinxUltrascale=XilinxUltrascale
PCIE=PCIE
PCIE3=PCIE3
PcieHostInterface=PcieHostInterface
PhysAddrWidth=40
NUMBER_OF_LEDS=2
PcieLanes=8
CONNECTAL_BITS_DEPENDENCES=hw/mkTop.bit
CONNECTAL_RUN_SCRIPT=$(CONNECTALDIR)/scripts/run.pcietest
BOARD_vcu108=BOARD_vcu108


include $(CONNECTALDIR)/scripts/Makefile.connectal.build


export VERILOG_PATH=verilog /home/seshan/fpga_test_reference/connectal/verilog/xilinx /home/seshan/fpga_test_reference/connectal/verilog $(BLUESPEC_VERILOG)
MODELSIM_FILES= 
FPGAMAKE=$(CONNECTALDIR)/../fpgamake/fpgamake
fpgamake.mk: $(VFILE) Makefile prepare_bin_target
	$(Q)if [ -f ../synth-ip.tcl ]; then vivado -mode batch -source ../synth-ip.tcl; fi
	$(Q)$(FPGAMAKE) $(FPGAMAKE_VERBOSE) -o fpgamake.mk --board=vcu108 --part=xcvu095-ffva2104-2-e  --floorplan= --constraint=/home/seshan/fpga_test_reference/connectal/constraints/xilinx/vcu108.xdc --implconstraint=/home/seshan/fpga_test_reference/connectal/constraints/xilinx/vcu108.xdc --implconstraint=/home/seshan/fpga_test_reference/connectal/constraints/xilinx/pcie-clocks.xdc --xci=/home/seshan/fpga_test_reference/connectal/out/vcu108/pcie3_ultrascale_0/pcie3_ultrascale_0.xci --tcl=/home/seshan/fpga_test_reference/connectal/constraints/xilinx/cdc.tcl   -t $(MKTOP)   -b hw/mkTop.bit   $(VERILOG_PATH)

synth.%:fpgamake.mk
	$(MAKE) -f fpgamake.mk Synth/$*/$*-synth.dcp

hw/mkTop.bit: prepare_bin_target  fpgamake.mk
	$(Q)mkdir -p hw
	$(Q)$(MAKE) -f fpgamake.mk
ifneq ($(XILINX),)
	$(Q)rsync -rav --include="*/" --include="*.rpt" --exclude="*" Impl/ bin
else ifneq ($(ALTERA),)
	$(Q)cp -f $(MKTOP).sof bin
endif




