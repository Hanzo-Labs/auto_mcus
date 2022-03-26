#include "peripheral_control.h"
#include "trng.h"

static volatile uint32 *trng_cr = (uint32 *)ATSAM3X8E_PERIPHERAL_TRNG_CR;
static volatile uint32 *trng_ier = (uint32 *)ATSAM3X8E_PERIPHERAL_TRNG_IER;
static const uint32 *trng_sr = (uint32 *)ATSAM3X8E_PERIPHERAL_TRNG_ISR;
static const uint32 *trng_odr = (uint32 *)ATSAM3X8E_PERIPHERAL_TRNG_ODR;

void trng_enable()
{
    pmc_enable_trng_clock();
    *trng_cr = ATSAM3X8E_TRNG_KEY;
}

uint32 trng_get_data()
{
    if (*trng_sr == 1) {
        return *trng_odr;
    }

    return 0;
}

