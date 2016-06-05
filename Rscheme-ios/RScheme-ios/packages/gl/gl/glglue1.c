/**********************************************
THIS FILE WAS AUTOMATICALLY GENERATED, AND MAY
BE AUTOMATICALLY RE-GENERATED WHEN THE COMPILER
OR SOURCE CHANGES.  DO NOT MODIFY THIS FILE BY HAND!
RScheme Build (v0.7.3.4-b7u, 2007-05-30)
**********************************************/

/******************************** Preamble ********************************/

#define _MODULE_GL
#define _SCM_GLGLUE
#define _C_GLGLUE
#include "gl_p.h"
#include <rscheme/vinsns.h>
extern struct module_descr module_gl;
extern struct part_descr gl_part_glglue;
static char sccsid[] = "@(#)gl ./glglue.scm [502266880] (RS v0.7.3.4-b7u, 2007-05-30)";

/************************** Function Definitions **************************/


/************************** Raw glue `gl-ortho' **************************/
#define left REG0
#define right REG1
#define bottom REG2
#define top REG3
#define near REG4
#define far REG5

static char rsfn_gl_ortho_name[] = "gl-ortho";
#define FUNCTION rsfn_gl_ortho_name

PROLOGUE(gl_ortho)

BEGIN_FWD(gl_ortho)
  FWD_MONOTONE(gl_ortho_0)
END_FWD(gl_ortho)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_ortho_0)
{  COUNT_ARGS(6);

{
    
    glOrthof(___arg1,___arg2,___arg3,___arg4,___arg5,___arg6);
}}
#undef FPLACE_CODE

EPILOGUE(gl_ortho)

BEGIN_BACK(gl_ortho)
  BACK_MONOTONE(gl_ortho_0)
END_BACK(gl_ortho)

static struct function_descr gl_ortho_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_ortho ),
	rsfn_gl_ortho_name };
#undef FUNCTION

#undef left
#undef right
#undef bottom
#undef top
#undef near
#undef far
/******************************* Postamble *******************************/
/**************************** Part Link Table ****************************/


static struct function_descr *(part_glglue_tab[]) = {
    &gl_ortho_descr,
    NULL };
struct part_descr gl_part_glglue = {
    502266880,
    &module_gl,
    part_glglue_tab,
    "glglue",
    0, sccsid };
#undef _MODULE_GL
#undef _SCM_GLGLUE
#undef _C_GLGLUE
