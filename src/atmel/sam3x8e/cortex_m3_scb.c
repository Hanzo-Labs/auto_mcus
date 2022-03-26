#include "cortex_m3_scb.h"

void cortex_m3_get_cpuid(struct cortex_m3_cpuid *cpuid)
{
    uint32 *cpuid_reg = (uint32 *)CORTEX_M3_SCB_CPU_ID;

    cpuid->implementer = (enum cpuid_implementer_type)((*cpuid_reg & 0xFF000000) >> 24);
    cpuid->partno = (enum cpuid_partno)((*cpuid_reg & 0x0000FFF0) >> 4);
}

void print_cpuid(struct cortex_m3_cpuid *cpuid)
{
    Serial.print("implementer "); Serial.print(cpuid->implementer, HEX); Serial.print("\n");
    Serial.print("partno "); Serial.print(cpuid->partno, HEX); Serial.print("\n");
}

