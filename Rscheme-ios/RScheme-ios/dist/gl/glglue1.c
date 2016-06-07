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
static char sccsid[] = "@(#)gl ./glglue.scm [373934080] (RS v0.7.3.4-b7u, 2007-05-30)";

/************************** Function Definitions **************************/


/******************** Raw glue `gl-gen-fun-gl-points' ********************/
#define raw_GL_POINTS REG0

static char rsfn_gl_gen_fun_gl_points_name[] = "gl-gen-fun-gl-points";
#define FUNCTION rsfn_gl_gen_fun_gl_points_name

PROLOGUE(gl_gen_fun_gl_points)

BEGIN_FWD(gl_gen_fun_gl_points)
  FWD_MONOTONE(gl_gen_fun_gl_points_0)
END_FWD(gl_gen_fun_gl_points)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_points_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_POINTS,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_POINTS, NIL_OBJ ),
                 lookup_symbol( "GL_POINTS" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_POINTS);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_points)

BEGIN_BACK(gl_gen_fun_gl_points)
  BACK_MONOTONE(gl_gen_fun_gl_points_0)
END_BACK(gl_gen_fun_gl_points)

static struct function_descr gl_gen_fun_gl_points_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_points ),
	rsfn_gl_gen_fun_gl_points_name };
#undef FUNCTION

#undef raw_GL_POINTS

/***************** Raw glue `gl-gen-fun-gl-unsigned_byte' *****************/
#define raw_GL_UNSIGNED_BYTE REG0

static char rsfn_gl_gen_fun_gl_unsigned_byte_name[] = "gl-gen-fun-gl-unsigned_byte";
#define FUNCTION rsfn_gl_gen_fun_gl_unsigned_byte_name

PROLOGUE(gl_gen_fun_gl_unsigned_byte)

BEGIN_FWD(gl_gen_fun_gl_unsigned_byte)
  FWD_MONOTONE(gl_gen_fun_gl_unsigned_byte_0)
END_FWD(gl_gen_fun_gl_unsigned_byte)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_unsigned_byte_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_UNSIGNED_BYTE,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_UNSIGNED_BYTE, NIL_OBJ ),
                 lookup_symbol( "GL_UNSIGNED_BYTE" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_UNSIGNED_BYTE);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_unsigned_byte)

BEGIN_BACK(gl_gen_fun_gl_unsigned_byte)
  BACK_MONOTONE(gl_gen_fun_gl_unsigned_byte_0)
END_BACK(gl_gen_fun_gl_unsigned_byte)

static struct function_descr gl_gen_fun_gl_unsigned_byte_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_unsigned_byte ),
	rsfn_gl_gen_fun_gl_unsigned_byte_name };
#undef FUNCTION

#undef raw_GL_UNSIGNED_BYTE

/********************* Raw glue `gl-gen-fun-gl-float' *********************/
#define raw_GL_FLOAT REG0

static char rsfn_gl_gen_fun_gl_float_name[] = "gl-gen-fun-gl-float";
#define FUNCTION rsfn_gl_gen_fun_gl_float_name

PROLOGUE(gl_gen_fun_gl_float)

BEGIN_FWD(gl_gen_fun_gl_float)
  FWD_MONOTONE(gl_gen_fun_gl_float_0)
END_FWD(gl_gen_fun_gl_float)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_float_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_FLOAT,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_FLOAT, NIL_OBJ ),
                 lookup_symbol( "GL_FLOAT" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_FLOAT);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_float)

BEGIN_BACK(gl_gen_fun_gl_float)
  BACK_MONOTONE(gl_gen_fun_gl_float_0)
END_BACK(gl_gen_fun_gl_float)

static struct function_descr gl_gen_fun_gl_float_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_float ),
	rsfn_gl_gen_fun_gl_float_name };
#undef FUNCTION

#undef raw_GL_FLOAT

/****************** Raw glue `gl-gen-fun-gl-projection' ******************/
#define raw_GL_PROJECTION REG0

static char rsfn_gl_gen_fun_gl_projection_name[] = "gl-gen-fun-gl-projection";
#define FUNCTION rsfn_gl_gen_fun_gl_projection_name

PROLOGUE(gl_gen_fun_gl_projection)

BEGIN_FWD(gl_gen_fun_gl_projection)
  FWD_MONOTONE(gl_gen_fun_gl_projection_0)
