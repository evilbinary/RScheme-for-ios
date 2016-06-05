/**********************************************
THIS FILE WAS AUTOMATICALLY COPIED FROM THE
RSCHEME SOURCE TREE, AND THE ORIGINAL MAY CHANGE.
HENCE, DO NOT MODIFY THIS FILE BY HAND!
RScheme Build (v0.7.3.4-b7u, 2007-05-30)
**********************************************/

#line 1 "./iosop.h"
#ifndef _IOSOP_
#define _IOSOP_

#include <rscheme/scheme.h>
#include <rscheme/api.h>


void alert(char *,char*);
char* show_input();
void show();

void gl_init();
void gl_exit();

void gui_on_event(int type,int x,int y);

extern obj gui_event_callback;



#endif
