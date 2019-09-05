#ifndef __HAL_COMMON_H__
#define __HAL_COMMON_H__

#include "datatype.h"


#define MACH_TYPE_MINISYS   101
#define MACH_TYPE_REDDRAGON 102

int hal_init(uint32_t machine_number);

struct machine_desc {
   uint32_t      machine_number;                 /* architecture number */
   const char*   machine_name;                   /* architecture name */
   void         (*reserve)(void);                /* reserve mem blocks */
   void         (*map_io)(void);                 /* IO mapping function */
   void         (*init_irq)(void);               /* IRQ init function */
   void         (*init_timer)(void);             /* timer init function */
   void         (*init_machine)(void);           /* machine init function */
};

/*
 * Current machine - only accessible during boot.
 */
extern const struct machine_desc *cur_machine_desc;

/*
 * Set of macros to define architecture features.  This is built into
 * a table by the linker.
 */
#define MACHINE_START(_type, _name)         \
static const struct machine_desc __mach_desc_##_type   \
__attribute__((section(".arch_info_init"))) = {   \
   .machine_number      = MACH_TYPE_##_type,      \
   .machine_name        = _name,

#define MACHINE_END            \
};


#endif // __HAL_COMMON_H__

