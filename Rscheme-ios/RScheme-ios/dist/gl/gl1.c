/**********************************************
THIS FILE WAS AUTOMATICALLY GENERATED, AND MAY
BE AUTOMATICALLY RE-GENERATED WHEN THE COMPILER
OR SOURCE CHANGES.  DO NOT MODIFY THIS FILE BY HAND!
RScheme Build (v0.7.3.4-b7u, 2007-05-30)
**********************************************/

/******************************** Preamble ********************************/

#define _MODULE_GL
#define _SCM_GL
#define _C_GL
#include "gl_p.h"
#include <rscheme/vinsns.h>
extern struct module_descr module_gl;
extern struct part_descr gl_part_gl;
static char sccsid[] = "@(#)gl ./gl.scm [401336321] (RS v0.7.3.4-b7u, 2007-05-30)";

/************************** Function Definitions **************************/


/******************** Raw glue `gl-gen-fun-GL-POINTS' ********************/
#define raw_GL_POINTS REG0

static char rsfn_gl_gen_fun_GL_POINTS_name[] = "gl-gen-fun-GL-POINTS";
#define FUNCTION rsfn_gl_gen_fun_GL_POINTS_name

PROLOGUE(gl_gen_fun_GL_POINTS)

BEGIN_FWD(gl_gen_fun_GL_POINTS)
  FWD_MONOTONE(gl_gen_fun_GL_POINTS_0)
END_FWD(gl_gen_fun_GL_POINTS)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_POINTS_0)
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

EPILOGUE(gl_gen_fun_GL_POINTS)

BEGIN_BACK(gl_gen_fun_GL_POINTS)
  BACK_MONOTONE(gl_gen_fun_GL_POINTS_0)
END_BACK(gl_gen_fun_GL_POINTS)

static struct function_descr gl_gen_fun_GL_POINTS_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_POINTS ),
	rsfn_gl_gen_fun_GL_POINTS_name };
#undef FUNCTION

#undef raw_GL_POINTS

/***************** Raw glue `gl-gen-fun-GL-UNSIGNED_BYTE' *****************/
#define raw_GL_UNSIGNED_BYTE REG0

static char rsfn_gl_gen_fun_GL_UNSIGNED_BYTE_name[] = "gl-gen-fun-GL-UNSIGNED_BYTE";
#define FUNCTION rsfn_gl_gen_fun_GL_UNSIGNED_BYTE_name

PROLOGUE(gl_gen_fun_GL_UNSIGNED_BYTE)

BEGIN_FWD(gl_gen_fun_GL_UNSIGNED_BYTE)
  FWD_MONOTONE(gl_gen_fun_GL_UNSIGNED_BYTE_0)
END_FWD(gl_gen_fun_GL_UNSIGNED_BYTE)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_UNSIGNED_BYTE_0)
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

EPILOGUE(gl_gen_fun_GL_UNSIGNED_BYTE)

BEGIN_BACK(gl_gen_fun_GL_UNSIGNED_BYTE)
  BACK_MONOTONE(gl_gen_fun_GL_UNSIGNED_BYTE_0)
END_BACK(gl_gen_fun_GL_UNSIGNED_BYTE)

static struct function_descr gl_gen_fun_GL_UNSIGNED_BYTE_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_UNSIGNED_BYTE ),
	rsfn_gl_gen_fun_GL_UNSIGNED_BYTE_name };
#undef FUNCTION

#undef raw_GL_UNSIGNED_BYTE

/********************* Raw glue `gl-gen-fun-GL-FLOAT' *********************/
#define raw_GL_FLOAT REG0

static char rsfn_gl_gen_fun_GL_FLOAT_name[] = "gl-gen-fun-GL-FLOAT";
#define FUNCTION rsfn_gl_gen_fun_GL_FLOAT_name

PROLOGUE(gl_gen_fun_GL_FLOAT)

