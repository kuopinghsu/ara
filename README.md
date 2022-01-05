# ara
Dhrystone and Coremark for Ara

# Build & Run

    git clone --recursive https://github.com/pulp-platform/ara.git
    cp -r apps/coremark ara/apps/.
    cp -r apps/dhrystone ara/apps/.
    cd ara

    cd apps
    make
    cd ../hardware
    make apply-patches
    make verilate
    make app=coremark simv
    make app=dhrystone simv

# Dhrystone score

```text
Simulation of Ara
=================


Simulation running, end by pressing CTRL-c.

Dhrystone Benchmark, Version 2.1 (Language: C)

Program compiled without 'register' attribute

Please give the number of runs through the benchmark: 
Execution starts, 100 runs through Dhrystone
Execution ends

Final values of the variables used in the benchmark:

Int_Glob:            5
        should be:   5
Bool_Glob:           1
        should be:   1
Ch_1_Glob:           A
        should be:   A
Ch_2_Glob:           B
        should be:   B
Arr_1_Glob[8]:       7
        should be:   7
Arr_2_Glob[8][7]:    110
        should be:   Number_Of_Runs + 10
Ptr_Glob->
  Ptr_Comp:          -2147473472
        should be:   (implementation-dependent)
  Discr:             0
        should be:   0
  Enum_Comp:         2
        should be:   2
  Int_Comp:          17
        should be:   17
  Str_Comp:          DHRYSTONE PROGRAM, SOME STRING
        should be:   DHRYSTONE PROGRAM, SOME STRING
Next_Ptr_Glob->
  Ptr_Comp:          -2147473472
        should be:   (implementation-dependent), same as above
  Discr:             0
        should be:   0
  Enum_Comp:         1
        should be:   1
  Int_Comp:          18
        should be:   18
  Str_Comp:          DHRYSTONE PROGRAM, SOME STRING
        should be:   DHRYSTONE PROGRAM, SOME STRING
Int_1_Loc:           5
        should be:   5
Int_2_Loc:           13
        should be:   13
Int_3_Loc:           7
        should be:   7
Enum_Loc:            1
        should be:   1
Str_1_Loc:           DHRYSTONE PROGRAM, 1'ST STRING
        should be:   DHRYSTONE PROGRAM, 1'ST STRING
Str_2_Loc:           DHRYSTONE PROGRAM, 2'ND STRING
        should be:   DHRYSTONE PROGRAM, 2'ND STRING

Number_Of_Runs: 100
User_Time: 57963 cycles
Dhrystones_Per_Second_Per_MHz: 1725
DMIPS_Per_MHz: 0.981
Microseconds for one run through Dhrystone: 5.796 
Dhrystones per Second:                      172523.840 

[284890] -Info: ara_tb_verilator.sv:47: Assertion failed in TOP.ara_tb_verilator: Core Test *** SUCCESS *** (tohost = 0)
- /home/kuoping/Projects/ara/hardware/tb/ara_tb_verilator.sv:50: Verilog $finish
Received $finish() from Verilog, shutting down simulation.

Simulation statistics
=====================
Executed cycles:  22c6d
Wallclock time:   38.747 s
Simulation speed: 3676.28 cycles/s (3.67628 kHz)
```

# Coremark score

```text
Simulation of Ara
=================


Simulation running, end by pressing CTRL-c.
2K performance run parameters for coremark.
CoreMark Size    : 666
Total ticks      : 3654064
Total time (secs): 0.036541
Iterations/Sec   : 136.833947
Iterations       : 5
Compiler version : GCCClang 13.0.0 (https://github.com/llvm/llvm-project.git b14c8f5f6eb96e70adb553cc8a4257524881e029)
Compiler flags   : -march=rv64gcv0p10 -mabi=lp64d -menable-experimental-extensions -mno-relax -fuse-ld=lld -mcmodel=medany -std=gnu99 -O3 -ffast-math -fno-common -fno-builtin-printf -DNR_LANES=4 -DVLEN=4096 -Wunused-variable -Wall -Wextra -Wno-unused-command-line-argument
Memory location  : STACK
seedcrc          : 0xe9f5
[0]crclist       : 0xe714
[0]crcmatrix     : 0x1fd7
[0]crcstate      : 0x8e3a
[0]crcfinal      : 0xf24c
Correct operation validated. See README.md for run and reporting rules.
CoreMark 1.0 : 136.833947 / GCCClang 13.0.0 (https://github.com/llvm/llvm-project.git b14c8f5f6eb96e70adb553cc8a4257524881e029) -march=rv64gcv0p10 -mabi=lp64d -menable-experimental-extensions -mno-relax -fuse-ld=lld -mcmodel=medany -std=gnu99 -O3 -ffast-math -fno-common -fno-builtin-printf -DNR_LANES=4 -DVLEN=4096 -Wunused-variable -Wall -Wextra -Wno-unused-command-line-argument / STACK
CoreMark/MHz: 1.368339
[7463656] -Info: ara_tb_verilator.sv:47: Assertion failed in TOP.ara_tb_verilator: Core Test *** SUCCESS *** (tohost = 0)
- /home/kuoping/Projects/ara/hardware/tb/ara_tb_verilator.sv:50: Verilog $finish
Received $finish() from Verilog, shutting down simulation.

Simulation statistics
=====================
Executed cycles:  38f174
Wallclock time:   1019.19 s
Simulation speed: 3661.57 cycles/s (3.66157 kHz)
```
