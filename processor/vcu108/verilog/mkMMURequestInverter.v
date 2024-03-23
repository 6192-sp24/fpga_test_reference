//
// Generated by Bluespec Compiler (build 7d25cde)
//
// timestamp removed
//
// BVI format method schedule info:
// schedule ifc_sglist  CF ( ifc_region,
// 			  ifc_idRequest,
// 			  ifc_idReturn,
// 			  ifc_setInterface,
// 			  inverseIfc_sglist,
// 			  inverseIfc_region,
// 			  inverseIfc_idRequest,
// 			  inverseIfc_idReturn,
// 			  inverseIfc_setInterface );
// schedule ifc_sglist  C ( ifc_sglist );
//
// schedule ifc_region  CF ( ifc_sglist,
// 			  ifc_idRequest,
// 			  ifc_idReturn,
// 			  ifc_setInterface,
// 			  inverseIfc_sglist,
// 			  inverseIfc_region,
// 			  inverseIfc_idRequest,
// 			  inverseIfc_idReturn,
// 			  inverseIfc_setInterface );
// schedule ifc_region  C ( ifc_region );
//
// schedule ifc_idRequest  CF ( ifc_sglist,
// 			     ifc_region,
// 			     ifc_idReturn,
// 			     ifc_setInterface,
// 			     inverseIfc_sglist,
// 			     inverseIfc_region,
// 			     inverseIfc_idRequest,
// 			     inverseIfc_idReturn,
// 			     inverseIfc_setInterface );
// schedule ifc_idRequest  C ( ifc_idRequest );
//
// schedule ifc_idReturn  CF ( ifc_sglist,
// 			    ifc_region,
// 			    ifc_idRequest,
// 			    ifc_setInterface,
// 			    inverseIfc_sglist,
// 			    inverseIfc_region,
// 			    inverseIfc_idRequest,
// 			    inverseIfc_idReturn,
// 			    inverseIfc_setInterface );
// schedule ifc_idReturn  C ( ifc_idReturn );
//
// schedule ifc_setInterface  CF ( ifc_sglist,
// 				ifc_region,
// 				ifc_idRequest,
// 				ifc_idReturn,
// 				inverseIfc_sglist,
// 				inverseIfc_region,
// 				inverseIfc_idRequest,
// 				inverseIfc_idReturn,
// 				inverseIfc_setInterface );
// schedule ifc_setInterface  C ( ifc_setInterface );
//
// schedule inverseIfc_sglist  CF ( ifc_sglist,
// 				 ifc_region,
// 				 ifc_idRequest,
// 				 ifc_idReturn,
// 				 ifc_setInterface,
// 				 inverseIfc_region,
// 				 inverseIfc_idRequest,
// 				 inverseIfc_idReturn,
// 				 inverseIfc_setInterface );
// schedule inverseIfc_sglist  C ( inverseIfc_sglist );
//
// schedule inverseIfc_region  CF ( ifc_sglist,
// 				 ifc_region,
// 				 ifc_idRequest,
// 				 ifc_idReturn,
// 				 ifc_setInterface,
// 				 inverseIfc_sglist,
// 				 inverseIfc_idRequest,
// 				 inverseIfc_idReturn,
// 				 inverseIfc_setInterface );
// schedule inverseIfc_region  C ( inverseIfc_region );
//
// schedule inverseIfc_idRequest  CF ( ifc_sglist,
// 				    ifc_region,
// 				    ifc_idRequest,
// 				    ifc_idReturn,
// 				    ifc_setInterface,
// 				    inverseIfc_sglist,
// 				    inverseIfc_region,
// 				    inverseIfc_idReturn,
// 				    inverseIfc_setInterface );
// schedule inverseIfc_idRequest  C ( inverseIfc_idRequest );
//
// schedule inverseIfc_idReturn  CF ( ifc_sglist,
// 				   ifc_region,
// 				   ifc_idRequest,
// 				   ifc_idReturn,
// 				   ifc_setInterface,
// 				   inverseIfc_sglist,
// 				   inverseIfc_region,
// 				   inverseIfc_idRequest,
// 				   inverseIfc_setInterface );
// schedule inverseIfc_idReturn  C ( inverseIfc_idReturn );
//
// schedule inverseIfc_setInterface  CF ( ifc_sglist,
// 				       ifc_region,
// 				       ifc_idRequest,
// 				       ifc_idReturn,
// 				       ifc_setInterface,
// 				       inverseIfc_sglist,
// 				       inverseIfc_region,
// 				       inverseIfc_idRequest,
// 				       inverseIfc_idReturn );
// schedule inverseIfc_setInterface  C ( inverseIfc_setInterface );
//
//
// Ports:
// Name                         I/O  size props
// RDY_ifc_sglist                 O     1 reg
// RDY_ifc_region                 O     1 reg
// RDY_ifc_idRequest              O     1 reg
// RDY_ifc_idReturn               O     1 reg
// RDY_ifc_setInterface           O     1 reg
// inverseIfc_sglist              O   160 reg
// RDY_inverseIfc_sglist          O     1 reg
// inverseIfc_region              O   416 reg
// RDY_inverseIfc_region          O     1 reg
// inverseIfc_idRequest           O    32 reg
// RDY_inverseIfc_idRequest       O     1 reg
// inverseIfc_idReturn            O    32 reg
// RDY_inverseIfc_idReturn        O     1 reg
// inverseIfc_setInterface        O    64 reg
// RDY_inverseIfc_setInterface    O     1 reg
// CLK                            I     1 clock
// RST_N                          I     1 reset
// ifc_sglist_sglId               I    32 reg
// ifc_sglist_sglIndex            I    32 reg
// ifc_sglist_addr                I    64 reg
// ifc_sglist_len                 I    32 reg
// ifc_region_sglId               I    32 reg
// ifc_region_barr12              I    64 reg
// ifc_region_index12             I    32 reg
// ifc_region_barr8               I    64 reg
// ifc_region_index8              I    32 reg
// ifc_region_barr4               I    64 reg
// ifc_region_index4              I    32 reg
// ifc_region_barr0               I    64 reg
// ifc_region_index0              I    32 reg
// ifc_idRequest_fd               I    32 reg
// ifc_idReturn_sglId             I    32 reg
// ifc_setInterface_interfaceId   I    32 reg
// ifc_setInterface_sglId         I    32 reg
// EN_ifc_sglist                  I     1
// EN_ifc_region                  I     1
// EN_ifc_idRequest               I     1
// EN_ifc_idReturn                I     1
// EN_ifc_setInterface            I     1
// EN_inverseIfc_sglist           I     1
// EN_inverseIfc_region           I     1
// EN_inverseIfc_idRequest        I     1
// EN_inverseIfc_idReturn         I     1
// EN_inverseIfc_setInterface     I     1
//
// No combinational paths from inputs to outputs
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
  `define BSV_ASSIGNMENT_DELAY
`endif

