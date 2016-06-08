/**********************************************
THIS FILE WAS AUTOMATICALLY GENERATED, AND MAY
BE AUTOMATICALLY RE-GENERATED WHEN THE COMPILER
OR SOURCE CHANGES.  DO NOT MODIFY THIS FILE BY HAND!
RScheme Build (v0.7.3.4-b7u, 2007-05-30)
**********************************************/

/******************************** Preamble ********************************/

#define _MODULE_GL
#define _SCM_GL
#define _C_GL1
#include "gl_p.h"
#include <rscheme/vinsns.h>
extern struct module_descr module_gl;
extern struct part_descr gl_part_gl1;
static char sccsid[] = "@(#)gl ./gl.scm [42105858] (RS v0.7.3.4-b7u, 2007-05-30)";

/************************** Function Definitions **************************/


/********************* Raw glue `gl-gen-fun-GL-LINES' *********************/
#define raw_GL_LINES REG0

static char rsfn_gl_gen_fun_GL_LINES_name[] = "gl-gen-fun-GL-LINES";
#define FUNCTION rsfn_gl_gen_fun_GL_LINES_name

PROLOGUE(gl_gen_fun_GL_LINES)

BEGIN_FWD(gl_gen_fun_GL_LINES)
  FWD_MONOTONE(gl_gen_fun_GL_LINES_0)
END_FWD(gl_gen_fun_GL_LINES)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_LINES_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_LINES,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_LINES, NIL_OBJ ),
                 lookup_symbol( "GL_LINES" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_LINES);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_LINES)

BEGIN_BACK(gl_gen_fun_GL_LINES)
  BACK_MONOTONE(gl_gen_fun_GL_LINES_0)
END_BACK(gl_gen_fun_GL_LINES)

static struct function_descr gl_gen_fun_GL_LINES_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_LINES ),
	rsfn_gl_gen_fun_GL_LINES_name };
#undef FUNCTION

#undef raw_GL_LINES

/****************** Raw glue `gl-gen-fun-GL-LINE-STRIP' ******************/
#define raw_GL_LINE_STRIP REG0

static char rsfn_gl_gen_fun_GL_LINE_STRIP_name[] = "gl-gen-fun-GL-LINE-STRIP";
#define FUNCTION rsfn_gl_gen_fun_GL_LINE_STRIP_name

PROLOGUE(gl_gen_fun_GL_LINE_STRIP)

BEGIN_FWD(gl_gen_fun_GL_LINE_STRIP)
  FWD_MONOTONE(gl_gen_fun_GL_LINE_STRIP_0)
END_FWD(gl_gen_fun_GL_LINE_STRIP)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_LINE_STRIP_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_LINE_STRIP,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_LINE_STRIP, NIL_OBJ ),
                 lookup_symbol( "GL_LINE_STRIP" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_LINE_STRIP);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_LINE_STRIP)

BEGIN_BACK(gl_gen_fun_GL_LINE_STRIP)
  BACK_MONOTONE(gl_gen_fun_GL_LINE_STRIP_0)
END_BACK(gl_gen_fun_GL_LINE_STRIP)

static struct function_descr gl_gen_fun_GL_LINE_STRIP_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_LINE_STRIP ),
	rsfn_gl_gen_fun_GL_LINE_STRIP_name };
#undef FUNCTION

#undef raw_GL_LINE_STRIP

/******************* Raw glue `gl-gen-fun-GL-LINE-LOOP' *******************/
#define raw_GL_LINE_LOOP REG0

static char rsfn_gl_gen_fun_GL_LINE_LOOP_name[] = "gl-gen-fun-GL-LINE-LOOP";
#define FUNCTION rsfn_gl_gen_fun_GL_LINE_LOOP_name

PROLOGUE(gl_gen_fun_GL_LINE_LOOP)

BEGIN_FWD(gl_gen_fun_GL_LINE_LOOP)
  FWD_MONOTONE(gl_gen_fun_GL_LINE_LOOP_0)
END_FWD(gl_gen_fun_GL_LINE_LOOP)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_LINE_LOOP_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_LINE_LOOP,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_LINE_LOOP, NIL_OBJ ),
                 lookup_symbol( "GL_LINE_LOOP" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_LINE_LOOP);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_LINE_LOOP)

BEGIN_BACK(gl_gen_fun_GL_LINE_LOOP)
  BACK_MONOTONE(gl_gen_fun_GL_LINE_LOOP_0)