BEGIN_FWD(gl_gen_fun_GL_FLOAT)
  FWD_MONOTONE(gl_gen_fun_GL_FLOAT_0)
END_FWD(gl_gen_fun_GL_FLOAT)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_FLOAT_0)
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

EPILOGUE(gl_gen_fun_GL_FLOAT)

BEGIN_BACK(gl_gen_fun_GL_FLOAT)
  BACK_MONOTONE(gl_gen_fun_GL_FLOAT_0)
END_BACK(gl_gen_fun_GL_FLOAT)

static struct function_descr gl_gen_fun_GL_FLOAT_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_FLOAT ),
	rsfn_gl_gen_fun_GL_FLOAT_name };
#undef FUNCTION

#undef raw_GL_FLOAT

/****************** Raw glue `gl-gen-fun-GL-PROJECTION' ******************/
#define raw_GL_PROJECTION REG0

static char rsfn_gl_gen_fun_GL_PROJECTION_name[] = "gl-gen-fun-GL-PROJECTION";
#define FUNCTION rsfn_gl_gen_fun_GL_PROJECTION_name

PROLOGUE(gl_gen_fun_GL_PROJECTION)

BEGIN_FWD(gl_gen_fun_GL_PROJECTION)
  FWD_MONOTONE(gl_gen_fun_GL_PROJECTION_0)
END_FWD(gl_gen_fun_GL_PROJECTION)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_PROJECTION_0)
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

EPILOGUE(gl_gen_fun_GL_PROJECTION)

BEGIN_BACK(gl_gen_fun_GL_PROJECTION)
  BACK_MONOTONE(gl_gen_fun_GL_PROJECTION_0)
END_BACK(gl_gen_fun_GL_PROJECTION)

static struct function_descr gl_gen_fun_GL_PROJECTION_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_PROJECTION ),
	rsfn_gl_gen_fun_GL_PROJECTION_name };
#undef FUNCTION

#undef raw_GL_PROJECTION

/******************* Raw glue `gl-gen-fun-GL-MODELVIEW' *******************/
#define raw_GL_MODELVIEW REG0

static char rsfn_gl_gen_fun_GL_MODELVIEW_name[] = "gl-gen-fun-GL-MODELVIEW";
#define FUNCTION rsfn_gl_gen_fun_GL_MODELVIEW_name

PROLOGUE(gl_gen_fun_GL_MODELVIEW)

BEGIN_FWD(gl_gen_fun_GL_MODELVIEW)
  FWD_MONOTONE(gl_gen_fun_GL_MODELVIEW_0)
END_FWD(gl_gen_fun_GL_MODELVIEW)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_MODELVIEW_0)
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

EPILOGUE(gl_gen_fun_GL_MODELVIEW)

BEGIN_BACK(gl_gen_fun_GL_MODELVIEW)
  BACK_MONOTONE(gl_gen_fun_GL_MODELVIEW_0)
END_BACK(gl_gen_fun_GL_MODELVIEW)

static struct function_descr gl_gen_fun_GL_MODELVIEW_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_MODELVIEW ),
	rsfn_gl_gen_fun_GL_MODELVIEW_name };
#undef FUNCTION

#undef raw_GL_MODELVIEW

/*************** Raw glue `gl-gen-fun-GL-COLOR-BUFFER-BIT' ***************/
#define raw_GL_COLOR_BUFFER_BIT REG0

static char rsfn_gl_gen_fun_GL_COLOR_BUFFER_BIT_name[] = "gl-gen-fun-GL-COLOR-BUFFER-BIT";
#define FUNCTION rsfn_gl_gen_fun_GL_COLOR_BUFFER_BIT_name

PROLOGUE(gl_gen_fun_GL_COLOR_BUFFER_BIT)

BEGIN_FWD(gl_gen_fun_GL_COLOR_BUFFER_BIT)
  FWD_MONOTONE(gl_gen_fun_GL_COLOR_BUFFER_BIT_0)