END_FWD(gl_gen_fun_gl_projection)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_projection_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_PROJECTION,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_PROJECTION, NIL_OBJ ),
                 lookup_symbol( "GL_PROJECTION" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_PROJECTION);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_projection)

BEGIN_BACK(gl_gen_fun_gl_projection)
  BACK_MONOTONE(gl_gen_fun_gl_projection_0)
END_BACK(gl_gen_fun_gl_projection)

static struct function_descr gl_gen_fun_gl_projection_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_projection ),
	rsfn_gl_gen_fun_gl_projection_name };
#undef FUNCTION

#undef raw_GL_PROJECTION

/******************* Raw glue `gl-gen-fun-gl-modelview' *******************/
#define raw_GL_MODELVIEW REG0

static char rsfn_gl_gen_fun_gl_modelview_name[] = "gl-gen-fun-gl-modelview";
#define FUNCTION rsfn_gl_gen_fun_gl_modelview_name

PROLOGUE(gl_gen_fun_gl_modelview)

BEGIN_FWD(gl_gen_fun_gl_modelview)
  FWD_MONOTONE(gl_gen_fun_gl_modelview_0)
END_FWD(gl_gen_fun_gl_modelview)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_modelview_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_MODELVIEW,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_MODELVIEW, NIL_OBJ ),
                 lookup_symbol( "GL_MODELVIEW" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_MODELVIEW);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_modelview)

BEGIN_BACK(gl_gen_fun_gl_modelview)
  BACK_MONOTONE(gl_gen_fun_gl_modelview_0)
END_BACK(gl_gen_fun_gl_modelview)

static struct function_descr gl_gen_fun_gl_modelview_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_modelview ),
	rsfn_gl_gen_fun_gl_modelview_name };
#undef FUNCTION

#undef raw_GL_MODELVIEW

/*************** Raw glue `gl-gen-fun-gl-color-buffer_bit' ***************/
#define raw_GL_COLOR_BUFFER_BIT REG0

static char rsfn_gl_gen_fun_gl_color_buffer_bit_name[] = "gl-gen-fun-gl-color-buffer_bit";
#define FUNCTION rsfn_gl_gen_fun_gl_color_buffer_bit_name

PROLOGUE(gl_gen_fun_gl_color_buffer_bit)

BEGIN_FWD(gl_gen_fun_gl_color_buffer_bit)
  FWD_MONOTONE(gl_gen_fun_gl_color_buffer_bit_0)
END_FWD(gl_gen_fun_gl_color_buffer_bit)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_color_buffer_bit_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_COLOR_BUFFER_BIT,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_COLOR_BUFFER_BIT, NIL_OBJ ),
                 lookup_symbol( "GL_COLOR_BUFFER_BIT" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_COLOR_BUFFER_BIT);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_color_buffer_bit)

BEGIN_BACK(gl_gen_fun_gl_color_buffer_bit)
  BACK_MONOTONE(gl_gen_fun_gl_color_buffer_bit_0)
END_BACK(gl_gen_fun_gl_color_buffer_bit)

static struct function_descr gl_gen_fun_gl_color_buffer_bit_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_color_buffer_bit ),
	rsfn_gl_gen_fun_gl_color_buffer_bit_name };
#undef FUNCTION

#undef raw_GL_COLOR_BUFFER_BIT

/****************** Raw glue `gl-gen-fun-gl-texture-2d' ******************/
#define raw_GL_TEXTURE_2D REG0

static char rsfn_gl_gen_fun_gl_texture_2d_name[] = "gl-gen-fun-gl-texture-2d";
#define FUNCTION rsfn_gl_gen_fun_gl_texture_2d_name

PROLOGUE(gl_gen_fun_gl_texture_2d)

BEGIN_FWD(gl_gen_fun_gl_texture_2d)
  FWD_MONOTONE(gl_gen_fun_gl_texture_2d_0)
END_FWD(gl_gen_fun_gl_texture_2d)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_texture_2d_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_TEXTURE_2D,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_TEXTURE_2D, NIL_OBJ ),
                 lookup_symbol( "GL_TEXTURE_2D" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_TEXTURE_2D);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_texture_2d)

BEGIN_BACK(gl_gen_fun_gl_texture_2d)
  BACK_MONOTONE(gl_gen_fun_gl_texture_2d_0)
END_BACK(gl_gen_fun_gl_texture_2d)

