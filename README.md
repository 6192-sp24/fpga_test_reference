# FPGA Reference for vcu108

This is a simple test showing the multicycle processor running on an FPGA vcu108.

We have fpga access on a server only, on a shared account, so please make a directory for your group to work in.
```
ssh <username>@<server> # this is provided to you on request only....+password
mkdir <mygroup>
cd <mygroup>
```

# Cloning this repo
```
git clone https://github.com/6192-sp24/fpga_test_reference.git
cd fpga_test_reference
git submodule update --init --remote --recursive
```

# Running this sample
on the FPGA....
```
source setup.sh
cd processor
./test.sh add32 # or some other test -- do this before compiling
make build.vcu108 # uses bsc and vivado to compile (ignore timing violation for now)
make run.vcu108 # flash the fpga and read
```

in simulation....
```
source setup.sh
cd processor
./test.sh add32 # or some other test -- do this before compiling
make build.bluesim # uses bsc and bluesim
make run.bluesim # run in simulation
```

# How it works....

To run bluespec code, it does the bluespec-->verilog-->vivado pipeline to build an FPGA image. Vivado is AMD's tool to compile for Xilinx FPGAs (take 6.111 for more details).

We use a library called connectal (which has some other dependencies) to do the host pc to FPGA data interface. There are many examples in the connectal folder, but this processor is built on the echo test. The processor sends some message and gets a message back from the FPGA. Technically, we only are reading from the fpga right now, and ignoring the message from the host pc. On the sample code, you should recieve currently 0 for not working, 1 for running, 2 for pass, 100 for fail.


# What you need to do

You need to copy in your pipelined/smt code, caches, top_pipelined, etc. On an FPGA, the BRAM is limited, so in top_bsv, it was limited to 4096 lines, but you can increase that for larger programs. Make sure it still fits on the FPGA, or you will get errors. Delete all konata stuff or comment it out for now -- it won't compile.

First (in multicycle), when it compiles, you see timing violations -- fix this code to get rid of these errors (you may need additional pipelines). 

Modify the rest to match your new code.

It needs better MMIO output -- try to pass outputs other than pass, fail, running, etc, and also allow inputs perhaps. You should be able to pass some ascii values hopefully to get better output.

You can do some clever things with host pc to fpga connection, such as runnning some acceleration.

You can see the samples from connectal for other C to bluespec/FPGA interfaces. Make sure your C code does not run for ever or it will be a pain to kill

Let us know if you have questions :)

# Debugging....

You can use `$display` in bluesim, but not an FPGA. You will need to use some server side C program with connectal to pass debug messages. Its hard for first time FPGA users. Make sure it runs in simulation and you get no timing violations on the FPGA (since its fixed clock speed).

# Importing verilog

If you want some verilog or systemverilog, see the importBVI stuff in the documentation for bluespec.