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
static char sccsid[] = "@(#)gl ./glglue.scm [377300992] (RS v0.7.3.4-b7u, 2007-05-30)";

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

/************************* Raw glue `gl-frustum' *************************/
#define left REG0
#define right REG1
#define bottom REG2
#define top REG3
#define near REG4
#define far REG5

static char rsfn_gl_frustum_name[] = "gl-frustum";
#define FUNCTION rsfn_gl_frustum_name

PROLOGUE(gl_frustum)

BEGIN_FWD(gl_frustum)
  FWD_MONOTONE(gl_frustum_0)
END_FWD(gl_frustum)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_frustum_0)
{  COUNT_ARGS(6);

{
glFrustumf(extract_float(left),extract_float(right),extract_float(bottom),extract_float(top),extract_float(near),extract_float(far));
RETURN0();

}}
#undef FPLACE_CODE

EPILOGUE(gl_frustum)

BEGIN_BACK(gl_frustum)
  BACK_MONOTONE(gl_frustum_0)
END_BACK(gl_frustum)

static struct function_descr gl_frustum_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_frustum ),
	rsfn_gl_frustum_name };
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

/*********************** Raw glue `gl-clear-color' ***********************/
#define red REG0
#define green REG1
#define blue REG2
#define alpha REG3

static char rsfn_gl_clear_color_name[] = "gl-clear-color";
#define FUNCTION rsfn_gl_clear_color_name

PROLOGUE(gl_clear_color)

BEGIN_FWD(gl_clear_color)
  FWD_MONOTONE(gl_clear_color_0)
END_FWD(gl_clear_color)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_clear_color_0)
{  COUNT_ARGS(4);

{
glClearColor(extract_float(red),extract_float(green),extract_float(blue),extract_float(alpha));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_clear_color)

BEGIN_BACK(gl_clear_color)
  BACK_MONOTONE(gl_clear_color_0)
END_BACK(gl_clear_color)

static struct function_descr gl_clear_color_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_clear_color ),
	rsfn_gl_clear_color_name };
#undef FUNCTION

#undef red
#undef green
#undef blue
#undef alpha

/************************* Raw glue `gl-color4f' *************************/
#define red REG0
#define green REG1
#define blue REG2
#define alpha REG3

static char rsfn_gl_color4f_name[] = "gl-color4f";
#define FUNCTION rsfn_gl_color4f_name

PROLOGUE(gl_color4f)

BEGIN_FWD(gl_color4f)
  FWD_MONOTONE(gl_color4f_0)
END_FWD(gl_color4f)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_color4f_0)
{  COUNT_ARGS(4);

{
glColor4f(extract_float(red),extract_float(green),extract_float(blue),extract_float(alpha));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_color4f)

BEGIN_BACK(gl_color4f)
  BACK_MONOTONE(gl_color4f_0)
END_BACK(gl_color4f)

static struct function_descr gl_color4f_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_color4f ),
	rsfn_gl_color4f_name };
#undef FUNCTION

#undef red
#undef green
#undef blue
#undef alpha

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

/*********************** Raw glue `gl-push-matrix' ***********************/

static char rsfn_gl_push_matrix_name[] = "gl-push-matrix";
#define FUNCTION rsfn_gl_push_matrix_name

PROLOGUE(gl_push_matrix)

BEGIN_FWD(gl_push_matrix)
  FWD_MONOTONE(gl_push_matrix_0)
END_FWD(gl_push_matrix)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_push_matrix_0)
{  COUNT_ARGS(0);

{
glPushMatrix();
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_push_matrix)

BEGIN_BACK(gl_push_matrix)
  BACK_MONOTONE(gl_push_matrix_0)
END_BACK(gl_push_matrix)

static struct function_descr gl_push_matrix_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_push_matrix ),
	rsfn_gl_push_matrix_name };
#undef FUNCTION


/************************ Raw glue `gl-pop-matrix' ************************/

static char rsfn_gl_pop_matrix_name[] = "gl-pop-matrix";
#define FUNCTION rsfn_gl_pop_matrix_name

PROLOGUE(gl_pop_matrix)

BEGIN_FWD(gl_pop_matrix)
  FWD_MONOTONE(gl_pop_matrix_0)