END_FWD(gl_gen_fun_GL_COLOR_BUFFER_BIT)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_COLOR_BUFFER_BIT_0)
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

EPILOGUE(gl_gen_fun_GL_COLOR_BUFFER_BIT)

BEGIN_BACK(gl_gen_fun_GL_COLOR_BUFFER_BIT)
  BACK_MONOTONE(gl_gen_fun_GL_COLOR_BUFFER_BIT_0)
END_BACK(gl_gen_fun_GL_COLOR_BUFFER_BIT)

static struct function_descr gl_gen_fun_GL_COLOR_BUFFER_BIT_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_COLOR_BUFFER_BIT ),
	rsfn_gl_gen_fun_GL_COLOR_BUFFER_BIT_name };
#undef FUNCTION

#undef raw_GL_COLOR_BUFFER_BIT

/****************** Raw glue `gl-gen-fun-GL-TEXTURE-2D' ******************/
#define raw_GL_TEXTURE_2D REG0

static char rsfn_gl_gen_fun_GL_TEXTURE_2D_name[] = "gl-gen-fun-GL-TEXTURE-2D";
#define FUNCTION rsfn_gl_gen_fun_GL_TEXTURE_2D_name

PROLOGUE(gl_gen_fun_GL_TEXTURE_2D)

BEGIN_FWD(gl_gen_fun_GL_TEXTURE_2D)
  FWD_MONOTONE(gl_gen_fun_GL_TEXTURE_2D_0)
END_FWD(gl_gen_fun_GL_TEXTURE_2D)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_TEXTURE_2D_0)
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

EPILOGUE(gl_gen_fun_GL_TEXTURE_2D)

BEGIN_BACK(gl_gen_fun_GL_TEXTURE_2D)
  BACK_MONOTONE(gl_gen_fun_GL_TEXTURE_2D_0)
END_BACK(gl_gen_fun_GL_TEXTURE_2D)

static struct function_descr gl_gen_fun_GL_TEXTURE_2D_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_TEXTURE_2D ),
	rsfn_gl_gen_fun_GL_TEXTURE_2D_name };
#undef FUNCTION

#undef raw_GL_TEXTURE_2D

/************** Raw glue `gl-gen-fun-GL-TEXTURE-COORD-ARRAY' **************/
#define raw_GL_TEXTURE_COORD_ARRAY REG0

static char rsfn_gl_gen_fun_GL_TEXTURE_COORD_ARRAY_name[] = "gl-gen-fun-GL-TEXTURE-COORD-ARRAY";
#define FUNCTION rsfn_gl_gen_fun_GL_TEXTURE_COORD_ARRAY_name

PROLOGUE(gl_gen_fun_GL_TEXTURE_COORD_ARRAY)

BEGIN_FWD(gl_gen_fun_GL_TEXTURE_COORD_ARRAY)
  FWD_MONOTONE(gl_gen_fun_GL_TEXTURE_COORD_ARRAY_0)
END_FWD(gl_gen_fun_GL_TEXTURE_COORD_ARRAY)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_TEXTURE_COORD_ARRAY_0)
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

EPILOGUE(gl_gen_fun_GL_TEXTURE_COORD_ARRAY)

BEGIN_BACK(gl_gen_fun_GL_TEXTURE_COORD_ARRAY)
  BACK_MONOTONE(gl_gen_fun_GL_TEXTURE_COORD_ARRAY_0)
END_BACK(gl_gen_fun_GL_TEXTURE_COORD_ARRAY)

static struct function_descr gl_gen_fun_GL_TEXTURE_COORD_ARRAY_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_TEXTURE_COORD_ARRAY ),
	rsfn_gl_gen_fun_GL_TEXTURE_COORD_ARRAY_name };
#undef FUNCTION

#undef raw_GL_TEXTURE_COORD_ARRAY

/********************* Raw glue `gl-gen-fun-GL-SHORT' *********************/
#define raw_GL_SHORT REG0