static struct function_descr gl_gen_fun_gl_texture_2d_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_texture_2d ),
	rsfn_gl_gen_fun_gl_texture_2d_name };
#undef FUNCTION

#undef raw_GL_TEXTURE_2D

/************** Raw glue `gl-gen-fun-gl-texture-coord-array' **************/
#define raw_GL_TEXTURE_COORD_ARRAY REG0

static char rsfn_gl_gen_fun_gl_texture_coord_array_name[] = "gl-gen-fun-gl-texture-coord-array";
#define FUNCTION rsfn_gl_gen_fun_gl_texture_coord_array_name

PROLOGUE(gl_gen_fun_gl_texture_coord_array)

BEGIN_FWD(gl_gen_fun_gl_texture_coord_array)
  FWD_MONOTONE(gl_gen_fun_gl_texture_coord_array_0)
END_FWD(gl_gen_fun_gl_texture_coord_array)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_texture_coord_array_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_TEXTURE_COORD_ARRAY,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_TEXTURE_COORD_ARRAY, NIL_OBJ ),
                 lookup_symbol( "GL_TEXTURE_COORD_ARRAY" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_TEXTURE_COORD_ARRAY);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_texture_coord_array)

BEGIN_BACK(gl_gen_fun_gl_texture_coord_array)
  BACK_MONOTONE(gl_gen_fun_gl_texture_coord_array_0)
END_BACK(gl_gen_fun_gl_texture_coord_array)

static struct function_descr gl_gen_fun_gl_texture_coord_array_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_texture_coord_array ),
	rsfn_gl_gen_fun_gl_texture_coord_array_name };
#undef FUNCTION

#undef raw_GL_TEXTURE_COORD_ARRAY

/********************* Raw glue `gl-gen-fun-gl-short' *********************/
#define raw_GL_SHORT REG0

static char rsfn_gl_gen_fun_gl_short_name[] = "gl-gen-fun-gl-short";
#define FUNCTION rsfn_gl_gen_fun_gl_short_name

PROLOGUE(gl_gen_fun_gl_short)

BEGIN_FWD(gl_gen_fun_gl_short)
  FWD_MONOTONE(gl_gen_fun_gl_short_0)
END_FWD(gl_gen_fun_gl_short)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_short_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_SHORT,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_SHORT, NIL_OBJ ),
                 lookup_symbol( "GL_SHORT" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_SHORT);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_short)

BEGIN_BACK(gl_gen_fun_gl_short)
  BACK_MONOTONE(gl_gen_fun_gl_short_0)
END_BACK(gl_gen_fun_gl_short)

static struct function_descr gl_gen_fun_gl_short_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_short ),
	rsfn_gl_gen_fun_gl_short_name };
#undef FUNCTION

#undef raw_GL_SHORT

/************** Raw glue `gl-gen-fun-gl-texture-min-filter' **************/
#define raw_GL_TEXTURE_MIN_FILTER REG0

static char rsfn_gl_gen_fun_gl_texture_min_filter_name[] = "gl-gen-fun-gl-texture-min-filter";
#define FUNCTION rsfn_gl_gen_fun_gl_texture_min_filter_name

PROLOGUE(gl_gen_fun_gl_texture_min_filter)

BEGIN_FWD(gl_gen_fun_gl_texture_min_filter)
  FWD_MONOTONE(gl_gen_fun_gl_texture_min_filter_0)
END_FWD(gl_gen_fun_gl_texture_min_filter)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_texture_min_filter_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_TEXTURE_MIN_FILTER,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_TEXTURE_MIN_FILTER, NIL_OBJ ),
                 lookup_symbol( "GL_TEXTURE_MIN_FILTER" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_TEXTURE_MIN_FILTER);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_texture_min_filter)

BEGIN_BACK(gl_gen_fun_gl_texture_min_filter)
  BACK_MONOTONE(gl_gen_fun_gl_texture_min_filter_0)
END_BACK(gl_gen_fun_gl_texture_min_filter)

static struct function_descr gl_gen_fun_gl_texture_min_filter_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_texture_min_filter ),
	rsfn_gl_gen_fun_gl_texture_min_filter_name };
#undef FUNCTION

#undef raw_GL_TEXTURE_MIN_FILTER

/************** Raw glue `gl-gen-fun-gl-texture-mag-filter' **************/
#define raw_GL_TEXTURE_MAG_FILTER REG0