END_FWD(gl_pop_matrix)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_pop_matrix_0)
{  COUNT_ARGS(0);

{
glPopMatrix();
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_pop_matrix)

BEGIN_BACK(gl_pop_matrix)
  BACK_MONOTONE(gl_pop_matrix_0)
END_BACK(gl_pop_matrix)

static struct function_descr gl_pop_matrix_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_pop_matrix ),
	rsfn_gl_pop_matrix_name };
#undef FUNCTION


/************************ Raw glue `gl-translatef' ************************/
#define x REG0
#define y REG1
#define z REG2

static char rsfn_gl_translatef_name[] = "gl-translatef";
#define FUNCTION rsfn_gl_translatef_name

PROLOGUE(gl_translatef)

BEGIN_FWD(gl_translatef)
  FWD_MONOTONE(gl_translatef_0)
END_FWD(gl_translatef)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_translatef_0)
{  COUNT_ARGS(3);

{
glTranslatef(extract_float(x),extract_float(y),extract_float(z));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_translatef)

BEGIN_BACK(gl_translatef)
  BACK_MONOTONE(gl_translatef_0)
END_BACK(gl_translatef)

static struct function_descr gl_translatef_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_translatef ),
	rsfn_gl_translatef_name };
#undef FUNCTION

#undef x
#undef y
#undef z

/************************** Raw glue `gl-scalef' **************************/
#define x REG0
#define y REG1
#define z REG2

static char rsfn_gl_scalef_name[] = "gl-scalef";
#define FUNCTION rsfn_gl_scalef_name

PROLOGUE(gl_scalef)

BEGIN_FWD(gl_scalef)
  FWD_MONOTONE(gl_scalef_0)
END_FWD(gl_scalef)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_scalef_0)
{  COUNT_ARGS(3);

{
glScalef(extract_float(x),extract_float(y),extract_float(z));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_scalef)

BEGIN_BACK(gl_scalef)
  BACK_MONOTONE(gl_scalef_0)
END_BACK(gl_scalef)

static struct function_descr gl_scalef_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_scalef ),
	rsfn_gl_scalef_name };
#undef FUNCTION

#undef x
#undef y
#undef z

/************************* Raw glue `gl-rotatef' *************************/
#define angle REG0
#define x REG1
#define y REG2
#define z REG3

static char rsfn_gl_rotatef_name[] = "gl-rotatef";
#define FUNCTION rsfn_gl_rotatef_name

PROLOGUE(gl_rotatef)

BEGIN_FWD(gl_rotatef)
  FWD_MONOTONE(gl_rotatef_0)
END_FWD(gl_rotatef)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_rotatef_0)
{  COUNT_ARGS(4);

{
glRotatef(extract_float(angle), extract_float(x),extract_float(y),extract_float(z));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_rotatef)

BEGIN_BACK(gl_rotatef)
  BACK_MONOTONE(gl_rotatef_0)
END_BACK(gl_rotatef)

static struct function_descr gl_rotatef_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_rotatef ),
	rsfn_gl_rotatef_name };
#undef FUNCTION

#undef angle
#undef x
#undef y
#undef z

/************************** Raw glue `gl-enable' **************************/
#define e REG0

static char rsfn_gl_enable_name[] = "gl-enable";
#define FUNCTION rsfn_gl_enable_name

PROLOGUE(gl_enable)

BEGIN_FWD(gl_enable)
  FWD_MONOTONE(gl_enable_0)
END_FWD(gl_enable)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_enable_0)
{  COUNT_ARGS(1);

{
glEnable(fx2int(e));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_enable)

BEGIN_BACK(gl_enable)
  BACK_MONOTONE(gl_enable_0)
END_BACK(gl_enable)

static struct function_descr gl_enable_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_enable ),
	rsfn_gl_enable_name };
#undef FUNCTION

#undef e

/************************* Raw glue `gl-disable' *************************/
#define e REG0

static char rsfn_gl_disable_name[] = "gl-disable";
#define FUNCTION rsfn_gl_disable_name

PROLOGUE(gl_disable)

BEGIN_FWD(gl_disable)
  FWD_MONOTONE(gl_disable_0)
END_FWD(gl_disable)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_disable_0)
{  COUNT_ARGS(1);

{
glDisable(fx2int(e));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_disable)

BEGIN_BACK(gl_disable)
  BACK_MONOTONE(gl_disable_0)
END_BACK(gl_disable)

static struct function_descr gl_disable_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_disable ),
	rsfn_gl_disable_name };
