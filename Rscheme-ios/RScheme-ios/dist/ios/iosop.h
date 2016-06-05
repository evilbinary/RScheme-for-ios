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

#define EVENT_MOTION      1
#define EVENT_KEYPRESS    2
#define EVENT_KEYRELEASE  3

#define EVENT_BUTTON1UP   4
#define EVENT_BUTTON1DOWN 5
#define EVENT_BUTTON2UP   6
#define EVENT_BUTTON2DOWN 7
#define EVENT_BUTTON3UP   8
#define EVENT_BUTTON3DOWN 9
#define EVENT_MULTITOUCH  18

void alert(char *,char*);
char* show_input();
void show();

void gl_init();
void gl_exit();

void gui_on_event(int type,int x,int y);

extern obj gui_event_callback;



#endif