static char rsfn_gl_gen_fun_GL_SHORT_name[] = "gl-gen-fun-GL-SHORT";
#define FUNCTION rsfn_gl_gen_fun_GL_SHORT_name

PROLOGUE(gl_gen_fun_GL_SHORT)

BEGIN_FWD(gl_gen_fun_GL_SHORT)
  FWD_MONOTONE(gl_gen_fun_GL_SHORT_0)
END_FWD(gl_gen_fun_GL_SHORT)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_SHORT_0)
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

EPILOGUE(gl_gen_fun_GL_SHORT)

BEGIN_BACK(gl_gen_fun_GL_SHORT)
  BACK_MONOTONE(gl_gen_fun_GL_SHORT_0)
END_BACK(gl_gen_fun_GL_SHORT)

static struct function_descr gl_gen_fun_GL_SHORT_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_SHORT ),
	rsfn_gl_gen_fun_GL_SHORT_name };
#undef FUNCTION

#undef raw_GL_SHORT

/************** Raw glue `gl-gen-fun-GL-TEXTURE-MIN-FILTER' **************/
#define raw_GL_TEXTURE_MIN_FILTER REG0

static char rsfn_gl_gen_fun_GL_TEXTURE_MIN_FILTER_name[] = "gl-gen-fun-GL-TEXTURE-MIN-FILTER";
#define FUNCTION rsfn_gl_gen_fun_GL_TEXTURE_MIN_FILTER_name

PROLOGUE(gl_gen_fun_GL_TEXTURE_MIN_FILTER)

BEGIN_FWD(gl_gen_fun_GL_TEXTURE_MIN_FILTER)
  FWD_MONOTONE(gl_gen_fun_GL_TEXTURE_MIN_FILTER_0)
END_FWD(gl_gen_fun_GL_TEXTURE_MIN_FILTER)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_TEXTURE_MIN_FILTER_0)
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

EPILOGUE(gl_gen_fun_GL_TEXTURE_MIN_FILTER)

BEGIN_BACK(gl_gen_fun_GL_TEXTURE_MIN_FILTER)
  BACK_MONOTONE(gl_gen_fun_GL_TEXTURE_MIN_FILTER_0)
END_BACK(gl_gen_fun_GL_TEXTURE_MIN_FILTER)

static struct function_descr gl_gen_fun_GL_TEXTURE_MIN_FILTER_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_TEXTURE_MIN_FILTER ),
	rsfn_gl_gen_fun_GL_TEXTURE_MIN_FILTER_name };
#undef FUNCTION

#undef raw_GL_TEXTURE_MIN_FILTER

/************** Raw glue `gl-gen-fun-GL-TEXTURE-MAG-FILTER' **************/
#define raw_GL_TEXTURE_MAG_FILTER REG0

static char rsfn_gl_gen_fun_GL_TEXTURE_MAG_FILTER_name[] = "gl-gen-fun-GL-TEXTURE-MAG-FILTER";
#define FUNCTION rsfn_gl_gen_fun_GL_TEXTURE_MAG_FILTER_name

PROLOGUE(gl_gen_fun_GL_TEXTURE_MAG_FILTER)

BEGIN_FWD(gl_gen_fun_GL_TEXTURE_MAG_FILTER)
  FWD_MONOTONE(gl_gen_fun_GL_TEXTURE_MAG_FILTER_0)
END_FWD(gl_gen_fun_GL_TEXTURE_MAG_FILTER)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_TEXTURE_MAG_FILTER_0)
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

EPILOGUE(gl_gen_fun_GL_TEXTURE_MAG_FILTER)

BEGIN_BACK(gl_gen_fun_GL_TEXTURE_MAG_FILTER)
  BACK_MONOTONE(gl_gen_fun_GL_TEXTURE_MAG_FILTER_0)
END_BACK(gl_gen_fun_GL_TEXTURE_MAG_FILTER)

