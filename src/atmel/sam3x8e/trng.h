#ifndef __ATSAM3X8E_TRNG_H__
#define __ATSAM3X8E_TRNG_H__

#include "memory_map.h"
#include "common/types.h"

#define ATSAM3X8E_PERIPHERAL_TRNG_CR    (ATSAM3X8E_PERIPHERAL_TRNG + 0x00)
#define ATSAM3X8E_PERIPHERAL_TRNG_IER   (ATSAM3X8E_PERIPHERAL_TRNG + 0x10)
#define ATSAM3X8E_PERIPHERAL_TRNG_IDR   (ATSAM3X8E_PERIPHERAL_TRNG + 0x14)
#define ATSAM3X8E_PERIPHERAL_TRNG_IMR   (ATSAM3X8E_PERIPHERAL_TRNG + 0x18)
#define ATSAM3X8E_PERIPHERAL_TRNG_ISR   (ATSAM3X8E_PERIPHERAL_TRNG + 0x1C)
#define ATSAM3X8E_PERIPHERAL_TRNG_ODR   (ATSAM3X8E_PERIPHERAL_TRNG + 0x50)

#define ATSAM3X8E_TRNG_KEY              0x524e4701

void trng_enable();
uint32 trng_get_data();

#endif


