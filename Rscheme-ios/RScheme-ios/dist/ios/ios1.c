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
extern struct module_descr module_ios;
extern struct part_descr ios_part_ios;
static char sccsid[] = "@(#)ios ./ios.scm [374693890] (RS v0.7.3.4-b7u, 2007-05-30)";

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
    APPLYF(0,TLREFB(2) /* read-op */);
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

/******************************* Postamble *******************************/
/**************************** Part Link Table ****************************/


static struct function_descr *(part_ios_tab[]) = {
    &read_descr,
    NULL };
struct part_descr ios_part_ios = {
    374693890,
    &module_ios,
    part_ios_tab,
    "ios",
    0, sccsid };
#undef _MODULE_IOS
#undef _SCM_IOS
#undef _C_IOS