static struct function_descr gl_gen_fun_GL_TEXTURE_MAG_FILTER_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_TEXTURE_MAG_FILTER ),
	rsfn_gl_gen_fun_GL_TEXTURE_MAG_FILTER_name };
#undef FUNCTION

#undef raw_GL_TEXTURE_MAG_FILTER

/******************** Raw glue `gl-gen-fun-GL-LINEAR' ********************/
#define raw_GL_LINEAR REG0

static char rsfn_gl_gen_fun_GL_LINEAR_name[] = "gl-gen-fun-GL-LINEAR";
#define FUNCTION rsfn_gl_gen_fun_GL_LINEAR_name

PROLOGUE(gl_gen_fun_GL_LINEAR)

BEGIN_FWD(gl_gen_fun_GL_LINEAR)
  FWD_MONOTONE(gl_gen_fun_GL_LINEAR_0)
END_FWD(gl_gen_fun_GL_LINEAR)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_LINEAR_0)
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

EPILOGUE(gl_gen_fun_GL_LINEAR)

BEGIN_BACK(gl_gen_fun_GL_LINEAR)
  BACK_MONOTONE(gl_gen_fun_GL_LINEAR_0)
END_BACK(gl_gen_fun_GL_LINEAR)

static struct function_descr gl_gen_fun_GL_LINEAR_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_LINEAR ),
	rsfn_gl_gen_fun_GL_LINEAR_name };
#undef FUNCTION

#undef raw_GL_LINEAR

/******************** Raw glue `gl-gen-fun-GL-NEAREST' ********************/
#define raw_GL_NEAREST REG0

static char rsfn_gl_gen_fun_GL_NEAREST_name[] = "gl-gen-fun-GL-NEAREST";
#define FUNCTION rsfn_gl_gen_fun_GL_NEAREST_name

PROLOGUE(gl_gen_fun_GL_NEAREST)

BEGIN_FWD(gl_gen_fun_GL_NEAREST)
  FWD_MONOTONE(gl_gen_fun_GL_NEAREST_0)
END_FWD(gl_gen_fun_GL_NEAREST)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_NEAREST_0)
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

EPILOGUE(gl_gen_fun_GL_NEAREST)

BEGIN_BACK(gl_gen_fun_GL_NEAREST)
  BACK_MONOTONE(gl_gen_fun_GL_NEAREST_0)
END_BACK(gl_gen_fun_GL_NEAREST)

static struct function_descr gl_gen_fun_GL_NEAREST_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_NEAREST ),
	rsfn_gl_gen_fun_GL_NEAREST_name };
#undef FUNCTION

#undef raw_GL_NEAREST

/************* Raw glue `gl-gen-fun-GL-LINEAR-MIPMAP-LINEAR' *************/
#define raw_GL_LINEAR_MIPMAP_LINEAR REG0

static char rsfn_gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR_name[] = "gl-gen-fun-GL-LINEAR-MIPMAP-LINEAR";
#define FUNCTION rsfn_gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR_name

PROLOGUE(gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR)

BEGIN_FWD(gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR)
  FWD_MONOTONE(gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR_0)
END_FWD(gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR_0)
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

EPILOGUE(gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR)

BEGIN_BACK(gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR)
  BACK_MONOTONE(gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR_0)
END_BACK(gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR)

static struct function_descr gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR ),
	rsfn_gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR_name };
#undef FUNCTION

#undef raw_GL_LINEAR_MIPMAP_LINEAR

/***************** Raw glue `gl-gen-fun-GL-VERTEX_ARRAY' *****************/
#define raw_GL_VERTEX_ARRAY REG0

static char rsfn_gl_gen_fun_GL_VERTEX_ARRAY_name[] = "gl-gen-fun-GL-VERTEX_ARRAY";
#define FUNCTION rsfn_gl_gen_fun_GL_VERTEX_ARRAY_name

PROLOGUE(gl_gen_fun_GL_VERTEX_ARRAY)

