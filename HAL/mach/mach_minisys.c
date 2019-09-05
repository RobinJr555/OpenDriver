#include "hal_common.h"


static void minisys_init_machine(void)
{

}

static void minisys_map_io(void)
{

}

static void minisys_init_irq(void)
{

}

static void minisys_init_timer(void)
{

}

MACHINE_START(MINISYS,"machine_minisys")
   .map_io          = minisys_map_io,
   .init_machine    = minisys_init_machine,
   .init_irq        = minisys_init_irq,
   .init_timer      = minisys_init_timer,
MACHINE_END

