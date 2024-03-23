(*black_box*)module mkPcieTop(CLK_pci_sys_clk_p,
		 CLK_pci_sys_clk_n,
		 RST_N_pci_sys_reset_n,

		 PCIE_rxn_v,

		 PCIE_rxp_v,

		 PCIE_txn,

		 PCIE_txp);
  input  CLK_pci_sys_clk_p;
  input  CLK_pci_sys_clk_n;
  input  RST_N_pci_sys_reset_n;

  // action method pcie_rxn
  input  [7 : 0] PCIE_rxn_v;

  // action method pcie_rxp
  input  [7 : 0] PCIE_rxp_v;

  // value method pcie_txn
  output [7 : 0] PCIE_txn;

  // value method pcie_txp
  output [7 : 0] PCIE_txp;

  // signals for module outputs
endmodule