BEGIN_FWD(gl_gen_fun_GL_VERTEX_ARRAY)
  FWD_MONOTONE(gl_gen_fun_GL_VERTEX_ARRAY_0)
END_FWD(gl_gen_fun_GL_VERTEX_ARRAY)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_VERTEX_ARRAY_0)
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

EPILOGUE(gl_gen_fun_GL_VERTEX_ARRAY)

BEGIN_BACK(gl_gen_fun_GL_VERTEX_ARRAY)
  BACK_MONOTONE(gl_gen_fun_GL_VERTEX_ARRAY_0)
END_BACK(gl_gen_fun_GL_VERTEX_ARRAY)

static struct function_descr gl_gen_fun_GL_VERTEX_ARRAY_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_VERTEX_ARRAY ),
	rsfn_gl_gen_fun_GL_VERTEX_ARRAY_name };
#undef FUNCTION

#undef raw_GL_VERTEX_ARRAY

/****************** Raw glue `gl-gen-fun-GL-COLOR_ARRAY' ******************/
#define raw_GL_COLOR_ARRAY REG0

static char rsfn_gl_gen_fun_GL_COLOR_ARRAY_name[] = "gl-gen-fun-GL-COLOR_ARRAY";
#define FUNCTION rsfn_gl_gen_fun_GL_COLOR_ARRAY_name

PROLOGUE(gl_gen_fun_GL_COLOR_ARRAY)

BEGIN_FWD(gl_gen_fun_GL_COLOR_ARRAY)
  FWD_MONOTONE(gl_gen_fun_GL_COLOR_ARRAY_0)
END_FWD(gl_gen_fun_GL_COLOR_ARRAY)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_COLOR_ARRAY_0)
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

EPILOGUE(gl_gen_fun_GL_COLOR_ARRAY)

BEGIN_BACK(gl_gen_fun_GL_COLOR_ARRAY)
  BACK_MONOTONE(gl_gen_fun_GL_COLOR_ARRAY_0)
END_BACK(gl_gen_fun_GL_COLOR_ARRAY)

static struct function_descr gl_gen_fun_GL_COLOR_ARRAY_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_COLOR_ARRAY ),
	rsfn_gl_gen_fun_GL_COLOR_ARRAY_name };
#undef FUNCTION

#undef raw_GL_COLOR_ARRAY

/********************* Raw glue `gl-gen-fun-GL-BLEND' *********************/
#define raw_GL_BLEND REG0

static char rsfn_gl_gen_fun_GL_BLEND_name[] = "gl-gen-fun-GL-BLEND";
#define FUNCTION rsfn_gl_gen_fun_GL_BLEND_name

PROLOGUE(gl_gen_fun_GL_BLEND)

BEGIN_FWD(gl_gen_fun_GL_BLEND)
  FWD_MONOTONE(gl_gen_fun_GL_BLEND_0)
END_FWD(gl_gen_fun_GL_BLEND)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_BLEND_0)
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

EPILOGUE(gl_gen_fun_GL_BLEND)

BEGIN_BACK(gl_gen_fun_GL_BLEND)
  BACK_MONOTONE(gl_gen_fun_GL_BLEND_0)
END_BACK(gl_gen_fun_GL_BLEND)

static struct function_descr gl_gen_fun_GL_BLEND_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_BLEND ),
	rsfn_gl_gen_fun_GL_BLEND_name };
#undef FUNCTION

#undef raw_GL_BLEND

/******************* Raw glue `gl-gen-fun-GL-SRC-ALPHA' *******************/
#define raw_GL_SRC_ALPHA REG0

static char rsfn_gl_gen_fun_GL_SRC_ALPHA_name[] = "gl-gen-fun-GL-SRC-ALPHA";
#define FUNCTION rsfn_gl_gen_fun_GL_SRC_ALPHA_name

PROLOGUE(gl_gen_fun_GL_SRC_ALPHA)