#undef FUNCTION

#undef e

/************************ Raw glue `gl-blend-func' ************************/
#define sfactor REG0
#define dfactor REG1

static char rsfn_gl_blend_func_name[] = "gl-blend-func";
#define FUNCTION rsfn_gl_blend_func_name

PROLOGUE(gl_blend_func)

BEGIN_FWD(gl_blend_func)
  FWD_MONOTONE(gl_blend_func_0)
END_FWD(gl_blend_func)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_blend_func_0)
{  COUNT_ARGS(2);

{
glBlendFunc(extract_float(sfactor),extract_float(dfactor) );
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_blend_func)

BEGIN_BACK(gl_blend_func)
  BACK_MONOTONE(gl_blend_func_0)
END_BACK(gl_blend_func)

static struct function_descr gl_blend_func_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_blend_func ),
	rsfn_gl_blend_func_name };
#undef FUNCTION

#undef sfactor
#undef dfactor

/******************* Raw glue `gl-enable-client-state' *******************/
#define e REG0

static char rsfn_gl_enable_client_state_name[] = "gl-enable-client-state";
#define FUNCTION rsfn_gl_enable_client_state_name

PROLOGUE(gl_enable_client_state)

BEGIN_FWD(gl_enable_client_state)
  FWD_MONOTONE(gl_enable_client_state_0)
END_FWD(gl_enable_client_state)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_enable_client_state_0)
{  COUNT_ARGS(1);

{
glEnableClientState(fx2int(e));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_enable_client_state)

BEGIN_BACK(gl_enable_client_state)
  BACK_MONOTONE(gl_enable_client_state_0)
END_BACK(gl_enable_client_state)

static struct function_descr gl_enable_client_state_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_enable_client_state ),
	rsfn_gl_enable_client_state_name };
#undef FUNCTION

#undef e

/******************* Raw glue `gl-disable-client-state' *******************/
#define e REG0

static char rsfn_gl_disable_client_state_name[] = "gl-disable-client-state";
#define FUNCTION rsfn_gl_disable_client_state_name

PROLOGUE(gl_disable_client_state)

BEGIN_FWD(gl_disable_client_state)
  FWD_MONOTONE(gl_disable_client_state_0)
END_FWD(gl_disable_client_state)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_disable_client_state_0)
{  COUNT_ARGS(1);

{
glDisableClientState(fx2int(e));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_disable_client_state)

BEGIN_BACK(gl_disable_client_state)
  BACK_MONOTONE(gl_disable_client_state_0)
END_BACK(gl_disable_client_state)

static struct function_descr gl_disable_client_state_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_disable_client_state ),
	rsfn_gl_disable_client_state_name };
#undef FUNCTION

#undef e

/*********************** Raw glue `gl-draw-arrays' ***********************/
#define mode REG0
#define first REG1
#define count REG2

static char rsfn_gl_draw_arrays_name[] = "gl-draw-arrays";
#define FUNCTION rsfn_gl_draw_arrays_name

PROLOGUE(gl_draw_arrays)

BEGIN_FWD(gl_draw_arrays)
  FWD_MONOTONE(gl_draw_arrays_0)
END_FWD(gl_draw_arrays)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_draw_arrays_0)
{  COUNT_ARGS(3);

{
glDrawArrays(extract_float(mode),extract_float(first),extract_float(count));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_draw_arrays)

BEGIN_BACK(gl_draw_arrays)
  BACK_MONOTONE(gl_draw_arrays_0)
END_BACK(gl_draw_arrays)

static struct function_descr gl_draw_arrays_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_draw_arrays ),
	rsfn_gl_draw_arrays_name };
#undef FUNCTION

#undef mode
#undef first
#undef count

/*********************** Raw glue `gl-bind-texture' ***********************/
#define target REG0
#define texture REG1

static char rsfn_gl_bind_texture_name[] = "gl-bind-texture";
#define FUNCTION rsfn_gl_bind_texture_name

PROLOGUE(gl_bind_texture)

BEGIN_FWD(gl_bind_texture)
  FWD_MONOTONE(gl_bind_texture_0)
END_FWD(gl_bind_texture)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_bind_texture_0)
{  COUNT_ARGS(2);

{
glBindTexture(fx2int(target),fx2int(texture) );
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_bind_texture)

BEGIN_BACK(gl_bind_texture)
  BACK_MONOTONE(gl_bind_texture_0)
END_BACK(gl_bind_texture)

static struct function_descr gl_bind_texture_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_bind_texture ),
	rsfn_gl_bind_texture_name };
