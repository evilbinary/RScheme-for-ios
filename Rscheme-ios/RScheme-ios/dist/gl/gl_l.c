/**********************************************
THIS FILE WAS AUTOMATICALLY GENERATED, AND MAY
BE AUTOMATICALLY RE-GENERATED WHEN THE COMPILER
OR SOURCE CHANGES.  DO NOT MODIFY THIS FILE BY HAND!
RScheme Build (v0.7.3.4-b7u, 2007-05-30)
**********************************************/

#include "gl_p.h"

/********************* Link file for the `gl' module *********************/


extern struct part_descr gl_part_glglue;

static struct part_descr *(parts_table[]) = {
    &gl_part_glglue,
    (struct part_descr *)0 };

struct module_descr module_gl = { "gl", parts_table,
	0 /* num roots */,
	(obj *)0,
	(struct root_info *)0,	(struct bcx_descr *)0, /* bc_extensions */
	0 /* num_bc_extensions */
    };

struct module_descr *RS_module_gl = &module_gl;
struct module_descr *RS_fm_gl( void )
{ return &module_gl; }
