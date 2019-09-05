#include "hal_common.h"

static struct machine_desc *__machinie_desc_start \
                        __attribute__((section(".arch_info_init_start")));
												
static struct machine_desc *__mach_desc_end \
                        __attribute__((section(".arch_info_init_end")));
int hal_init(uint32_t machine_number)
{

   const struct machine_desc *p;
   for (p =(struct machine_desc *) ((char *)&__machinie_desc_start + 4); ;)
   {
        if (p >= (struct machine_desc *)(&__mach_desc_end))
            break;
        if (p->machine_number == machine_number)
        {
            #if 0
            cur_machine_desc = p;
            #endif
            if (p->reserve)
                p->reserve();
            if (p->map_io)
                p->map_io();
            if (p->init_irq)
                p->init_irq();
            
            if (p->init_timer)
                p->init_timer();
            if (p->init_machine)
                p->init_machine();
            break;
        }
        p = p +1;
   }
   #if 0
   static driver_init *__driver_info_start __attribute__((section(".driver_info_init_start")));
   static driver_init *__driver_info_end __attribute__((section(".driver_info_init_end")));
   const driver_init *fn;
   for (fn =(driver_init *) ((STR)&__driver_info_start + 4); ;)
   {
      if ((*fn))
         (*fn)();
      fn = fn + 1;
      if (fn >= (driver_init *)(&__driver_info_end))
        break;
   }
   #endif
   return 0;
}
