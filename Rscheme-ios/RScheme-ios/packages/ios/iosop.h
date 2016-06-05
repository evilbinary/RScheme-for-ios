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
