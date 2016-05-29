/*-----------------------------------------------------------------*-C-*---
 * File:    shell.h
 *
 *          Copyright (C)2016 evilbinary <rootntsd@163.com>
 *
 * File version:     1.2
 * File mod date:    2016-05-01
 * System build:     v0.7.3.4-b7u,  2016-05-08
 *
 *------------------------------------------------------------------------*/

#ifndef _H_LGH
#define _H_LGH



#include <rscheme/scheme.h>

#include <rscheme/api.h>
#include <rscheme/osglue.h>
#include <rscheme/rlseconf.h>
#include <rscheme/scheme.h>
#include <rscheme/linktype.h>
#include <string.h>
#include <ctype.h>
#include <rscheme/api.h>
#include <rscheme/stdmodul.h>
#include <rscheme/rlseconf.h>
#include <stdlib.h>

obj as_eval( char *str );
void as_init(int argc, const char **argv );
int as_main( int argc, const char **argv );

#endif /* _H_LGH */
