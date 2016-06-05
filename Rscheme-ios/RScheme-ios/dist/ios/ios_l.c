/**********************************************
THIS FILE WAS AUTOMATICALLY GENERATED, AND MAY
BE AUTOMATICALLY RE-GENERATED WHEN THE COMPILER
OR SOURCE CHANGES.  DO NOT MODIFY THIS FILE BY HAND!
RScheme Build (v0.7.3.4-b7u, 2007-05-30)
**********************************************/

#include "ios_p.h"

/********************* Link file for the `ios' module *********************/


extern struct part_descr ios_part_ios;
extern struct part_descr ios_part_iosglue;

static struct part_descr *(parts_table[]) = {
    &ios_part_ios,
    &ios_part_iosglue,
    (struct part_descr *)0 };

struct module_descr module_ios = { "ios", parts_table,
	0 /* num roots */,
	(obj *)0,
	(struct root_info *)0,	(struct bcx_descr *)0, /* bc_extensions */
	0 /* num_bc_extensions */
    };

struct module_descr *RS_module_ios = &module_ios;
struct module_descr *RS_fm_ios( void )
{ return &module_ios; }