#undef FUNCTION

#undef target
#undef texture

/********************* Raw glue `gl-text-parameteri' *********************/
#define target REG0
#define pname REG1
#define param REG2

static char rsfn_gl_text_parameteri_name[] = "gl-text-parameteri";
#define FUNCTION rsfn_gl_text_parameteri_name

PROLOGUE(gl_text_parameteri)

BEGIN_FWD(gl_text_parameteri)
  FWD_MONOTONE(gl_text_parameteri_0)
END_FWD(gl_text_parameteri)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_text_parameteri_0)
{  COUNT_ARGS(3);

{
glTexParameteri(fx2int(target),fx2int(pname),fx2int(param) );
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_text_parameteri)

BEGIN_BACK(gl_text_parameteri)
  BACK_MONOTONE(gl_text_parameteri_0)
END_BACK(gl_text_parameteri)

static struct function_descr gl_text_parameteri_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_text_parameteri ),
	rsfn_gl_text_parameteri_name };
#undef FUNCTION

#undef target
#undef pname
#undef param

/************************ Raw glue `gl-line-width' ************************/
#define s REG0

static char rsfn_gl_line_width_name[] = "gl-line-width";
#define FUNCTION rsfn_gl_line_width_name

PROLOGUE(gl_line_width)

BEGIN_FWD(gl_line_width)
  FWD_MONOTONE(gl_line_width_0)
END_FWD(gl_line_width)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_line_width_0)
{  COUNT_ARGS(1);

{
glLineWidth(extract_float(s));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_line_width)

BEGIN_BACK(gl_line_width)
  BACK_MONOTONE(gl_line_width_0)
END_BACK(gl_line_width)

static struct function_descr gl_line_width_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_line_width ),
	rsfn_gl_line_width_name };
#undef FUNCTION

#undef s

/************************ Raw glue `gl-depth-mask' ************************/
#define e REG0

static char rsfn_gl_depth_mask_name[] = "gl-depth-mask";
#define FUNCTION rsfn_gl_depth_mask_name

PROLOGUE(gl_depth_mask)

BEGIN_FWD(gl_depth_mask)
  FWD_MONOTONE(gl_depth_mask_0)
END_FWD(gl_depth_mask)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_depth_mask_0)
{  COUNT_ARGS(1);

{
glDepthMask(fx2int(e));
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_depth_mask)

BEGIN_BACK(gl_depth_mask)
  BACK_MONOTONE(gl_depth_mask_0)
END_BACK(gl_depth_mask)

static struct function_descr gl_depth_mask_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_depth_mask ),
	rsfn_gl_depth_mask_name };
#undef FUNCTION

#undef e

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
	&gl_part_glglue,
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
	&gl_part_glglue,
	JUMP_TABLE( gl_test_reshape ),
	rsfn_gl_test_reshape_name };
#undef FUNCTION

#undef w
#undef h
/******************************* Postamble *******************************/
/**************************** Part Link Table ****************************/


static struct function_descr *(part_glglue_tab[]) = {
    &gl_ortho_descr,
    &gl_frustum_descr,
    &gl_load_identity_descr,
    &gl_clear_descr,
    &gl_clear_color_descr,
    &gl_color4f_descr,
    &gl_matrix_mode_descr,
    &gl_push_matrix_descr,
    &gl_pop_matrix_descr,
    &gl_translatef_descr,
    &gl_scalef_descr,
    &gl_rotatef_descr,
    &gl_enable_descr,
    &gl_disable_descr,
    &gl_blend_func_descr,
    &gl_enable_client_state_descr,
    &gl_disable_client_state_descr,
    &gl_draw_arrays_descr,
    &gl_bind_texture_descr,
    &gl_text_parameteri_descr,
    &gl_line_width_descr,
    &gl_depth_mask_descr,
    &gl_cull_face_descr,
    &gl_test_reshape_descr,
    NULL };
struct part_descr gl_part_glglue = {
    377300992,
    &module_gl,
    part_glglue_tab,
    "glglue",
    0, sccsid };
#undef _MODULE_GL
#undef _SCM_GLGLUE
#undef _C_GLGLUE
