
(define-ios-glue (glut-init){
glut_init();
RETURN0();
})

(define-ios-glue (glut-exit){
glut_exit();
RETURN0();
})

(define-ios-glue (glut-event proc){
glut_event_callback=proc;
RETURN0();
})

(define-ios-glue (glut-main-loop)
{
glut_main_loop();
RETURN0();
}
)


(define-ios-glue (glut-display proc){
glut_display_callback=proc;
RETURN0();
})
