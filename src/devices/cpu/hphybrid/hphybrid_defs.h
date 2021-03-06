#ifndef MAME_CPU_HPHYBRID_HPHYBRID_DEFS_H
#define MAME_CPU_HPHYBRID_HPHYBRID_DEFS_H

// Addresses of memory mapped registers
enum : uint16_t {
	HP_REG_A_ADDR     = 0x0000,
	HP_REG_B_ADDR     = 0x0001,
	HP_REG_P_ADDR     = 0x0002,
	HP_REG_R_ADDR     = 0x0003,
	HP_REG_R4_ADDR    = 0x0004,
	HP_REG_R5_ADDR    = 0x0005,
	HP_REG_R6_ADDR    = 0x0006,
	HP_REG_R7_ADDR    = 0x0007,
	HP_REG_IV_ADDR    = 0x0008,
	HP_REG_PA_ADDR    = 0x0009,
	HP_REG_W_ADDR     = 0x000a,
	HP_REG_DMAPA_ADDR = 0x000b,
	HP_REG_DMAMA_ADDR = 0x000c,
	HP_REG_DMAC_ADDR  = 0x000d,
	HP_REG_C_ADDR     = 0x000e,
	HP_REG_D_ADDR     = 0x000f,
	HP_REG_AR2_ADDR   = 0x0010,
	HP_REG_SE_ADDR    = 0x0014,
	HP_REG_R25_ADDR   = 0x0015,
	HP_REG_R26_ADDR   = 0x0016,
	HP_REG_R27_ADDR   = 0x0017,
	HP_REG_R32_ADDR   = 0x001a,
	HP_REG_R33_ADDR   = 0x001b,
	HP_REG_R34_ADDR   = 0x001c,
	HP_REG_R35_ADDR   = 0x001d,
	HP_REG_R36_ADDR   = 0x001e,
	HP_REG_R37_ADDR   = 0x001f,
	HP_REG_LAST_ADDR  = 0x001f,
	HP_REG_AR1_ADDR   = 0xfff8
};

#endif // MAME_CPU_HPHYBRID_HPHYBRID_DEFS_H