static char rsfn_gl_gen_fun_gl_texture_mag_filter_name[] = "gl-gen-fun-gl-texture-mag-filter";
#define FUNCTION rsfn_gl_gen_fun_gl_texture_mag_filter_name

PROLOGUE(gl_gen_fun_gl_texture_mag_filter)

BEGIN_FWD(gl_gen_fun_gl_texture_mag_filter)
  FWD_MONOTONE(gl_gen_fun_gl_texture_mag_filter_0)
END_FWD(gl_gen_fun_gl_texture_mag_filter)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_texture_mag_filter_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_TEXTURE_MAG_FILTER,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_TEXTURE_MAG_FILTER, NIL_OBJ ),
                 lookup_symbol( "GL_TEXTURE_MAG_FILTER" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_TEXTURE_MAG_FILTER);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_texture_mag_filter)

BEGIN_BACK(gl_gen_fun_gl_texture_mag_filter)
  BACK_MONOTONE(gl_gen_fun_gl_texture_mag_filter_0)
END_BACK(gl_gen_fun_gl_texture_mag_filter)

static struct function_descr gl_gen_fun_gl_texture_mag_filter_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_texture_mag_filter ),
	rsfn_gl_gen_fun_gl_texture_mag_filter_name };
#undef FUNCTION

#undef raw_GL_TEXTURE_MAG_FILTER

/******************** Raw glue `gl-gen-fun-gl-linear' ********************/
#define raw_GL_LINEAR REG0

static char rsfn_gl_gen_fun_gl_linear_name[] = "gl-gen-fun-gl-linear";
#define FUNCTION rsfn_gl_gen_fun_gl_linear_name

PROLOGUE(gl_gen_fun_gl_linear)

BEGIN_FWD(gl_gen_fun_gl_linear)
  FWD_MONOTONE(gl_gen_fun_gl_linear_0)
END_FWD(gl_gen_fun_gl_linear)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_linear_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_LINEAR,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_LINEAR, NIL_OBJ ),
                 lookup_symbol( "GL_LINEAR" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_LINEAR);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_linear)

BEGIN_BACK(gl_gen_fun_gl_linear)
  BACK_MONOTONE(gl_gen_fun_gl_linear_0)
END_BACK(gl_gen_fun_gl_linear)

static struct function_descr gl_gen_fun_gl_linear_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_linear ),
	rsfn_gl_gen_fun_gl_linear_name };
#undef FUNCTION

#undef raw_GL_LINEAR

/******************** Raw glue `gl-gen-fun-gl-nearest' ********************/
#define raw_GL_NEAREST REG0

static char rsfn_gl_gen_fun_gl_nearest_name[] = "gl-gen-fun-gl-nearest";
#define FUNCTION rsfn_gl_gen_fun_gl_nearest_name

PROLOGUE(gl_gen_fun_gl_nearest)

BEGIN_FWD(gl_gen_fun_gl_nearest)
  FWD_MONOTONE(gl_gen_fun_gl_nearest_0)
END_FWD(gl_gen_fun_gl_nearest)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_nearest_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_NEAREST,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_NEAREST, NIL_OBJ ),
                 lookup_symbol( "GL_NEAREST" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_NEAREST);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_nearest)

BEGIN_BACK(gl_gen_fun_gl_nearest)
  BACK_MONOTONE(gl_gen_fun_gl_nearest_0)
END_BACK(gl_gen_fun_gl_nearest)

static struct function_descr gl_gen_fun_gl_nearest_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_nearest ),
	rsfn_gl_gen_fun_gl_nearest_name };
#undef FUNCTION

#undef raw_GL_NEAREST

/************* Raw glue `gl-gen-fun-gl-linear-mipmap-linear' *************/
#define raw_GL_LINEAR_MIPMAP_LINEAR REG0

static char rsfn_gl_gen_fun_gl_linear_mipmap_linear_name[] = "gl-gen-fun-gl-linear-mipmap-linear";
#define FUNCTION rsfn_gl_gen_fun_gl_linear_mipmap_linear_name

PROLOGUE(gl_gen_fun_gl_linear_mipmap_linear)

BEGIN_FWD(gl_gen_fun_gl_linear_mipmap_linear)
  FWD_MONOTONE(gl_gen_fun_gl_linear_mipmap_linear_0)