BEGIN_FWD(gl_gen_fun_GL_SRC_ALPHA)
  FWD_MONOTONE(gl_gen_fun_GL_SRC_ALPHA_0)
END_FWD(gl_gen_fun_GL_SRC_ALPHA)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_SRC_ALPHA_0)
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

EPILOGUE(gl_gen_fun_GL_SRC_ALPHA)

BEGIN_BACK(gl_gen_fun_GL_SRC_ALPHA)
  BACK_MONOTONE(gl_gen_fun_GL_SRC_ALPHA_0)
END_BACK(gl_gen_fun_GL_SRC_ALPHA)

static struct function_descr gl_gen_fun_GL_SRC_ALPHA_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_SRC_ALPHA ),
	rsfn_gl_gen_fun_GL_SRC_ALPHA_name };
#undef FUNCTION

#undef raw_GL_SRC_ALPHA

/************** Raw glue `gl-gen-fun-GL-ONE-MINUS-SRC-ALPHA' **************/
#define raw_GL_ONE_MINUS_SRC_ALPHA REG0

static char rsfn_gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA_name[] = "gl-gen-fun-GL-ONE-MINUS-SRC-ALPHA";
#define FUNCTION rsfn_gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA_name

PROLOGUE(gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA)

BEGIN_FWD(gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA)
  FWD_MONOTONE(gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA_0)
END_FWD(gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA_0)
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

EPILOGUE(gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA)

BEGIN_BACK(gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA)
  BACK_MONOTONE(gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA_0)
END_BACK(gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA)

static struct function_descr gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA ),
	rsfn_gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA_name };
#undef FUNCTION

#undef raw_GL_ONE_MINUS_SRC_ALPHA

/******************* Raw glue `gl-gen-fun-GL-TRIANGLES' *******************/
#define raw_GL_TRIANGLES REG0

static char rsfn_gl_gen_fun_GL_TRIANGLES_name[] = "gl-gen-fun-GL-TRIANGLES";
#define FUNCTION rsfn_gl_gen_fun_GL_TRIANGLES_name

PROLOGUE(gl_gen_fun_GL_TRIANGLES)

BEGIN_FWD(gl_gen_fun_GL_TRIANGLES)
  FWD_MONOTONE(gl_gen_fun_GL_TRIANGLES_0)
END_FWD(gl_gen_fun_GL_TRIANGLES)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_TRIANGLES_0)
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

EPILOGUE(gl_gen_fun_GL_TRIANGLES)

BEGIN_BACK(gl_gen_fun_GL_TRIANGLES)
  BACK_MONOTONE(gl_gen_fun_GL_TRIANGLES_0)
END_BACK(gl_gen_fun_GL_TRIANGLES)

static struct function_descr gl_gen_fun_GL_TRIANGLES_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_TRIANGLES ),
	rsfn_gl_gen_fun_GL_TRIANGLES_name };
#undef FUNCTION

#undef raw_GL_TRIANGLES

/**************** Raw glue `gl-gen-fun-GL-TRIANGLE-STRIP' ****************/
#define raw_GL_TRIANGLE_STRIP REG0

static char rsfn_gl_gen_fun_GL_TRIANGLE_STRIP_name[] = "gl-gen-fun-GL-TRIANGLE-STRIP";
#define FUNCTION rsfn_gl_gen_fun_GL_TRIANGLE_STRIP_name

PROLOGUE(gl_gen_fun_GL_TRIANGLE_STRIP)

BEGIN_FWD(gl_gen_fun_GL_TRIANGLE_STRIP)
  FWD_MONOTONE(gl_gen_fun_GL_TRIANGLE_STRIP_0)
END_FWD(gl_gen_fun_GL_TRIANGLE_STRIP)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_TRIANGLE_STRIP_0)
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

EPILOGUE(gl_gen_fun_GL_TRIANGLE_STRIP)

BEGIN_BACK(gl_gen_fun_GL_TRIANGLE_STRIP)
  BACK_MONOTONE(gl_gen_fun_GL_TRIANGLE_STRIP_0)
