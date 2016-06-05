/*-----------------------------------------------------------------*-C-*---
 * File:    shell.c
 *
 *          Copyright (C)2016 evilbinary <rootntsd@163.com>
 *
 * File version:     1.2
 * File mod date:    2016-05-01
 * System build:     v0.7.3.4-b7u,  2016-05-08
 *
 *------------------------------------------------------------------------*/
#include "shell.h"
#include "rscheme/vinsns.h"
#include "ios.h"
#include "gl.h"

#define DEFAULT_IMG "sys.img"

extern int bci_trace_flag;

struct module_descr *(std_modules[]) = {
    &module_ios,
    &module_gl,
    STD_MODULES_DECL
};

obj eval_proc;


void as_init(int argc, const char **argv )
{
  obj start, args, rc;
  const char *system_file = NULL;
  int i = 1;
  rs_bool verbose = YES;
  rs_bool is_script = NO;


  char temp[1024];

  rs_install_dir = getenv( "RS_INSTALL_DIR" );
  if (!rs_install_dir)
     // rs_install_dir = INSTALL_DIR;
  rs_install_dir="";

  sprintf( temp, "%s/" DEFAULT_IMG, rs_install_dir );
  if (!os_file_exists_p( temp ) && strstr( temp, ".fas" ))
    {
      /*  if the default image isn't there, look for an `.orig' image
       *  as well.  This allows us to easily replace the default
       *  fasl image with preloaded material
       */
       strcpy( strstr( temp, ".fas" ), ".orig.fas" );
    }

  init_dynamic_link( argv[0] ); /* some systems need this */

  start = init_scheme( argc, argv, temp, YES, std_modules );
  if (EQ(start,FALSE_OBJ))
    {
      fprintf( stderr, "initialization from %s failed\n",temp );
      exit(1);
    }
    

  rc = call_scheme( start, 3, NIL_OBJ, FALSE_OBJ, FALSE_OBJ );
  eval_proc = rc;
  
   
}

obj as_eval( char *str )
{
  return call_scheme( eval_proc, 1, make_string(str) );
}