END_BACK(gl_gen_fun_GL_LINE_LOOP)

static struct function_descr gl_gen_fun_GL_LINE_LOOP_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_LINE_LOOP ),
	rsfn_gl_gen_fun_GL_LINE_LOOP_name };
#undef FUNCTION

#undef raw_GL_LINE_LOOP

/********************** Raw glue `gl-gen-fun-GL-RGB' **********************/
#define raw_GL_RGB REG0

static char rsfn_gl_gen_fun_GL_RGB_name[] = "gl-gen-fun-GL-RGB";
#define FUNCTION rsfn_gl_gen_fun_GL_RGB_name

PROLOGUE(gl_gen_fun_GL_RGB)

BEGIN_FWD(gl_gen_fun_GL_RGB)
  FWD_MONOTONE(gl_gen_fun_GL_RGB_0)
END_FWD(gl_gen_fun_GL_RGB)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_RGB_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_RGB,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_RGB, NIL_OBJ ),
                 lookup_symbol( "GL_RGB" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_RGB);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_RGB)

BEGIN_BACK(gl_gen_fun_GL_RGB)
  BACK_MONOTONE(gl_gen_fun_GL_RGB_0)
END_BACK(gl_gen_fun_GL_RGB)

static struct function_descr gl_gen_fun_GL_RGB_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_RGB ),
	rsfn_gl_gen_fun_GL_RGB_name };
#undef FUNCTION

#undef raw_GL_RGB

/********************* Raw glue `gl-gen-fun-GL-RGBA' *********************/
#define raw_GL_RGBA REG0

static char rsfn_gl_gen_fun_GL_RGBA_name[] = "gl-gen-fun-GL-RGBA";
#define FUNCTION rsfn_gl_gen_fun_GL_RGBA_name

PROLOGUE(gl_gen_fun_GL_RGBA)

BEGIN_FWD(gl_gen_fun_GL_RGBA)
  FWD_MONOTONE(gl_gen_fun_GL_RGBA_0)
END_FWD(gl_gen_fun_GL_RGBA)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_RGBA_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_RGBA,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_RGBA, NIL_OBJ ),
                 lookup_symbol( "GL_RGBA" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_RGBA);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_RGBA)

BEGIN_BACK(gl_gen_fun_GL_RGBA)
  BACK_MONOTONE(gl_gen_fun_GL_RGBA_0)
END_BACK(gl_gen_fun_GL_RGBA)

static struct function_descr gl_gen_fun_GL_RGBA_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_RGBA ),
	rsfn_gl_gen_fun_GL_RGBA_name };
#undef FUNCTION

#undef raw_GL_RGBA

/********************* Raw glue `gl-gen-fun-GL-ALPHA' *********************/
#define raw_GL_ALPHA REG0

static char rsfn_gl_gen_fun_GL_ALPHA_name[] = "gl-gen-fun-GL-ALPHA";
#define FUNCTION rsfn_gl_gen_fun_GL_ALPHA_name

PROLOGUE(gl_gen_fun_GL_ALPHA)

BEGIN_FWD(gl_gen_fun_GL_ALPHA)
  FWD_MONOTONE(gl_gen_fun_GL_ALPHA_0)
END_FWD(gl_gen_fun_GL_ALPHA)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_ALPHA_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_ALPHA,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_ALPHA, NIL_OBJ ),
                 lookup_symbol( "GL_ALPHA" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_ALPHA);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_ALPHA)

BEGIN_BACK(gl_gen_fun_GL_ALPHA)
  BACK_MONOTONE(gl_gen_fun_GL_ALPHA_0)
END_BACK(gl_gen_fun_GL_ALPHA)

static struct function_descr gl_gen_fun_GL_ALPHA_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_ALPHA ),
	rsfn_gl_gen_fun_GL_ALPHA_name };
#undef FUNCTION

#undef raw_GL_ALPHA

/***************** Raw glue `gl-gen-fun-GL-SCISSOR-TEST' *****************/
#define raw_GL_SCISSOR_TEST REG0

static char rsfn_gl_gen_fun_GL_SCISSOR_TEST_name[] = "gl-gen-fun-GL-SCISSOR-TEST";
#define FUNCTION rsfn_gl_gen_fun_GL_SCISSOR_TEST_name

PROLOGUE(gl_gen_fun_GL_SCISSOR_TEST)

