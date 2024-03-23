//
// Generated by Bluespec Compiler (build 7d25cde)
//
// timestamp removed
//
// BVI format method schedule info:
// schedule ifc_heard  CF ( ifc_heard,
// 			 ifc_heard2,
// 			 inverseIfc_heard,
// 			 inverseIfc_heard2 );
//
// schedule ifc_heard2  CF ( ifc_heard,
// 			  ifc_heard2,
// 			  inverseIfc_heard,
// 			  inverseIfc_heard2 );
//
// schedule inverseIfc_heard  CF ( ifc_heard,
// 				ifc_heard2,
// 				inverseIfc_heard,
// 				inverseIfc_heard2 );
//
// schedule inverseIfc_heard2  CF ( ifc_heard,
// 				 ifc_heard2,
// 				 inverseIfc_heard,
// 				 inverseIfc_heard2 );
//
//
// Ports:
// Name                         I/O  size props
// RDY_ifc_heard                  O     1
// RDY_ifc_heard2                 O     1
// inverseIfc_heard               O    32
// RDY_inverseIfc_heard           O     1
// inverseIfc_heard2              O    32
// RDY_inverseIfc_heard2          O     1
// CLK                            I     1 clock
// RST_N                          I     1 reset
// ifc_heard_v                    I    32
// ifc_heard2_a                   I    16
// ifc_heard2_b                   I    16
// EN_ifc_heard                   I     1
// EN_ifc_heard2                  I     1
// EN_inverseIfc_heard            I     1
// EN_inverseIfc_heard2           I     1
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

module mkEchoIndicationInverterV(CLK,
				 RST_N,

				 ifc_heard_v,
				 EN_ifc_heard,
				 RDY_ifc_heard,

				 ifc_heard2_a,
				 ifc_heard2_b,
				 EN_ifc_heard2,
				 RDY_ifc_heard2,

				 EN_inverseIfc_heard,
				 inverseIfc_heard,
				 RDY_inverseIfc_heard,

				 EN_inverseIfc_heard2,
				 inverseIfc_heard2,
				 RDY_inverseIfc_heard2);
  input  CLK;
  input  RST_N;

  // action method ifc_heard
  input  [31 : 0] ifc_heard_v;
  input  EN_ifc_heard;
  output RDY_ifc_heard;

  // action method ifc_heard2
  input  [15 : 0] ifc_heard2_a;
  input  [15 : 0] ifc_heard2_b;
  input  EN_ifc_heard2;
  output RDY_ifc_heard2;

  // actionvalue method inverseIfc_heard
  input  EN_inverseIfc_heard;
  output [31 : 0] inverseIfc_heard;
  output RDY_inverseIfc_heard;

  // actionvalue method inverseIfc_heard2
  input  EN_inverseIfc_heard2;
  output [31 : 0] inverseIfc_heard2;
  output RDY_inverseIfc_heard2;

  // signals for module outputs
  wire [31 : 0] inverseIfc_heard, inverseIfc_heard2;
  wire RDY_ifc_heard,
       RDY_ifc_heard2,
       RDY_inverseIfc_heard,
       RDY_inverseIfc_heard2;

  // ports of submodule inv_heard2_inverter
  wire [31 : 0] inv_heard2_inverter_get, inv_heard2_inverter_put;
  wire inv_heard2_inverter_EN_get,
       inv_heard2_inverter_EN_put,
       inv_heard2_inverter_RDY_get,
       inv_heard2_inverter_RDY_put;

  // ports of submodule inv_heard_inverter
  wire [31 : 0] inv_heard_inverter_get, inv_heard_inverter_put;
  wire inv_heard_inverter_EN_get,
       inv_heard_inverter_EN_put,
       inv_heard_inverter_RDY_get,
       inv_heard_inverter_RDY_put;

  // action method ifc_heard
  assign RDY_ifc_heard = inv_heard_inverter_RDY_put ;

  // action method ifc_heard2
  assign RDY_ifc_heard2 = inv_heard2_inverter_RDY_put ;

  // actionvalue method inverseIfc_heard
  assign inverseIfc_heard = inv_heard_inverter_get ;
  assign RDY_inverseIfc_heard = inv_heard_inverter_RDY_get ;

  // actionvalue method inverseIfc_heard2
  assign inverseIfc_heard2 = inv_heard2_inverter_get ;
  assign RDY_inverseIfc_heard2 = inv_heard2_inverter_RDY_get ;

  // submodule inv_heard2_inverter
  PutInverter #(.DATA_WIDTH(32'd32)) inv_heard2_inverter(.CLK(CLK),
							 .RST(RST_N),
							 .put(inv_heard2_inverter_put),
							 .EN_put(inv_heard2_inverter_EN_put),
							 .EN_get(inv_heard2_inverter_EN_get),
							 .RDY_put(inv_heard2_inverter_RDY_put),
							 .get(inv_heard2_inverter_get),
							 .RDY_get(inv_heard2_inverter_RDY_get));

  // submodule inv_heard_inverter
  PutInverter #(.DATA_WIDTH(32'd32)) inv_heard_inverter(.CLK(CLK),
							.RST(RST_N),
							.put(inv_heard_inverter_put),
							.EN_put(inv_heard_inverter_EN_put),
							.EN_get(inv_heard_inverter_EN_get),
							.RDY_put(inv_heard_inverter_RDY_put),
							.get(inv_heard_inverter_get),
							.RDY_get(inv_heard_inverter_RDY_get));

  // submodule inv_heard2_inverter
  assign inv_heard2_inverter_put = { ifc_heard2_a, ifc_heard2_b } ;
  assign inv_heard2_inverter_EN_put = EN_ifc_heard2 ;
  assign inv_heard2_inverter_EN_get = EN_inverseIfc_heard2 ;

  // submodule inv_heard_inverter
  assign inv_heard_inverter_put = ifc_heard_v ;
  assign inv_heard_inverter_EN_put = EN_ifc_heard ;
  assign inv_heard_inverter_EN_get = EN_inverseIfc_heard ;
endmodule  // mkEchoIndicationInverterV
