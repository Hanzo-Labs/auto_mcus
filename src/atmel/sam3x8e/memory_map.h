#ifndef __AUTO_MCU_SAM3x8E_MEMORY_MAP_H__
#define __AUTO_MCU_SAM3x8E_MEMORY_MAP_H__

namespace auto_os {

namespace mcu {

struct memory_map {
    chip_id_register chip_id;
};

// SAM3X8E register map
static struct memory_map mmap;

mmap.chip_id.chip_id_reg      = 0x285E0A60;
mmap.chip_id.chip_ext_id_reg  = 0x285E0A60 + 0x04;

}

}

}

#endif

