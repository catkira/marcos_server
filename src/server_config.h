#ifndef _SERVER_CONFIG_H_
#define _SERVER_CONFIG_H_

#include <stdint.h>

// Memory map
static const uint32_t SLCR_OFFSET = 0xf8000000,
	CFG_OFFSET = 0x40000000,
	GRADIENT_MEMORY_X_OFFSET = 0x400A0000,
	GRADIENT_MEMORY_Y_OFFSET = 0x400B0000,
	GRADIENT_MEMORY_Z_OFFSET = 0x400C0000,
	SEQ_CONFIG_OFFSET = 0x40080000,
	RX_DATA_OFFSET = 0x40100000,
	PULSEQ_MEMORY_OFFSET = 0x40070000,
	GRADIENT_MEMORY_Z2_OFFSET = 0x40090000,
	ATTN_CONFIG_OFFSET = 0x40050000,
	STS_OFFSET = 0x40001000,
	TX_DATA_OFFSET = 0x40020000;

// FPGA clock frequency (HZ)
static const double FPGA_CLK_FREQ_HZ = 122.88e6;

// Auxiliary parameters
static const unsigned PULSE_MEM_SIZE = 32768;
static const unsigned COMMS_BUFFER = 8192;

#endif