BEGIN_FWD(gl_gen_fun_GL_SCISSOR_TEST)
  FWD_MONOTONE(gl_gen_fun_GL_SCISSOR_TEST_0)
END_FWD(gl_gen_fun_GL_SCISSOR_TEST)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_SCISSOR_TEST_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_SCISSOR_TEST,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_SCISSOR_TEST, NIL_OBJ ),
                 lookup_symbol( "GL_SCISSOR_TEST" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_SCISSOR_TEST);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_SCISSOR_TEST)

BEGIN_BACK(gl_gen_fun_GL_SCISSOR_TEST)
  BACK_MONOTONE(gl_gen_fun_GL_SCISSOR_TEST_0)
END_BACK(gl_gen_fun_GL_SCISSOR_TEST)

static struct function_descr gl_gen_fun_GL_SCISSOR_TEST_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_SCISSOR_TEST ),
	rsfn_gl_gen_fun_GL_SCISSOR_TEST_name };
#undef FUNCTION

#undef raw_GL_SCISSOR_TEST

/**************** Raw glue `gl-gen-fun-GL-TEXTURE-WRAP_S' ****************/
#define raw_GL_TEXTURE_WRAP_S REG0

static char rsfn_gl_gen_fun_GL_TEXTURE_WRAP_S_name[] = "gl-gen-fun-GL-TEXTURE-WRAP_S";
#define FUNCTION rsfn_gl_gen_fun_GL_TEXTURE_WRAP_S_name

PROLOGUE(gl_gen_fun_GL_TEXTURE_WRAP_S)

BEGIN_FWD(gl_gen_fun_GL_TEXTURE_WRAP_S)
  FWD_MONOTONE(gl_gen_fun_GL_TEXTURE_WRAP_S_0)
END_FWD(gl_gen_fun_GL_TEXTURE_WRAP_S)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_TEXTURE_WRAP_S_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_TEXTURE_WRAP_S,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_TEXTURE_WRAP_S, NIL_OBJ ),
                 lookup_symbol( "GL_TEXTURE_WRAP_S" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_TEXTURE_WRAP_S);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_TEXTURE_WRAP_S)

BEGIN_BACK(gl_gen_fun_GL_TEXTURE_WRAP_S)
  BACK_MONOTONE(gl_gen_fun_GL_TEXTURE_WRAP_S_0)
END_BACK(gl_gen_fun_GL_TEXTURE_WRAP_S)

static struct function_descr gl_gen_fun_GL_TEXTURE_WRAP_S_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_TEXTURE_WRAP_S ),
	rsfn_gl_gen_fun_GL_TEXTURE_WRAP_S_name };
#undef FUNCTION

#undef raw_GL_TEXTURE_WRAP_S

/**************** Raw glue `gl-gen-fun-GL-TEXTURE-WRAP_T' ****************/
#define raw_GL_TEXTURE_WRAP_T REG0

static char rsfn_gl_gen_fun_GL_TEXTURE_WRAP_T_name[] = "gl-gen-fun-GL-TEXTURE-WRAP_T";
#define FUNCTION rsfn_gl_gen_fun_GL_TEXTURE_WRAP_T_name

PROLOGUE(gl_gen_fun_GL_TEXTURE_WRAP_T)

BEGIN_FWD(gl_gen_fun_GL_TEXTURE_WRAP_T)
  FWD_MONOTONE(gl_gen_fun_GL_TEXTURE_WRAP_T_0)
END_FWD(gl_gen_fun_GL_TEXTURE_WRAP_T)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_TEXTURE_WRAP_T_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_TEXTURE_WRAP_T,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_TEXTURE_WRAP_T, NIL_OBJ ),
                 lookup_symbol( "GL_TEXTURE_WRAP_T" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_TEXTURE_WRAP_T);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_TEXTURE_WRAP_T)

BEGIN_BACK(gl_gen_fun_GL_TEXTURE_WRAP_T)
  BACK_MONOTONE(gl_gen_fun_GL_TEXTURE_WRAP_T_0)
END_BACK(gl_gen_fun_GL_TEXTURE_WRAP_T)

static struct function_descr gl_gen_fun_GL_TEXTURE_WRAP_T_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_TEXTURE_WRAP_T ),
	rsfn_gl_gen_fun_GL_TEXTURE_WRAP_T_name };
#undef FUNCTION

#undef raw_GL_TEXTURE_WRAP_T

