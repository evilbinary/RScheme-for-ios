/*-----------------------------------------------------------------*-C-*---
 * File:    main.c
 *
 *          Copyright (C)2016 evilbinary <rootntsd@163.com>
 *
 * File version:     1.2
 * File mod date:    2016-05-01
 * System build:     v0.7.3.4-b7u,  2016-05-08
 *
 *------------------------------------------------------------------------*/

#include "shell.h"
#include <rscheme/scheme.h>
#include <rscheme/smemory.h>


int as_main( int argc, const char **argv )
{
	obj ret;
	as_init(argc,argv);
	ret=as_eval( "(display \"Hello, RScheme-windows\\n\") (display 22)" );
	printf("ret=%s",unicode_string_text(ret) );
	ret=as_eval( "(+ 1 2)");
	printf("ret=%s\n",unicode_string_text(ret) );

  return 0;
}
