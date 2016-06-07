/**********************************************
THIS FILE WAS AUTOMATICALLY GENERATED, AND MAY
BE AUTOMATICALLY RE-GENERATED WHEN THE COMPILER
OR SOURCE CHANGES.  DO NOT MODIFY THIS FILE BY HAND!
RScheme Build (v0.7.3.4-b7u, 2007-05-30)
**********************************************/

/******************************** Preamble ********************************/

#define _MODULE_GL
#define _SCM_GLGLUE
#define _C_GLGLUE2
#include "gl_p.h"
#include <rscheme/vinsns.h>
extern struct module_descr module_gl;
extern struct part_descr gl_part_glglue2;
static char sccsid[] = "@(#)gl ./glglue.scm [162657282] (RS v0.7.3.4-b7u, 2007-05-30)";

/************************** Function Definitions **************************/


/************************ Raw glue `gl-cull-face' ************************/
#define e REG0

static char rsfn_gl_cull_face_name[] = "gl-cull-face";
#define FUNCTION rsfn_gl_cull_face_name

PROLOGUE(gl_cull_face)

BEGIN_FWD(gl_cull_face)
  FWD_MONOTONE(gl_cull_face_0)
END_FWD(gl_cull_face)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_cull_face_0)
{  COUNT_ARGS(1);

{
glCullFace(fx2int(e));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_cull_face)

BEGIN_BACK(gl_cull_face)
  BACK_MONOTONE(gl_cull_face_0)
END_BACK(gl_cull_face)

static struct function_descr gl_cull_face_descr = {
	&gl_part_glglue2,
	JUMP_TABLE( gl_cull_face ),
	rsfn_gl_cull_face_name };
#undef FUNCTION

#undef e

/*********************** Raw glue `gl-test-reshape' ***********************/
#define w REG0
#define h REG1

static char rsfn_gl_test_reshape_name[] = "gl-test-reshape";
#define FUNCTION rsfn_gl_test_reshape_name

PROLOGUE(gl_test_reshape)

BEGIN_FWD(gl_test_reshape)
  FWD_MONOTONE(gl_test_reshape_0)
END_FWD(gl_test_reshape)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_test_reshape_0)
{  COUNT_ARGS(2);

{

int height=fx2int(h);
int width=fx2int(h);
if (height==0)
{
height=1;
}

glViewport(0, 0, width, height);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
//gluPerspective(45.0f,(GLfloat)width/(GLfloat)height,0.1f,100.0f);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();

RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_test_reshape)

BEGIN_BACK(gl_test_reshape)
  BACK_MONOTONE(gl_test_reshape_0)
END_BACK(gl_test_reshape)

static struct function_descr gl_test_reshape_descr = {
	&gl_part_glglue2,
	JUMP_TABLE( gl_test_reshape ),
	rsfn_gl_test_reshape_name };
#undef FUNCTION

#undef w
#undef h
/******************************* Postamble *******************************/
/**************************** Part Link Table ****************************/


static struct function_descr *(part_glglue2_tab[]) = {
    &gl_cull_face_descr,
    &gl_test_reshape_descr,
    NULL };
struct part_descr gl_part_glglue2 = {
    162657282,
    &module_gl,
    part_glglue2_tab,
    "glglue2",
    0, sccsid };
#undef _MODULE_GL
#undef _SCM_GLGLUE
#undef _C_GLGLUE2
