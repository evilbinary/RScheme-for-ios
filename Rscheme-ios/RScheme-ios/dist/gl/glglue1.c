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
static char sccsid[] = "@(#)gl ./glglue.scm [380993536] (RS v0.7.3.4-b7u, 2007-05-30)";

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
glOrthof(extract_float(left),extract_float(right),extract_float(bottom),extract_float(top),extract_float(near),extract_float(far));
RETURN0();

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

/********************** Raw glue `gl-load-identity' **********************/

static char rsfn_gl_load_identity_name[] = "gl-load-identity";
#define FUNCTION rsfn_gl_load_identity_name

PROLOGUE(gl_load_identity)

BEGIN_FWD(gl_load_identity)
  FWD_MONOTONE(gl_load_identity_0)
END_FWD(gl_load_identity)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_load_identity_0)
{  COUNT_ARGS(0);

{
glLoadIdentity();
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_load_identity)

BEGIN_BACK(gl_load_identity)
  BACK_MONOTONE(gl_load_identity_0)
END_BACK(gl_load_identity)

static struct function_descr gl_load_identity_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_load_identity ),
	rsfn_gl_load_identity_name };
#undef FUNCTION


/************************** Raw glue `gl-clear' **************************/
#define i REG0

static char rsfn_gl_clear_name[] = "gl-clear";
#define FUNCTION rsfn_gl_clear_name

PROLOGUE(gl_clear)

BEGIN_FWD(gl_clear)
  FWD_MONOTONE(gl_clear_0)
END_FWD(gl_clear)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_clear_0)
{  COUNT_ARGS(1);

{
glClear(fx2int(i));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_clear)

BEGIN_BACK(gl_clear)
  BACK_MONOTONE(gl_clear_0)
END_BACK(gl_clear)

static struct function_descr gl_clear_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_clear ),
	rsfn_gl_clear_name };
#undef FUNCTION

#undef i

/*********************** Raw glue `gl-matrix-mode' ***********************/
#define mode REG0

static char rsfn_gl_matrix_mode_name[] = "gl-matrix-mode";
#define FUNCTION rsfn_gl_matrix_mode_name

PROLOGUE(gl_matrix_mode)

BEGIN_FWD(gl_matrix_mode)
  FWD_MONOTONE(gl_matrix_mode_0)
END_FWD(gl_matrix_mode)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_matrix_mode_0)
{  COUNT_ARGS(1);

{
 glMatrixMode(fx2int(mode));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_matrix_mode)

BEGIN_BACK(gl_matrix_mode)
  BACK_MONOTONE(gl_matrix_mode_0)
END_BACK(gl_matrix_mode)

static struct function_descr gl_matrix_mode_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_matrix_mode ),
	rsfn_gl_matrix_mode_name };
#undef FUNCTION

#undef mode
/******************************* Postamble *******************************/
/**************************** Part Link Table ****************************/


static struct function_descr *(part_glglue_tab[]) = {
    &gl_ortho_descr,
    &gl_load_identity_descr,
    &gl_clear_descr,
    &gl_matrix_mode_descr,
    NULL };
struct part_descr gl_part_glglue = {
    380993536,
    &module_gl,
    part_glglue_tab,
    "glglue",
    0, sccsid };
#undef _MODULE_GL
#undef _SCM_GLGLUE
#undef _C_GLGLUE