/******************** Raw glue `gl-gen-fun-GL-REPEAT' ********************/
#define raw_GL_REPEAT REG0

static char rsfn_gl_gen_fun_GL_REPEAT_name[] = "gl-gen-fun-GL-REPEAT";
#define FUNCTION rsfn_gl_gen_fun_GL_REPEAT_name

PROLOGUE(gl_gen_fun_GL_REPEAT)

BEGIN_FWD(gl_gen_fun_GL_REPEAT)
  FWD_MONOTONE(gl_gen_fun_GL_REPEAT_0)
END_FWD(gl_gen_fun_GL_REPEAT)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_REPEAT_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_REPEAT,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_REPEAT, NIL_OBJ ),
                 lookup_symbol( "GL_REPEAT" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_REPEAT);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_REPEAT)

BEGIN_BACK(gl_gen_fun_GL_REPEAT)
  BACK_MONOTONE(gl_gen_fun_GL_REPEAT_0)
END_BACK(gl_gen_fun_GL_REPEAT)

static struct function_descr gl_gen_fun_GL_REPEAT_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_REPEAT ),
	rsfn_gl_gen_fun_GL_REPEAT_name };
#undef FUNCTION

#undef raw_GL_REPEAT

/********************* Raw glue `gl-gen-fun-GL-CLAMP' *********************/
#define raw_GL_CLAMP_TO_EDGE REG0

static char rsfn_gl_gen_fun_GL_CLAMP_name[] = "gl-gen-fun-GL-CLAMP";
#define FUNCTION rsfn_gl_gen_fun_GL_CLAMP_name

PROLOGUE(gl_gen_fun_GL_CLAMP)

BEGIN_FWD(gl_gen_fun_GL_CLAMP)
  FWD_MONOTONE(gl_gen_fun_GL_CLAMP_0)
END_FWD(gl_gen_fun_GL_CLAMP)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_CLAMP_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_CLAMP_TO_EDGE,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_CLAMP_TO_EDGE, NIL_OBJ ),
                 lookup_symbol( "GL_CLAMP_TO_EDGE" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_CLAMP_TO_EDGE);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_CLAMP)

BEGIN_BACK(gl_gen_fun_GL_CLAMP)
  BACK_MONOTONE(gl_gen_fun_GL_CLAMP_0)
END_BACK(gl_gen_fun_GL_CLAMP)

static struct function_descr gl_gen_fun_GL_CLAMP_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_CLAMP ),
	rsfn_gl_gen_fun_GL_CLAMP_name };
#undef FUNCTION

#undef raw_GL_CLAMP_TO_EDGE

/***************** Raw glue `gl-gen-fun-GL-INVALID-VALUE' *****************/
#define raw_GL_INVALID_VALUE REG0

static char rsfn_gl_gen_fun_GL_INVALID_VALUE_name[] = "gl-gen-fun-GL-INVALID-VALUE";
#define FUNCTION rsfn_gl_gen_fun_GL_INVALID_VALUE_name

PROLOGUE(gl_gen_fun_GL_INVALID_VALUE)

BEGIN_FWD(gl_gen_fun_GL_INVALID_VALUE)
  FWD_MONOTONE(gl_gen_fun_GL_INVALID_VALUE_0)
END_FWD(gl_gen_fun_GL_INVALID_VALUE)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_INVALID_VALUE_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_INVALID_VALUE,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_INVALID_VALUE, NIL_OBJ ),
                 lookup_symbol( "GL_INVALID_VALUE" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_INVALID_VALUE);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_INVALID_VALUE)

BEGIN_BACK(gl_gen_fun_GL_INVALID_VALUE)
  BACK_MONOTONE(gl_gen_fun_GL_INVALID_VALUE_0)
END_BACK(gl_gen_fun_GL_INVALID_VALUE)

static struct function_descr gl_gen_fun_GL_INVALID_VALUE_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_INVALID_VALUE ),
	rsfn_gl_gen_fun_GL_INVALID_VALUE_name };
#undef FUNCTION

#undef raw_GL_INVALID_VALUE

/*************** Raw glue `gl-gen-fun-GL-DEPTH-BUFFER-BIT' ***************/
#define raw_GL_DEPTH_BUFFER_BIT REG0

static char rsfn_gl_gen_fun_GL_DEPTH_BUFFER_BIT_name[] = "gl-gen-fun-GL-DEPTH-BUFFER-BIT";
#define FUNCTION rsfn_gl_gen_fun_GL_DEPTH_BUFFER_BIT_name