END_FWD(gl_gen_fun_gl_linear_mipmap_linear)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_linear_mipmap_linear_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_LINEAR_MIPMAP_LINEAR,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_LINEAR_MIPMAP_LINEAR, NIL_OBJ ),
                 lookup_symbol( "GL_LINEAR_MIPMAP_LINEAR" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_LINEAR_MIPMAP_LINEAR);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_linear_mipmap_linear)

BEGIN_BACK(gl_gen_fun_gl_linear_mipmap_linear)
  BACK_MONOTONE(gl_gen_fun_gl_linear_mipmap_linear_0)
END_BACK(gl_gen_fun_gl_linear_mipmap_linear)

static struct function_descr gl_gen_fun_gl_linear_mipmap_linear_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_linear_mipmap_linear ),
	rsfn_gl_gen_fun_gl_linear_mipmap_linear_name };
#undef FUNCTION

#undef raw_GL_LINEAR_MIPMAP_LINEAR

/***************** Raw glue `gl-gen-fun-gl-vertex_array' *****************/
#define raw_GL_VERTEX_ARRAY REG0

static char rsfn_gl_gen_fun_gl_vertex_array_name[] = "gl-gen-fun-gl-vertex_array";
#define FUNCTION rsfn_gl_gen_fun_gl_vertex_array_name

PROLOGUE(gl_gen_fun_gl_vertex_array)

BEGIN_FWD(gl_gen_fun_gl_vertex_array)
  FWD_MONOTONE(gl_gen_fun_gl_vertex_array_0)
END_FWD(gl_gen_fun_gl_vertex_array)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_vertex_array_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_VERTEX_ARRAY,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_VERTEX_ARRAY, NIL_OBJ ),
                 lookup_symbol( "GL_VERTEX_ARRAY" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_VERTEX_ARRAY);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_vertex_array)

BEGIN_BACK(gl_gen_fun_gl_vertex_array)
  BACK_MONOTONE(gl_gen_fun_gl_vertex_array_0)
END_BACK(gl_gen_fun_gl_vertex_array)

static struct function_descr gl_gen_fun_gl_vertex_array_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_vertex_array ),
	rsfn_gl_gen_fun_gl_vertex_array_name };
#undef FUNCTION

#undef raw_GL_VERTEX_ARRAY

/****************** Raw glue `gl-gen-fun-gl-color_array' ******************/
#define raw_GL_COLOR_ARRAY REG0

static char rsfn_gl_gen_fun_gl_color_array_name[] = "gl-gen-fun-gl-color_array";
#define FUNCTION rsfn_gl_gen_fun_gl_color_array_name

PROLOGUE(gl_gen_fun_gl_color_array)

BEGIN_FWD(gl_gen_fun_gl_color_array)
  FWD_MONOTONE(gl_gen_fun_gl_color_array_0)
END_FWD(gl_gen_fun_gl_color_array)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_color_array_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_COLOR_ARRAY,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_COLOR_ARRAY, NIL_OBJ ),
                 lookup_symbol( "GL_COLOR_ARRAY" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_COLOR_ARRAY);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_color_array)

BEGIN_BACK(gl_gen_fun_gl_color_array)
  BACK_MONOTONE(gl_gen_fun_gl_color_array_0)
END_BACK(gl_gen_fun_gl_color_array)

static struct function_descr gl_gen_fun_gl_color_array_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_color_array ),
	rsfn_gl_gen_fun_gl_color_array_name };
#undef FUNCTION

#undef raw_GL_COLOR_ARRAY

/********************* Raw glue `gl-gen-fun-gl-blend' *********************/
#define raw_GL_BLEND REG0

static char rsfn_gl_gen_fun_gl_blend_name[] = "gl-gen-fun-gl-blend";
#define FUNCTION rsfn_gl_gen_fun_gl_blend_name

PROLOGUE(gl_gen_fun_gl_blend)

BEGIN_FWD(gl_gen_fun_gl_blend)
  FWD_MONOTONE(gl_gen_fun_gl_blend_0)
END_FWD(gl_gen_fun_gl_blend)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_blend_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_BLEND,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_BLEND, NIL_OBJ ),
                 lookup_symbol( "GL_BLEND" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_BLEND);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_blend)

BEGIN_BACK(gl_gen_fun_gl_blend)
  BACK_MONOTONE(gl_gen_fun_gl_blend_0)
END_BACK(gl_gen_fun_gl_blend)

static struct function_descr gl_gen_fun_gl_blend_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_blend ),
	rsfn_gl_gen_fun_gl_blend_name };
