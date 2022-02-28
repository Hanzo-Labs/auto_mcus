#ifndef __AUTO_MCU_SAM3x8E_CHIPID_H__
#define __AUTO_MCU_SAM3x8E_CHIPID_H__

#include "types.h"

namespace auto_os {

namespace mcu {

#define EPROC_CM3           3
#define NVPSIZ_512K         10
#define NVPSIZ2_NONE        0
#define SRAMSIZ_96K         14
#define ARCH_SAM3XXE        0x85
#define NVPTYP_FLASH        2
#define NO_CHIP_EXT         0
#define CHIP_EXT            1

struct chip_id_cidr {
    Bool        ext;
    Uint8       nvptyp;
    Uint8       arch;
    Uint8       version;
    Uint8       eproc;
    Uint8       sramsiz;
    Uint8       nvpsiz2;
    Uint8       nvpsiz;

    explicit chip_id_cidr();
    ~chip_id_cidr();
    void print();

    private:
        Uint32 *chip_id_reg;
        Uint32 *chip_ext_id_reg;
};

}

}

#endif