PROLOGUE(gl_gen_fun_GL_DEPTH_BUFFER_BIT)

BEGIN_FWD(gl_gen_fun_GL_DEPTH_BUFFER_BIT)
  FWD_MONOTONE(gl_gen_fun_GL_DEPTH_BUFFER_BIT_0)
END_FWD(gl_gen_fun_GL_DEPTH_BUFFER_BIT)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_DEPTH_BUFFER_BIT_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_DEPTH_BUFFER_BIT,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_DEPTH_BUFFER_BIT, NIL_OBJ ),
                 lookup_symbol( "GL_DEPTH_BUFFER_BIT" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_DEPTH_BUFFER_BIT);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_DEPTH_BUFFER_BIT)

BEGIN_BACK(gl_gen_fun_GL_DEPTH_BUFFER_BIT)
  BACK_MONOTONE(gl_gen_fun_GL_DEPTH_BUFFER_BIT_0)
END_BACK(gl_gen_fun_GL_DEPTH_BUFFER_BIT)

static struct function_descr gl_gen_fun_GL_DEPTH_BUFFER_BIT_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_DEPTH_BUFFER_BIT ),
	rsfn_gl_gen_fun_GL_DEPTH_BUFFER_BIT_name };
#undef FUNCTION

#undef raw_GL_DEPTH_BUFFER_BIT

/****************** Raw glue `gl-gen-fun-GL-DEPTH-TEST' ******************/
#define raw_GL_DEPTH_TEST REG0

static char rsfn_gl_gen_fun_GL_DEPTH_TEST_name[] = "gl-gen-fun-GL-DEPTH-TEST";
#define FUNCTION rsfn_gl_gen_fun_GL_DEPTH_TEST_name

PROLOGUE(gl_gen_fun_GL_DEPTH_TEST)

BEGIN_FWD(gl_gen_fun_GL_DEPTH_TEST)
  FWD_MONOTONE(gl_gen_fun_GL_DEPTH_TEST_0)
END_FWD(gl_gen_fun_GL_DEPTH_TEST)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_DEPTH_TEST_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_DEPTH_TEST,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_DEPTH_TEST, NIL_OBJ ),
                 lookup_symbol( "GL_DEPTH_TEST" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_DEPTH_TEST);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_DEPTH_TEST)

BEGIN_BACK(gl_gen_fun_GL_DEPTH_TEST)
  BACK_MONOTONE(gl_gen_fun_GL_DEPTH_TEST_0)
END_BACK(gl_gen_fun_GL_DEPTH_TEST)

static struct function_descr gl_gen_fun_GL_DEPTH_TEST_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_DEPTH_TEST ),
	rsfn_gl_gen_fun_GL_DEPTH_TEST_name };
#undef FUNCTION

#undef raw_GL_DEPTH_TEST

/******************* Raw glue `gl-gen-fun-GL-CULL-FACE' *******************/
#define raw_GL_CULL_FACE REG0

static char rsfn_gl_gen_fun_GL_CULL_FACE_name[] = "gl-gen-fun-GL-CULL-FACE";
#define FUNCTION rsfn_gl_gen_fun_GL_CULL_FACE_name

PROLOGUE(gl_gen_fun_GL_CULL_FACE)

BEGIN_FWD(gl_gen_fun_GL_CULL_FACE)
  FWD_MONOTONE(gl_gen_fun_GL_CULL_FACE_0)
END_FWD(gl_gen_fun_GL_CULL_FACE)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_CULL_FACE_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_CULL_FACE,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_CULL_FACE, NIL_OBJ ),
                 lookup_symbol( "GL_CULL_FACE" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_CULL_FACE);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_CULL_FACE)

BEGIN_BACK(gl_gen_fun_GL_CULL_FACE)
  BACK_MONOTONE(gl_gen_fun_GL_CULL_FACE_0)
END_BACK(gl_gen_fun_GL_CULL_FACE)

static struct function_descr gl_gen_fun_GL_CULL_FACE_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_CULL_FACE ),
	rsfn_gl_gen_fun_GL_CULL_FACE_name };
#undef FUNCTION

#undef raw_GL_CULL_FACE

/********************* Raw glue `gl-gen-fun-GL-FRONT' *********************/
#define raw_GL_FRONT REG0

