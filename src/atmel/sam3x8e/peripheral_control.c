#include "peripheral_control.h"
#include "common/types.h"

void pmc_enable_trng_clock()
{
    uint32 *clksr1 = (uint32 *)PMC_PERIPH_CLK_SR_1;
    uint32 *clken1 = (uint32 *)PMC_PERIPH_CLK_EN_1;

    // enable it if PMC_PCSR1 != 1 for trng
    if ((*clksr1 >> 9) != 1)
        *clken1 = (1 << 9);
#if 0
    Serial.print("status reg: "); Serial.print(!!(*clksr1 & 0x00000200)); Serial.print("\n");
    Serial.print("status reg: "); Serial.print(!!(*clksr1 & 0x00000200)); Serial.print("\n");
#endif
}