#undef FUNCTION

#undef raw_GL_BLEND

/******************* Raw glue `gl-gen-fun-gl-src-alpha' *******************/
#define raw_GL_SRC_ALPHA REG0

static char rsfn_gl_gen_fun_gl_src_alpha_name[] = "gl-gen-fun-gl-src-alpha";
#define FUNCTION rsfn_gl_gen_fun_gl_src_alpha_name

PROLOGUE(gl_gen_fun_gl_src_alpha)

BEGIN_FWD(gl_gen_fun_gl_src_alpha)
  FWD_MONOTONE(gl_gen_fun_gl_src_alpha_0)
END_FWD(gl_gen_fun_gl_src_alpha)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_src_alpha_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_SRC_ALPHA,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_SRC_ALPHA, NIL_OBJ ),
                 lookup_symbol( "GL_SRC_ALPHA" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_SRC_ALPHA);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_src_alpha)

BEGIN_BACK(gl_gen_fun_gl_src_alpha)
  BACK_MONOTONE(gl_gen_fun_gl_src_alpha_0)
END_BACK(gl_gen_fun_gl_src_alpha)

static struct function_descr gl_gen_fun_gl_src_alpha_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_src_alpha ),
	rsfn_gl_gen_fun_gl_src_alpha_name };
#undef FUNCTION

#undef raw_GL_SRC_ALPHA

/************** Raw glue `gl-gen-fun-gl-one-minus-src-alpha' **************/
#define raw_GL_ONE_MINUS_SRC_ALPHA REG0

static char rsfn_gl_gen_fun_gl_one_minus_src_alpha_name[] = "gl-gen-fun-gl-one-minus-src-alpha";
#define FUNCTION rsfn_gl_gen_fun_gl_one_minus_src_alpha_name

PROLOGUE(gl_gen_fun_gl_one_minus_src_alpha)

BEGIN_FWD(gl_gen_fun_gl_one_minus_src_alpha)
  FWD_MONOTONE(gl_gen_fun_gl_one_minus_src_alpha_0)
END_FWD(gl_gen_fun_gl_one_minus_src_alpha)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_one_minus_src_alpha_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_ONE_MINUS_SRC_ALPHA,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_ONE_MINUS_SRC_ALPHA, NIL_OBJ ),
                 lookup_symbol( "GL_ONE_MINUS_SRC_ALPHA" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_ONE_MINUS_SRC_ALPHA);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_one_minus_src_alpha)

BEGIN_BACK(gl_gen_fun_gl_one_minus_src_alpha)
  BACK_MONOTONE(gl_gen_fun_gl_one_minus_src_alpha_0)
END_BACK(gl_gen_fun_gl_one_minus_src_alpha)

static struct function_descr gl_gen_fun_gl_one_minus_src_alpha_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_one_minus_src_alpha ),
	rsfn_gl_gen_fun_gl_one_minus_src_alpha_name };
#undef FUNCTION

#undef raw_GL_ONE_MINUS_SRC_ALPHA

/******************* Raw glue `gl-gen-fun-gl-triangles' *******************/
#define raw_GL_TRIANGLES REG0

static char rsfn_gl_gen_fun_gl_triangles_name[] = "gl-gen-fun-gl-triangles";
#define FUNCTION rsfn_gl_gen_fun_gl_triangles_name

PROLOGUE(gl_gen_fun_gl_triangles)

BEGIN_FWD(gl_gen_fun_gl_triangles)
  FWD_MONOTONE(gl_gen_fun_gl_triangles_0)
END_FWD(gl_gen_fun_gl_triangles)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_triangles_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_TRIANGLES,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_TRIANGLES, NIL_OBJ ),
                 lookup_symbol( "GL_TRIANGLES" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_TRIANGLES);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_triangles)

BEGIN_BACK(gl_gen_fun_gl_triangles)
  BACK_MONOTONE(gl_gen_fun_gl_triangles_0)
END_BACK(gl_gen_fun_gl_triangles)

static struct function_descr gl_gen_fun_gl_triangles_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_triangles ),
	rsfn_gl_gen_fun_gl_triangles_name };
#undef FUNCTION

#undef raw_GL_TRIANGLES

/**************** Raw glue `gl-gen-fun-gl-triangle-strip' ****************/
#define raw_GL_TRIANGLE_STRIP REG0

