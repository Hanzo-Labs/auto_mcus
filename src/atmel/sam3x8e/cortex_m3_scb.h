#ifndef __CORTEX_M3_SCB_H__
#define __CORTEX_M3_SCB_H__

#include "common/types.h"

// aux control block
#define CORTEX_M3_SCB_ACB 0xE000E008

// cpu id base register
#define CORTEX_M3_SCB_CPU_ID 0xE000ED00

enum cpuid_implementer_type {
    ARM = 0x41,
};

enum cpuid_partno {
    CORTEX_M3 = 0x0C23,
};

struct cortex_m3_cpuid {
    enum cpuid_implementer_type implementer;
    enum cpuid_partno partno;
};

void cortex_m3_get_cpuid(struct cortex_m3_cpuid *cpuid);
void print_cpuid(struct cortex_m3_cpuid *cpuid);

#endif

