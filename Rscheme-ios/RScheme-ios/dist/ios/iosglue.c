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
static char sccsid[] = "@(#)ios ./iosglue.scm [491454464] (RS v0.7.3.4-b7u, 2007-05-30)";

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
/******************************* Postamble *******************************/
/**************************** Part Link Table ****************************/


static struct function_descr *(part_iosglue_tab[]) = {
    &read_op_descr,
    &alert_descr,
    NULL };
struct part_descr ios_part_iosglue = {
    491454464,
    &module_ios,
    part_iosglue_tab,
    "iosglue",
    0, sccsid };
#undef _MODULE_IOS
#undef _SCM_IOSGLUE
#undef _C_IOSGLUE
