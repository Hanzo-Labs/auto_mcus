#ifndef __PERIPHERAL_CONTROL_H__
#define __PERIPHERAL_CONTROL_H__

#include "common/types.h"

#define PERIPH_ID_TRNG 41

#define PMC_PERIPH_CLK_EN_1 0x400E0700
#define PMC_PERIPH_CLK_SR_1 0x400E0708
#define PMC_PERIPH_CR       0x400E070C

void pmc_enable_trng_clock();

#endif
