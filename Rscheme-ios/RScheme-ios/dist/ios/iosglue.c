/**********************************************
THIS FILE WAS AUTOMATICALLY GENERATED, AND MAY
BE AUTOMATICALLY RE-GENERATED WHEN THE COMPILER
OR SOURCE CHANGES.  DO NOT MODIFY THIS FILE BY HAND!
RScheme Build (v0.7.3.4-b7u, 2007-05-30)
**********************************************/

/******************************** Preamble ********************************/

#define _MODULE_IOS
#define _SCM_IOSGLUE
#define _C_IOSGLUE
#include "ios_p.h"
#include <rscheme/vinsns.h>
#include "iosop.h"
extern struct module_descr module_ios;
extern struct part_descr ios_part_iosglue;
static char sccsid[] = "@(#)ios ./iosglue.scm [380993536] (RS v0.7.3.4-b7u, 2007-05-30)";

/************************** Function Definitions **************************/


/*************************** Raw glue `read-op' ***************************/

static char rsfn_read_op_name[] = "read-op";
#define FUNCTION rsfn_read_op_name

PROLOGUE(read_op)

BEGIN_FWD(read_op)
  FWD_MONOTONE(read_op_0)
END_FWD(read_op)

#define FPLACE_CODE (1000+0)
MONOTONE(read_op_0)
{  COUNT_ARGS(0);

{
    REG0=make_string(show_input());
    RETURN1();
}}
#undef FPLACE_CODE

EPILOGUE(read_op)

BEGIN_BACK(read_op)
  BACK_MONOTONE(read_op_0)
END_BACK(read_op)

static struct function_descr read_op_descr = {
	&ios_part_iosglue,
	JUMP_TABLE( read_op ),
	rsfn_read_op_name };
#undef FUNCTION


/**************************** Raw glue `alert' ****************************/
#define title REG0
#define message REG1

static char rsfn_alert_name[] = "alert";
#define FUNCTION rsfn_alert_name

PROLOGUE(alert)

BEGIN_FWD(alert)
  FWD_MONOTONE(alert_0)
END_FWD(alert)

#define FPLACE_CODE (1000+0)
MONOTONE(alert_0)
{  COUNT_ARGS(2);

{
    alert(string_text(title),string_text(message));
    RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(alert)

BEGIN_BACK(alert)
  BACK_MONOTONE(alert_0)
END_BACK(alert)

static struct function_descr alert_descr = {
	&ios_part_iosglue,
	JUMP_TABLE( alert ),
	rsfn_alert_name };
#undef FUNCTION

#undef title
#undef message

/*************************** Raw glue `gl-init' ***************************/

static char rsfn_gl_init_name[] = "gl-init";
#define FUNCTION rsfn_gl_init_name

PROLOGUE(gl_init)

BEGIN_FWD(gl_init)
  FWD_MONOTONE(gl_init_0)
END_FWD(gl_init)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_init_0)
{  COUNT_ARGS(0);

{
    gl_init();
    RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_init)

BEGIN_BACK(gl_init)
  BACK_MONOTONE(gl_init_0)
END_BACK(gl_init)

static struct function_descr gl_init_descr = {
	&ios_part_iosglue,
	JUMP_TABLE( gl_init ),
	rsfn_gl_init_name };
#undef FUNCTION


/*************************** Raw glue `gl-exit' ***************************/

static char rsfn_gl_exit_name[] = "gl-exit";
#define FUNCTION rsfn_gl_exit_name

PROLOGUE(gl_exit)

BEGIN_FWD(gl_exit)
  FWD_MONOTONE(gl_exit_0)
END_FWD(gl_exit)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_exit_0)
{  COUNT_ARGS(0);

{
gl_exit();
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_exit)

BEGIN_BACK(gl_exit)
  BACK_MONOTONE(gl_exit_0)
END_BACK(gl_exit)

static struct function_descr gl_exit_descr = {
	&ios_part_iosglue,
	JUMP_TABLE( gl_exit ),
	rsfn_gl_exit_name };
#undef FUNCTION


/************************** Raw glue `gl-event' **************************/
#define proc REG0

static char rsfn_gl_event_name[] = "gl-event";
#define FUNCTION rsfn_gl_event_name

PROLOGUE(gl_event)

BEGIN_FWD(gl_event)
  FWD_MONOTONE(gl_event_0)
END_FWD(gl_event)

#define FPLACE_CODE (1000+0)
MONOTONE(gl_event_0)
{  COUNT_ARGS(1);

{
    gui_event_callback=proc;
RETURN0();
}}
#undef FPLACE_CODE

EPILOGUE(gl_event)

BEGIN_BACK(gl_event)
  BACK_MONOTONE(gl_event_0)
END_BACK(gl_event)

static struct function_descr gl_event_descr = {
	&ios_part_iosglue,
	JUMP_TABLE( gl_event ),
	rsfn_gl_event_name };
#undef FUNCTION

#undef proc
/******************************* Postamble *******************************/
/**************************** Part Link Table ****************************/


static struct function_descr *(part_iosglue_tab[]) = {
    &read_op_descr,
    &alert_descr,
    &gl_init_descr,
    &gl_exit_descr,
    &gl_event_descr,
    NULL };
struct part_descr ios_part_iosglue = {
    380993536,
    &module_ios,
    part_iosglue_tab,
    "iosglue",
    0, sccsid };
#undef _MODULE_IOS
#undef _SCM_IOSGLUE
#undef _C_IOSGLUE
