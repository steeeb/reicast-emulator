#pragma once
#include "types.h"
#include "hw/arm7/arm7.h"

#define arm_sh4_bias (2)

extern u32 VREG;
extern VArray2 aica_ram;
u32 ReadMem_aica_rtc(u32 addr,u32 sz);
void WriteMem_aica_rtc(u32 addr,u32 data,u32 sz);
u32 ReadMem_aica_reg(u32 addr,u32 sz);
void WriteMem_aica_reg(u32 addr,u32 data,u32 sz);

void aica_Init();
void aica_Reset(bool Manual);
void aica_Term();

#define UpdateAica(clc) libAICA_Update(clc)
#define UpdateArm(clc) arm_Run(clc / arm_sh4_bias)

void aica_sb_Init();
void aica_sb_Reset(bool Manual);
void aica_sb_Term();
