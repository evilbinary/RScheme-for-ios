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


extern obj glut_event_callback;
extern obj glut_display_callback;
extern obj glut_reshape_callback;

void alert(char *,char*);
char* show_input();
void show();

void glut_init();
void glut_exit();
void glut_main_loop();

void glut_on_event(int type,int x,int y);
void glut_on_display();
void glut_on_reshape(int width,int height);




#endif
