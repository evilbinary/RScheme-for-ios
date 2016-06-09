/**********************************************
THIS FILE WAS AUTOMATICALLY GENERATED, AND MAY
BE AUTOMATICALLY RE-GENERATED WHEN THE COMPILER
OR SOURCE CHANGES.  DO NOT MODIFY THIS FILE BY HAND!
RScheme Build (v0.7.3.4-b7u, 2007-05-30)
**********************************************/

/******************************** Preamble ********************************/

#define _MODULE_IOS
#define _SCM_GLUTGLUE
#define _C_GLUTGLUE
#include "ios_p.h"
#include <rscheme/vinsns.h>
#include "iosop.h"
extern struct module_descr module_ios;
extern struct part_descr ios_part_glutglue;
static char sccsid[] = "@(#)ios ./glutglue.scm [319456257] (RS v0.7.3.4-b7u, 2007-05-30)";

/************************** Function Definitions **************************/


/************************** Raw glue `glut-init' **************************/

static char rsfn_glut_init_name[] = "glut-init";
#define FUNCTION rsfn_glut_init_name

PROLOGUE(glut_init)

BEGIN_FWD(glut_init)
  FWD_MONOTONE(glut_init_0)
END_FWD(glut_init)

#define FPLACE_CODE (1000+0)
MONOTONE(glut_init_0)
{  COUNT_ARGS(0);

{
	glut_init();
	RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(glut_init)

BEGIN_BACK(glut_init)
  BACK_MONOTONE(glut_init_0)
END_BACK(glut_init)

static struct function_descr glut_init_descr = {
	&ios_part_glutglue,
	JUMP_TABLE( glut_init ),
	rsfn_glut_init_name };
#undef FUNCTION


/************************** Raw glue `glut-exit' **************************/

static char rsfn_glut_exit_name[] = "glut-exit";
#define FUNCTION rsfn_glut_exit_name

PROLOGUE(glut_exit)

BEGIN_FWD(glut_exit)
  FWD_MONOTONE(glut_exit_0)
END_FWD(glut_exit)

#define FPLACE_CODE (1000+0)
MONOTONE(glut_exit_0)
{  COUNT_ARGS(0);

{
	glut_exit();
	RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(glut_exit)

BEGIN_BACK(glut_exit)
  BACK_MONOTONE(glut_exit_0)
END_BACK(glut_exit)

static struct function_descr glut_exit_descr = {
	&ios_part_glutglue,
	JUMP_TABLE( glut_exit ),
	rsfn_glut_exit_name };
#undef FUNCTION


/************************* Raw glue `glut-event' *************************/
#define proc REG0

static char rsfn_glut_event_name[] = "glut-event";
#define FUNCTION rsfn_glut_event_name

PROLOGUE(glut_event)

BEGIN_FWD(glut_event)
  FWD_MONOTONE(glut_event_0)
END_FWD(glut_event)

#define FPLACE_CODE (1000+0)
MONOTONE(glut_event_0)
{  COUNT_ARGS(1);

{
	glut_event_callback=proc;
	RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(glut_event)

BEGIN_BACK(glut_event)
  BACK_MONOTONE(glut_event_0)
END_BACK(glut_event)

static struct function_descr glut_event_descr = {
	&ios_part_glutglue,
	JUMP_TABLE( glut_event ),
	rsfn_glut_event_name };
#undef FUNCTION

#undef proc

/*********************** Raw glue `glut-main-loop' ***********************/

static char rsfn_glut_main_loop_name[] = "glut-main-loop";
#define FUNCTION rsfn_glut_main_loop_name

PROLOGUE(glut_main_loop)

BEGIN_FWD(glut_main_loop)
  FWD_MONOTONE(glut_main_loop_0)
END_FWD(glut_main_loop)

#define FPLACE_CODE (1000+0)
MONOTONE(glut_main_loop_0)
{  COUNT_ARGS(0);

{
	glut_main_loop();
	RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(glut_main_loop)

BEGIN_BACK(glut_main_loop)
  BACK_MONOTONE(glut_main_loop_0)
END_BACK(glut_main_loop)

static struct function_descr glut_main_loop_descr = {
	&ios_part_glutglue,
	JUMP_TABLE( glut_main_loop ),
	rsfn_glut_main_loop_name };
#undef FUNCTION


/************************ Raw glue `glut-display' ************************/
#define proc REG0

static char rsfn_glut_display_name[] = "glut-display";
#define FUNCTION rsfn_glut_display_name

PROLOGUE(glut_display)

BEGIN_FWD(glut_display)
  FWD_MONOTONE(glut_display_0)
END_FWD(glut_display)

#define FPLACE_CODE (1000+0)
MONOTONE(glut_display_0)
{  COUNT_ARGS(1);

{
	glut_display_callback=proc;
	RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(glut_display)

BEGIN_BACK(glut_display)
  BACK_MONOTONE(glut_display_0)
END_BACK(glut_display)

static struct function_descr glut_display_descr = {
	&ios_part_glutglue,
	JUMP_TABLE( glut_display ),
	rsfn_glut_display_name };
#undef FUNCTION

#undef proc

/************************ Raw glue `glut-reshape' ************************/
#define proc REG0

static char rsfn_glut_reshape_name[] = "glut-reshape";
#define FUNCTION rsfn_glut_reshape_name

PROLOGUE(glut_reshape)

BEGIN_FWD(glut_reshape)
  FWD_MONOTONE(glut_reshape_0)
END_FWD(glut_reshape)

#define FPLACE_CODE (1000+0)
MONOTONE(glut_reshape_0)
{  COUNT_ARGS(1);

{
	glut_reshape_callback=proc;
	RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(glut_reshape)

BEGIN_BACK(glut_reshape)
  BACK_MONOTONE(glut_reshape_0)
END_BACK(glut_reshape)

static struct function_descr glut_reshape_descr = {
	&ios_part_glutglue,
	JUMP_TABLE( glut_reshape ),
	rsfn_glut_reshape_name };
#undef FUNCTION

#undef proc
/******************************* Postamble *******************************/
/**************************** Part Link Table ****************************/


static struct function_descr *(part_glutglue_tab[]) = {
    &glut_init_descr,
    &glut_exit_descr,
    &glut_event_descr,
    &glut_main_loop_descr,
    &glut_display_descr,
    &glut_reshape_descr,
    NULL };
struct part_descr ios_part_glutglue = {
    319456257,
    &module_ios,
    part_glutglue_tab,
    "glutglue",
    0, sccsid };
#undef _MODULE_IOS
#undef _SCM_GLUTGLUE
#undef _C_GLUTGLUE