static char rsfn_gl_gen_fun_GL_FRONT_name[] = "gl-gen-fun-GL-FRONT";
#define FUNCTION rsfn_gl_gen_fun_GL_FRONT_name

PROLOGUE(gl_gen_fun_GL_FRONT)

BEGIN_FWD(gl_gen_fun_GL_FRONT)
  FWD_MONOTONE(gl_gen_fun_GL_FRONT_0)
END_FWD(gl_gen_fun_GL_FRONT)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_FRONT_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_FRONT,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_FRONT, NIL_OBJ ),
                 lookup_symbol( "GL_FRONT" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_FRONT);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_FRONT)

BEGIN_BACK(gl_gen_fun_GL_FRONT)
  BACK_MONOTONE(gl_gen_fun_GL_FRONT_0)
END_BACK(gl_gen_fun_GL_FRONT)

static struct function_descr gl_gen_fun_GL_FRONT_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_FRONT ),
	rsfn_gl_gen_fun_GL_FRONT_name };
#undef FUNCTION

#undef raw_GL_FRONT

/********************* Raw glue `gl-gen-fun-GL-BACK' *********************/
#define raw_GL_BACK REG0

static char rsfn_gl_gen_fun_GL_BACK_name[] = "gl-gen-fun-GL-BACK";
#define FUNCTION rsfn_gl_gen_fun_GL_BACK_name

PROLOGUE(gl_gen_fun_GL_BACK)

BEGIN_FWD(gl_gen_fun_GL_BACK)
  FWD_MONOTONE(gl_gen_fun_GL_BACK_0)
END_FWD(gl_gen_fun_GL_BACK)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_BACK_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_BACK,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_BACK, NIL_OBJ ),
                 lookup_symbol( "GL_BACK" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_BACK);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_BACK)

BEGIN_BACK(gl_gen_fun_GL_BACK)
  BACK_MONOTONE(gl_gen_fun_GL_BACK_0)
END_BACK(gl_gen_fun_GL_BACK)

static struct function_descr gl_gen_fun_GL_BACK_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_BACK ),
	rsfn_gl_gen_fun_GL_BACK_name };
#undef FUNCTION

#undef raw_GL_BACK

/********************* Raw glue `gl-gen-fun-GL-TRUE' *********************/
#define raw_GL_TRUE REG0

static char rsfn_gl_gen_fun_GL_TRUE_name[] = "gl-gen-fun-GL-TRUE";
#define FUNCTION rsfn_gl_gen_fun_GL_TRUE_name

PROLOGUE(gl_gen_fun_GL_TRUE)

BEGIN_FWD(gl_gen_fun_GL_TRUE)
  FWD_MONOTONE(gl_gen_fun_GL_TRUE_0)
END_FWD(gl_gen_fun_GL_TRUE)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_TRUE_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_TRUE,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_TRUE, NIL_OBJ ),
                 lookup_symbol( "GL_TRUE" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_TRUE);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_TRUE)

BEGIN_BACK(gl_gen_fun_GL_TRUE)
  BACK_MONOTONE(gl_gen_fun_GL_TRUE_0)
END_BACK(gl_gen_fun_GL_TRUE)

static struct function_descr gl_gen_fun_GL_TRUE_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_TRUE ),
	rsfn_gl_gen_fun_GL_TRUE_name };
#undef FUNCTION

#undef raw_GL_TRUE

/****************** Raw glue `gl-gen-fun-GL-LINE-SMOOTH' ******************/
#define raw_GL_LINE_SMOOTH REG0

static char rsfn_gl_gen_fun_GL_LINE_SMOOTH_name[] = "gl-gen-fun-GL-LINE-SMOOTH";
#define FUNCTION rsfn_gl_gen_fun_GL_LINE_SMOOTH_name

PROLOGUE(gl_gen_fun_GL_LINE_SMOOTH)

BEGIN_FWD(gl_gen_fun_GL_LINE_SMOOTH)
  FWD_MONOTONE(gl_gen_fun_GL_LINE_SMOOTH_0)
END_FWD(gl_gen_fun_GL_LINE_SMOOTH)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_LINE_SMOOTH_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_LINE_SMOOTH,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_LINE_SMOOTH, NIL_OBJ ),
                 lookup_symbol( "GL_LINE_SMOOTH" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_LINE_SMOOTH);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_LINE_SMOOTH)

BEGIN_BACK(gl_gen_fun_GL_LINE_SMOOTH)
  BACK_MONOTONE(gl_gen_fun_GL_LINE_SMOOTH_0)
