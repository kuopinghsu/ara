
#include "encoding.h"

extern long time();
extern long insn();

long time()
{
    //int cycles;
    //asm volatile ("rdcycle %0" : "=r"(cycles));
    //return cycles;
    return rdcycle();
}

long insn()
{
    int insns=0;
    // asm volatile ("rdinstret %0" : "=r"(insns));
    return insns;
}

