/**********************************************
THIS FILE WAS AUTOMATICALLY GENERATED, AND MAY
BE AUTOMATICALLY RE-GENERATED WHEN THE COMPILER
OR SOURCE CHANGES.  DO NOT MODIFY THIS FILE BY HAND!
RScheme Build (v0.7.3.4-b7u, 2007-05-30)
**********************************************/

/******************************** Preamble ********************************/

#define _MODULE_IOS
#define _SCM_IOS
#define _C_IOS
#include "ios_p.h"
#include <rscheme/vinsns.h>
#include <iosop.h>
extern struct module_descr module_ios;
extern struct part_descr ios_part_ios;
static char sccsid[] = "@(#)ios ./ios.scm [278006784] (RS v0.7.3.4-b7u, 2007-05-30)";

/************************** Function Definitions **************************/


/**************************** Function `read' ****************************/
static char rsfn_read_name[] = "read";
#define FUNCTION rsfn_read_name

PROLOGUE(read)

BEGIN_FWD(read)
  FWD_MONOTONE(read_0)
  FWD_MONOTONE(read_1)
  FWD_MONOTONE(read_2)
  FWD_MONOTONE(read_3)
END_FWD(read)

#define FPLACE_CODE (1000+0)
MONOTONE(read_0)
{
    COUNT_ARGS(0);
    SAVE_CONT0(read_1);
    APPLY(0,TLREF(2) /* read-op */);
}
#undef FPLACE_CODE

#define FPLACE_CODE (1000+1)
MONOTONE(read_1)
{
    /* NOP: REG0 = REG0; */
    RESTORE_CONT0();
    /* NOP: REG0 = REG0; */
    /* NOP: REG0 = REG0; */
    SAVE_CONT1(read_3);
    SAVE_CONT1(read_2);
    /* NOP: REG0 = REG0; */
    APPLYF(1,TLREFB(0) /* string->number */);
}
#undef FPLACE_CODE

#define FPLACE_CODE (1000+2)
MONOTONE(read_2)
{
    REG1 = REG0;
    RESTORE_CONT1();
    /* NOP: REG1 = REG1; */
    REG0 = REG1;
    APPLYF(1,TLREFB(1) /* number? */);
}
#undef FPLACE_CODE

#define FPLACE_CODE (1000+3)
MONOTONE(read_3)
{
    REG1 = REG0;
    RESTORE_CONT1();
    if (truish(REG1))
    {
	    /* NOP: REG0 = REG0; */
	    APPLYF(1,TLREFB(0) /* string->number */);
    }
    else
    {
	    /* NOP: REG0 = REG0; */
	    RETURN1();
    }
}
#undef FPLACE_CODE

EPILOGUE(read)

BEGIN_BACK(read)
  BACK_MONOTONE(read_0)
  BACK_MONOTONE(read_1)
  BACK_MONOTONE(read_2)
  BACK_MONOTONE(read_3)
END_BACK(read)

static struct function_descr read_descr = {
	&ios_part_ios,
	JUMP_TABLE( read ),
	rsfn_read_name };
#undef FUNCTION


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
	&ios_part_ios,
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
	&ios_part_ios,
	JUMP_TABLE( alert ),
	rsfn_alert_name };
#undef FUNCTION

#undef title
#undef message
/******************************* Postamble *******************************/
/**************************** Part Link Table ****************************/


static struct function_descr *(part_ios_tab[]) = {
    &read_descr,
    &read_op_descr,
    &alert_descr,
    NULL };
struct part_descr ios_part_ios = {
    278006784,
    &module_ios,
    part_ios_tab,
    "ios",
    0, sccsid };
#undef _MODULE_IOS
#undef _SCM_IOS
#undef _C_IOS
