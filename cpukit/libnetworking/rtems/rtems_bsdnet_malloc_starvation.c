/*
 *  Routine called when malloc() is not succeeding.  This can be overridden
 *  by a BSP.
 *
 *  $Id*
 */

#include <stdio.h>
#include <rtems_bsdnet.h>

void
rtems_bsdnet_malloc_starvation(void)
{
  printf ("rtems_bsdnet_malloc still waiting.\n");
}
