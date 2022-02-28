#include "chipid.h"

namespace auto_os {

namespace mcu {

chip_id_cidr::chip_id_cidr()
{
    chip_id_reg = (Uint32 *)0x400E0940;
    // *chip_id_reg = 0x285E0A60;

    ext = nvptyp = arch = version = 0;
    eproc = sramsiz = nvpsiz2 = nvpsiz = 0;

    ext     = !!((*chip_id_reg) & 0x80000000);
    nvptyp  =   ((*chip_id_reg) & 0x70000000) >> 28;
    arch    =   ((*chip_id_reg) & 0x0FF00000) >> 20;
    sramsiz =   ((*chip_id_reg) & 0x000F0000) >> 16;
    nvpsiz2 =   ((*chip_id_reg) & 0x0000F000) >> 12;
    nvpsiz  =   ((*chip_id_reg) & 0x00000F00) >> 8;
    eproc   =   ((*chip_id_reg) & 0x000000E0) >> 5;
    version =   ((*chip_id_reg) & 0x0000001F);
}

chip_id_cidr::~chip_id_cidr()
{

}

void chip_id_cidr::print()
{
    Serial.print("ext: "); Serial.print(ext); Serial.print(" ");
    Serial.print("nvptyp: "); Serial.print(nvptyp); Serial.print(" ");
    Serial.print("arch: "); Serial.print(arch); Serial.print(" ");
    Serial.print("srmsiz: "); Serial.print(sramsiz); Serial.print("\n");
    Serial.print("nvpsiz2: "); Serial.print(nvpsiz2); Serial.print(" ");
    Serial.print("nvpsiz: "); Serial.print(nvpsiz); Serial.print(" ");
    Serial.print("eproc: "); Serial.print(eproc); Serial.print(" ");
    Serial.print("version: "); Serial.print(version); Serial.print("\n");
}

}

}