`ifdef BSV_POSITIVE_RESET
  `define BSV_RESET_VALUE 1'b1
  `define BSV_RESET_EDGE posedge
`else
  `define BSV_RESET_VALUE 1'b0
  `define BSV_RESET_EDGE negedge
`endif

module mkMMURequestInverter(CLK,
			    RST_N,

			    ifc_sglist_sglId,
			    ifc_sglist_sglIndex,
			    ifc_sglist_addr,
			    ifc_sglist_len,
			    EN_ifc_sglist,
			    RDY_ifc_sglist,

			    ifc_region_sglId,
			    ifc_region_barr12,
			    ifc_region_index12,
			    ifc_region_barr8,
			    ifc_region_index8,
			    ifc_region_barr4,
			    ifc_region_index4,
			    ifc_region_barr0,
			    ifc_region_index0,
			    EN_ifc_region,
			    RDY_ifc_region,

			    ifc_idRequest_fd,
			    EN_ifc_idRequest,
			    RDY_ifc_idRequest,

			    ifc_idReturn_sglId,
			    EN_ifc_idReturn,
			    RDY_ifc_idReturn,

			    ifc_setInterface_interfaceId,
			    ifc_setInterface_sglId,
			    EN_ifc_setInterface,
			    RDY_ifc_setInterface,

			    EN_inverseIfc_sglist,
			    inverseIfc_sglist,
			    RDY_inverseIfc_sglist,

			    EN_inverseIfc_region,
			    inverseIfc_region,
			    RDY_inverseIfc_region,

			    EN_inverseIfc_idRequest,
			    inverseIfc_idRequest,
			    RDY_inverseIfc_idRequest,

			    EN_inverseIfc_idReturn,
			    inverseIfc_idReturn,
			    RDY_inverseIfc_idReturn,

			    EN_inverseIfc_setInterface,
			    inverseIfc_setInterface,
			    RDY_inverseIfc_setInterface);
  input  CLK;
  input  RST_N;

  // action method ifc_sglist
  input  [31 : 0] ifc_sglist_sglId;
  input  [31 : 0] ifc_sglist_sglIndex;
  input  [63 : 0] ifc_sglist_addr;
  input  [31 : 0] ifc_sglist_len;
  input  EN_ifc_sglist;
  output RDY_ifc_sglist;

  // action method ifc_region
  input  [31 : 0] ifc_region_sglId;
  input  [63 : 0] ifc_region_barr12;
  input  [31 : 0] ifc_region_index12;
  input  [63 : 0] ifc_region_barr8;
  input  [31 : 0] ifc_region_index8;
  input  [63 : 0] ifc_region_barr4;
  input  [31 : 0] ifc_region_index4;
  input  [63 : 0] ifc_region_barr0;
  input  [31 : 0] ifc_region_index0;
  input  EN_ifc_region;
  output RDY_ifc_region;

  // action method ifc_idRequest
  input  [31 : 0] ifc_idRequest_fd;
  input  EN_ifc_idRequest;
  output RDY_ifc_idRequest;

  // action method ifc_idReturn
  input  [31 : 0] ifc_idReturn_sglId;
  input  EN_ifc_idReturn;
  output RDY_ifc_idReturn;

  // action method ifc_setInterface
  input  [31 : 0] ifc_setInterface_interfaceId;
  input  [31 : 0] ifc_setInterface_sglId;
  input  EN_ifc_setInterface;
  output RDY_ifc_setInterface;

  // actionvalue method inverseIfc_sglist
  input  EN_inverseIfc_sglist;
  output [159 : 0] inverseIfc_sglist;
  output RDY_inverseIfc_sglist;

  // actionvalue method inverseIfc_region
  input  EN_inverseIfc_region;
  output [415 : 0] inverseIfc_region;
  output RDY_inverseIfc_region;

  // actionvalue method inverseIfc_idRequest
  input  EN_inverseIfc_idRequest;
  output [31 : 0] inverseIfc_idRequest;
  output RDY_inverseIfc_idRequest;

  // actionvalue method inverseIfc_idReturn
  input  EN_inverseIfc_idReturn;
  output [31 : 0] inverseIfc_idReturn;
  output RDY_inverseIfc_idReturn;

  // actionvalue method inverseIfc_setInterface
  input  EN_inverseIfc_setInterface;
  output [63 : 0] inverseIfc_setInterface;
  output RDY_inverseIfc_setInterface;

  // signals for module outputs
  wire [415 : 0] inverseIfc_region;
  wire [159 : 0] inverseIfc_sglist;
  wire [63 : 0] inverseIfc_setInterface;
  wire [31 : 0] inverseIfc_idRequest, inverseIfc_idReturn;
  wire RDY_ifc_idRequest,
       RDY_ifc_idReturn,
       RDY_ifc_region,
       RDY_ifc_setInterface,
       RDY_ifc_sglist,
       RDY_inverseIfc_idRequest,
       RDY_inverseIfc_idReturn,
       RDY_inverseIfc_region,
       RDY_inverseIfc_setInterface,
       RDY_inverseIfc_sglist;

  // ports of submodule fifo_idRequest
  wire [31 : 0] fifo_idRequest_D_IN, fifo_idRequest_D_OUT;
  wire fifo_idRequest_CLR,
       fifo_idRequest_DEQ,
       fifo_idRequest_EMPTY_N,
       fifo_idRequest_ENQ,
       fifo_idRequest_FULL_N;

  // ports of submodule fifo_idReturn
  wire [31 : 0] fifo_idReturn_D_IN, fifo_idReturn_D_OUT;
  wire fifo_idReturn_CLR,
       fifo_idReturn_DEQ,
       fifo_idReturn_EMPTY_N,
       fifo_idReturn_ENQ,
       fifo_idReturn_FULL_N;

  // ports of submodule fifo_region
  wire [415 : 0] fifo_region_D_IN, fifo_region_D_OUT;
  wire fifo_region_CLR,
       fifo_region_DEQ,
       fifo_region_EMPTY_N,
       fifo_region_ENQ,
       fifo_region_FULL_N;

  // ports of submodule fifo_setInterface
  wire [63 : 0] fifo_setInterface_D_IN, fifo_setInterface_D_OUT;
  wire fifo_setInterface_CLR,
       fifo_setInterface_DEQ,
       fifo_setInterface_EMPTY_N,
       fifo_setInterface_ENQ,
       fifo_setInterface_FULL_N;

  // ports of submodule fifo_sglist
  wire [159 : 0] fifo_sglist_D_IN, fifo_sglist_D_OUT;
  wire fifo_sglist_CLR,
       fifo_sglist_DEQ,
       fifo_sglist_EMPTY_N,
       fifo_sglist_ENQ,
       fifo_sglist_FULL_N;

  // action method ifc_sglist
  assign RDY_ifc_sglist = fifo_sglist_FULL_N ;

  // action method ifc_region
  assign RDY_ifc_region = fifo_region_FULL_N ;

  // action method ifc_idRequest
  assign RDY_ifc_idRequest = fifo_idRequest_FULL_N ;

  // action method ifc_idReturn
  assign RDY_ifc_idReturn = fifo_idReturn_FULL_N ;

  // action method ifc_setInterface
  assign RDY_ifc_setInterface = fifo_setInterface_FULL_N ;

  // actionvalue method inverseIfc_sglist
  assign inverseIfc_sglist = fifo_sglist_D_OUT ;
  assign RDY_inverseIfc_sglist = fifo_sglist_EMPTY_N ;

  // actionvalue method inverseIfc_region
  assign inverseIfc_region = fifo_region_D_OUT ;
  assign RDY_inverseIfc_region = fifo_region_EMPTY_N ;

  // actionvalue method inverseIfc_idRequest
  assign inverseIfc_idRequest = fifo_idRequest_D_OUT ;
  assign RDY_inverseIfc_idRequest = fifo_idRequest_EMPTY_N ;

  // actionvalue method inverseIfc_idReturn
  assign inverseIfc_idReturn = fifo_idReturn_D_OUT ;
  assign RDY_inverseIfc_idReturn = fifo_idReturn_EMPTY_N ;

  // actionvalue method inverseIfc_setInterface
  assign inverseIfc_setInterface = fifo_setInterface_D_OUT ;
  assign RDY_inverseIfc_setInterface = fifo_setInterface_EMPTY_N ;

  // submodule fifo_idRequest
  FIFO2 #(.width(32'd32), .guarded(1'd1)) fifo_idRequest(.RST(RST_N),
							 .CLK(CLK),
							 .D_IN(fifo_idRequest_D_IN),
							 .ENQ(fifo_idRequest_ENQ),
							 .DEQ(fifo_idRequest_DEQ),
							 .CLR(fifo_idRequest_CLR),
							 .D_OUT(fifo_idRequest_D_OUT),
							 .FULL_N(fifo_idRequest_FULL_N),
							 .EMPTY_N(fifo_idRequest_EMPTY_N));

  // submodule fifo_idReturn
  FIFO2 #(.width(32'd32), .guarded(1'd1)) fifo_idReturn(.RST(RST_N),
							.CLK(CLK),
							.D_IN(fifo_idReturn_D_IN),
							.ENQ(fifo_idReturn_ENQ),
							.DEQ(fifo_idReturn_DEQ),
							.CLR(fifo_idReturn_CLR),
							.D_OUT(fifo_idReturn_D_OUT),
							.FULL_N(fifo_idReturn_FULL_N),
							.EMPTY_N(fifo_idReturn_EMPTY_N));

  // submodule fifo_region
  FIFO2 #(.width(32'd416), .guarded(1'd1)) fifo_region(.RST(RST_N),
						       .CLK(CLK),
						       .D_IN(fifo_region_D_IN),
						       .ENQ(fifo_region_ENQ),
						       .DEQ(fifo_region_DEQ),
						       .CLR(fifo_region_CLR),
						       .D_OUT(fifo_region_D_OUT),
						       .FULL_N(fifo_region_FULL_N),
						       .EMPTY_N(fifo_region_EMPTY_N));

  // submodule fifo_setInterface
  FIFO2 #(.width(32'd64), .guarded(1'd1)) fifo_setInterface(.RST(RST_N),
							    .CLK(CLK),
							    .D_IN(fifo_setInterface_D_IN),
							    .ENQ(fifo_setInterface_ENQ),
							    .DEQ(fifo_setInterface_DEQ),
							    .CLR(fifo_setInterface_CLR),
							    .D_OUT(fifo_setInterface_D_OUT),
							    .FULL_N(fifo_setInterface_FULL_N),
							    .EMPTY_N(fifo_setInterface_EMPTY_N));

  // submodule fifo_sglist
  FIFO2 #(.width(32'd160), .guarded(1'd1)) fifo_sglist(.RST(RST_N),
						       .CLK(CLK),
						       .D_IN(fifo_sglist_D_IN),
						       .ENQ(fifo_sglist_ENQ),
						       .DEQ(fifo_sglist_DEQ),
						       .CLR(fifo_sglist_CLR),
						       .D_OUT(fifo_sglist_D_OUT),
						       .FULL_N(fifo_sglist_FULL_N),
						       .EMPTY_N(fifo_sglist_EMPTY_N));

  // submodule fifo_idRequest
  assign fifo_idRequest_D_IN = ifc_idRequest_fd ;
  assign fifo_idRequest_ENQ = EN_ifc_idRequest ;
  assign fifo_idRequest_DEQ = EN_inverseIfc_idRequest ;
  assign fifo_idRequest_CLR = 1'b0 ;

  // submodule fifo_idReturn
  assign fifo_idReturn_D_IN = ifc_idReturn_sglId ;
  assign fifo_idReturn_ENQ = EN_ifc_idReturn ;
  assign fifo_idReturn_DEQ = EN_inverseIfc_idReturn ;
  assign fifo_idReturn_CLR = 1'b0 ;

  // submodule fifo_region
  assign fifo_region_D_IN =
	     { ifc_region_sglId,
	       ifc_region_barr12,
	       ifc_region_index12,
	       ifc_region_barr8,
	       ifc_region_index8,
	       ifc_region_barr4,
	       ifc_region_index4,
	       ifc_region_barr0,
	       ifc_region_index0 } ;
  assign fifo_region_ENQ = EN_ifc_region ;
  assign fifo_region_DEQ = EN_inverseIfc_region ;
  assign fifo_region_CLR = 1'b0 ;

  // submodule fifo_setInterface
  assign fifo_setInterface_D_IN =
	     { ifc_setInterface_interfaceId, ifc_setInterface_sglId } ;
  assign fifo_setInterface_ENQ = EN_ifc_setInterface ;
  assign fifo_setInterface_DEQ = EN_inverseIfc_setInterface ;
  assign fifo_setInterface_CLR = 1'b0 ;

  // submodule fifo_sglist
  assign fifo_sglist_D_IN =
	     { ifc_sglist_sglId,
	       ifc_sglist_sglIndex,
	       ifc_sglist_addr,
	       ifc_sglist_len } ;
  assign fifo_sglist_ENQ = EN_ifc_sglist ;
  assign fifo_sglist_DEQ = EN_inverseIfc_sglist ;
  assign fifo_sglist_CLR = 1'b0 ;
endmodule  // mkMMURequestInverter