END_BACK(gl_gen_fun_GL_LINE_SMOOTH)

static struct function_descr gl_gen_fun_GL_LINE_SMOOTH_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_LINE_SMOOTH ),
	rsfn_gl_gen_fun_GL_LINE_SMOOTH_name };
#undef FUNCTION

#undef raw_GL_LINE_SMOOTH

/********************** Raw glue `gl-gen-fun-GL-CW' **********************/
#define raw_GL_CW REG0

static char rsfn_gl_gen_fun_GL_CW_name[] = "gl-gen-fun-GL-CW";
#define FUNCTION rsfn_gl_gen_fun_GL_CW_name

PROLOGUE(gl_gen_fun_GL_CW)

BEGIN_FWD(gl_gen_fun_GL_CW)
  FWD_MONOTONE(gl_gen_fun_GL_CW_0)
END_FWD(gl_gen_fun_GL_CW)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_gen_fun_GL_CW_0)
{  ;
  COUNT_ARGS(1);
  if (!instance_p(raw_GL_CW,TLREFB(0)))
    {
      obj c;
      c = make5( TLREFB(1),
                 NIL_OBJ,  /* properties */
                 lookup_symbol( FUNCTION ),
                 cons( raw_GL_CW, NIL_OBJ ),
                 lookup_symbol( "GL_CW" ),
                 TLREFB(0) );
      raise_error( c );
    }
  REG0=int2fx(GL_CW);// = ;


{
        RETURN1();
    }}
#undef FPLACE_CODE

EPILOGUE(gl_gen_fun_GL_CW)

BEGIN_BACK(gl_gen_fun_GL_CW)
  BACK_MONOTONE(gl_gen_fun_GL_CW_0)
END_BACK(gl_gen_fun_GL_CW)

static struct function_descr gl_gen_fun_GL_CW_descr = {
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_CW ),
	rsfn_gl_gen_fun_GL_CW_name };
#undef FUNCTION

#undef raw_GL_CW

/***************** Raw glue `gl-gen-fun-GL-VERTEX-ARRAY' *****************/
#define raw_GL_VERTEX_ARRAY REG0

static char rsfn_gl_gen_fun_GL_VERTEX_ARRAY_name[] = "gl-gen-fun-GL-VERTEX-ARRAY";
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
	&gl_part_gl1,
	JUMP_TABLE( gl_gen_fun_GL_VERTEX_ARRAY ),
	rsfn_gl_gen_fun_GL_VERTEX_ARRAY_name };
#undef FUNCTION

#undef raw_GL_VERTEX_ARRAY
/******************************* Postamble *******************************/
/**************************** Part Link Table ****************************/


static struct function_descr *(part_gl1_tab[]) = {
    &gl_gen_fun_GL_LINES_descr,
    &gl_gen_fun_GL_LINE_STRIP_descr,
    &gl_gen_fun_GL_LINE_LOOP_descr,
    &gl_gen_fun_GL_RGB_descr,
    &gl_gen_fun_GL_RGBA_descr,
    &gl_gen_fun_GL_ALPHA_descr,
    &gl_gen_fun_GL_SCISSOR_TEST_descr,
    &gl_gen_fun_GL_TEXTURE_WRAP_S_descr,
    &gl_gen_fun_GL_TEXTURE_WRAP_T_descr,
    &gl_gen_fun_GL_REPEAT_descr,
    &gl_gen_fun_GL_CLAMP_descr,
    &gl_gen_fun_GL_INVALID_VALUE_descr,
    &gl_gen_fun_GL_DEPTH_BUFFER_BIT_descr,
    &gl_gen_fun_GL_DEPTH_TEST_descr,
    &gl_gen_fun_GL_CULL_FACE_descr,
    &gl_gen_fun_GL_FRONT_descr,
    &gl_gen_fun_GL_BACK_descr,
    &gl_gen_fun_GL_TRUE_descr,
    &gl_gen_fun_GL_LINE_SMOOTH_descr,
    &gl_gen_fun_GL_CW_descr,
    &gl_gen_fun_GL_VERTEX_ARRAY_descr,
    NULL };
struct part_descr gl_part_gl1 = {
    42105858,
    &module_gl,
    part_gl1_tab,
    "gl1",
    0, sccsid };
#undef _MODULE_GL
#undef _SCM_GL
#undef _C_GL1