static char rsfn_gl_gen_fun_gl_triangle_strip_name[] = "gl-gen-fun-gl-triangle-strip";
#define FUNCTION rsfn_gl_gen_fun_gl_triangle_strip_name

PROLOGUE(gl_gen_fun_gl_triangle_strip)

BEGIN_FWD(gl_gen_fun_gl_triangle_strip)
  FWD_MONOTONE(gl_gen_fun_gl_triangle_strip_0)
END_FWD(gl_gen_fun_gl_triangle_strip)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_triangle_strip_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_TRIANGLE_STRIP,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_TRIANGLE_STRIP, NIL_OBJ ),
                 lookup_symbol( "GL_TRIANGLE_STRIP" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_TRIANGLE_STRIP);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_triangle_strip)

BEGIN_BACK(gl_gen_fun_gl_triangle_strip)
  BACK_MONOTONE(gl_gen_fun_gl_triangle_strip_0)
END_BACK(gl_gen_fun_gl_triangle_strip)

static struct function_descr gl_gen_fun_gl_triangle_strip_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_triangle_strip ),
	rsfn_gl_gen_fun_gl_triangle_strip_name };
#undef FUNCTION

#undef raw_GL_TRIANGLE_STRIP

/***************** Raw glue `gl-gen-fun-gl-triangle-fan' *****************/
#define raw_GL_TRIANGLE_FAN REG0

static char rsfn_gl_gen_fun_gl_triangle_fan_name[] = "gl-gen-fun-gl-triangle-fan";
#define FUNCTION rsfn_gl_gen_fun_gl_triangle_fan_name

PROLOGUE(gl_gen_fun_gl_triangle_fan)

BEGIN_FWD(gl_gen_fun_gl_triangle_fan)
  FWD_MONOTONE(gl_gen_fun_gl_triangle_fan_0)
END_FWD(gl_gen_fun_gl_triangle_fan)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_gl_triangle_fan_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_TRIANGLE_FAN,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_TRIANGLE_FAN, NIL_OBJ ),
                 lookup_symbol( "GL_TRIANGLE_FAN" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_TRIANGLE_FAN);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_gl_triangle_fan)

BEGIN_BACK(gl_gen_fun_gl_triangle_fan)
  BACK_MONOTONE(gl_gen_fun_gl_triangle_fan_0)
END_BACK(gl_gen_fun_gl_triangle_fan)

static struct function_descr gl_gen_fun_gl_triangle_fan_descr = {
	&gl_part_glglue,
	JUMP_TABLE( gl_gen_fun_gl_triangle_fan ),
	rsfn_gl_gen_fun_gl_triangle_fan_name };
#undef FUNCTION

#undef raw_GL_TRIANGLE_FAN
/******************************* Postamble *******************************/
/**************************** Part Link Table ****************************/


static struct function_descr *(part_glglue_tab[]) = {
    &gl_gen_fun_gl_points_descr,
    &gl_gen_fun_gl_unsigned_byte_descr,
    &gl_gen_fun_gl_float_descr,
    &gl_gen_fun_gl_projection_descr,
    &gl_gen_fun_gl_modelview_descr,
    &gl_gen_fun_gl_color_buffer_bit_descr,
    &gl_gen_fun_gl_texture_2d_descr,
    &gl_gen_fun_gl_texture_coord_array_descr,
    &gl_gen_fun_gl_short_descr,
    &gl_gen_fun_gl_texture_min_filter_descr,
    &gl_gen_fun_gl_texture_mag_filter_descr,
    &gl_gen_fun_gl_linear_descr,
    &gl_gen_fun_gl_nearest_descr,
    &gl_gen_fun_gl_linear_mipmap_linear_descr,
    &gl_gen_fun_gl_vertex_array_descr,
    &gl_gen_fun_gl_color_array_descr,
    &gl_gen_fun_gl_blend_descr,
    &gl_gen_fun_gl_src_alpha_descr,
    &gl_gen_fun_gl_one_minus_src_alpha_descr,
    &gl_gen_fun_gl_triangles_descr,
    &gl_gen_fun_gl_triangle_strip_descr,
    &gl_gen_fun_gl_triangle_fan_descr,
    NULL };
struct part_descr gl_part_glglue = {
    373934080,
    &module_gl,
    part_glglue_tab,
    "glglue",
    0, sccsid };
#undef _MODULE_GL
#undef _SCM_GLGLUE
#undef _C_GLGLUE