END_BACK(gl_gen_fun_GL_TRIANGLE_STRIP)

static struct function_descr gl_gen_fun_GL_TRIANGLE_STRIP_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_TRIANGLE_STRIP ),
	rsfn_gl_gen_fun_GL_TRIANGLE_STRIP_name };
#undef FUNCTION

#undef raw_GL_TRIANGLE_STRIP

/***************** Raw glue `gl-gen-fun-GL-TRIANGLE-FAN' *****************/
#define raw_GL_TRIANGLE_FAN REG0

static char rsfn_gl_gen_fun_GL_TRIANGLE_FAN_name[] = "gl-gen-fun-GL-TRIANGLE-FAN";
#define FUNCTION rsfn_gl_gen_fun_GL_TRIANGLE_FAN_name

PROLOGUE(gl_gen_fun_GL_TRIANGLE_FAN)

BEGIN_FWD(gl_gen_fun_GL_TRIANGLE_FAN)
  FWD_MONOTONE(gl_gen_fun_GL_TRIANGLE_FAN_0)
END_FWD(gl_gen_fun_GL_TRIANGLE_FAN)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_TRIANGLE_FAN_0)
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

EPILOGUE(gl_gen_fun_GL_TRIANGLE_FAN)

BEGIN_BACK(gl_gen_fun_GL_TRIANGLE_FAN)
  BACK_MONOTONE(gl_gen_fun_GL_TRIANGLE_FAN_0)
END_BACK(gl_gen_fun_GL_TRIANGLE_FAN)

static struct function_descr gl_gen_fun_GL_TRIANGLE_FAN_descr = {
	&gl_part_gl,
	JUMP_TABLE( gl_gen_fun_GL_TRIANGLE_FAN ),
	rsfn_gl_gen_fun_GL_TRIANGLE_FAN_name };
#undef FUNCTION

#undef raw_GL_TRIANGLE_FAN
/******************************* Postamble *******************************/
/**************************** Part Link Table ****************************/


static struct function_descr *(part_gl_tab[]) = {
    &gl_gen_fun_GL_POINTS_descr,
    &gl_gen_fun_GL_UNSIGNED_BYTE_descr,
    &gl_gen_fun_GL_FLOAT_descr,
    &gl_gen_fun_GL_PROJECTION_descr,
    &gl_gen_fun_GL_MODELVIEW_descr,
    &gl_gen_fun_GL_COLOR_BUFFER_BIT_descr,
    &gl_gen_fun_GL_TEXTURE_2D_descr,
    &gl_gen_fun_GL_TEXTURE_COORD_ARRAY_descr,
    &gl_gen_fun_GL_SHORT_descr,
    &gl_gen_fun_GL_TEXTURE_MIN_FILTER_descr,
    &gl_gen_fun_GL_TEXTURE_MAG_FILTER_descr,
    &gl_gen_fun_GL_LINEAR_descr,
    &gl_gen_fun_GL_NEAREST_descr,
    &gl_gen_fun_GL_LINEAR_MIPMAP_LINEAR_descr,
    &gl_gen_fun_GL_VERTEX_ARRAY_descr,
    &gl_gen_fun_GL_COLOR_ARRAY_descr,
    &gl_gen_fun_GL_BLEND_descr,
    &gl_gen_fun_GL_SRC_ALPHA_descr,
    &gl_gen_fun_GL_ONE_MINUS_SRC_ALPHA_descr,
    &gl_gen_fun_GL_TRIANGLES_descr,
    &gl_gen_fun_GL_TRIANGLE_STRIP_descr,
    &gl_gen_fun_GL_TRIANGLE_FAN_descr,
    NULL };
struct part_descr gl_part_gl = {
    401336321,
    &module_gl,
    part_gl_tab,
    "gl",
    0, sccsid };
#undef _MODULE_GL
#undef _SCM_GL
#undef _C_GL
