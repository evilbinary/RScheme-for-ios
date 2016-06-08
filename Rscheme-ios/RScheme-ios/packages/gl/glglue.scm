(define-macro (define-gl-glue (name . args ) . body)
    `(define-safe-glue (,name ,@args)
    properties: (
    ;(other-h-files "<glglue.h>" "<gl.h>")
    ;(other-include-dirs "" )
    ;(other-c-files "")
    ;(other-libs "")
)
,@body))



(define-macro (define-gl-const var name )
`(begin
    (define-safe-glue ( ,(string->symbol (string-append "gl-gen-fun-" (symbol->string var))) (,name <string>) )
        type-handler: (<string>
        (instance? <string>)
        ("" "" "REG0=int2fx(~a);//" ))
    {
        RETURN1();
    })
    (define ,var ( ,(string->symbol (string-append "gl-gen-fun-" (symbol->string var))) ,name ) )
))



;(define-gl-c (define-gl-const (a <string>) ){
;    REG0=fx2int(a);
;    RETURN1();
;})


(define-gl-glue (gl-ortho left right bottom top near far)
{
glOrthof(extract_float(left),extract_float(right),extract_float(bottom),extract_float(top),extract_float(near),extract_float(far));
RETURN0();

})

(define-gl-glue (gl-frustum left right bottom top near far)
{
glFrustumf(extract_float(left),extract_float(right),extract_float(bottom),extract_float(top),extract_float(near),extract_float(far));
RETURN0();

})

(define-gl-glue (gl-load-identity){
glLoadIdentity();
RETURN0();
})

(define-gl-glue (gl-clear i){
glClear(fx2int(i));
RETURN0();
})

(define-gl-glue (gl-clear-color red green blue alpha){
glClearColor(extract_float(red),extract_float(green),extract_float(blue),extract_float(alpha));
RETURN0();
})

(define-gl-glue (gl-color4f red green blue alpha){
glColor4f(extract_float(red),extract_float(green),extract_float(blue),extract_float(alpha));
RETURN0();
})

(define-gl-glue (gl-matrix-mode mode){
 glMatrixMode(fx2int(mode));
RETURN0();
})

(define-gl-glue (gl-push-matrix){
glPushMatrix();
RETURN0();
})

(define-gl-glue (gl-pop-matrix){
glPopMatrix();
RETURN0();
})

(define-gl-glue (gl-translatef x y z){
glTranslatef(extract_float(x),extract_float(y),extract_float(z));
RETURN0();
})
(define-gl-glue (gl-scalef x y z){
glScalef(extract_float(x),extract_float(y),extract_float(z));
RETURN0();
})


(define-gl-glue (gl-rotatef angle x y z){
glRotatef(extract_float(angle), extract_float(x),extract_float(y),extract_float(z));
RETURN0();
})

(define-gl-glue (gl-enable e){
glEnable(fx2int(e));
RETURN0();
})


(define-gl-glue (gl-disable e){
glDisable(fx2int(e));
RETURN0();
})


(define-gl-glue (gl-blend-func sfactor dfactor){
glBlendFunc(extract_float(sfactor),extract_float(dfactor) );
RETURN0();
})

(define-gl-glue (gl-enable-client-state e){
glEnableClientState(fx2int(e));
RETURN0();
})

(define-gl-glue (gl-disable-client-state e){
glDisableClientState(fx2int(e));
RETURN0();
})


(define-gl-glue (gl-draw-arrays mode first count){
glDrawArrays(fx2int(mode),fx2int(first),fx2int(count));
RETURN0();
})


;;;;;;;;;;;;;;to do;;;;;;;;;;;;;;;;

(define-gl-glue (gl-vertex-pointer size type stride pointer)
{
    int t=fx2int(type);
    int s=fx2int(size);
    void *v=alloc_array(t,pointer);
    glVertexPointer(s,t,fx2int(stride),v);
    if(v!=NULL)
        free(v);

    RETURN0();
})

(define-gl-glue (gl-color-pointer size type stride pointer){
    int t=fx2int(type);
    int s=fx2int(size);
    void *v=alloc_array(t,pointer);
    glColorPointer(s,t,fx2int(stride),v );
    if(v!=NULL)
        free(v);
    RETURN0();
})

(define-gl-glue (gl-coord-pointer size type stride pointer){
    int t=fx2int(type);
    int s=fx2int(size);
    void *v=alloc_array(t,pointer);
    glTexCoordPointer(s,t,fx2int(stride),v);
    if(v!=NULL)
        free(v);
    RETURN0();
})


;(define-gl-glue (gl-coord-pointer n textures){
;glGenTextures(fx2int(size), );
;RETURN0();
;})

;(define-gl-glue (gl-delete-textures n textures){
;glDeleteTextures(fx2int(size), );
;RETURN0();
;})

(define-gl-glue (gl-bind-texture target texture){
glBindTexture(fx2int(target),fx2int(texture) );
RETURN0();
})

(define-gl-glue (gl-text-parameteri target pname param){
glTexParameteri(fx2int(target),fx2int(pname),fx2int(param) );
RETURN0();
})

;(define-gl-glue (gl-text-image2d target level internalformat width height border format type pixels){
;    glTexImage2D(fx2int(target),fx2int(level),fx2int(internalformat),fx2int(width),fx2int(height),fx2int(border),fx2int(format),
;RETURN0();
;})

;(define-gl-glue (gl-text-sub-image2d  target level xoffset yoffset width height format type *texels ){
;glTexSubImage2D(fx2int(target),fx2int(level),fx2int(xoffset),fx2int(yoffset),fx2int(width),fx2int(height),fx2int(format),fx2int(type),
;})



(define-gl-glue (gl-line-width s){
glLineWidth(extract_float(s));
RETURN0();
})


(define-gl-glue (gl-depth-mask e){
glDepthMask(fx2int(e));
RETURN0();
})

(define-gl-glue (gl-cull-face e){
glCullFace(fx2int(e));
RETURN0();
})

;(define-gl-glue (gl-read-pixels x y, width height format type pixel){
;glReadPixels(fx2int(x),fx2int(y),fx2int(width),fx2int(height),fx2int(format),fx2int(type), );
;})

(define-gl-glue (gl-point-size s){
glPointSize(extract_float(s));
RETURN0();
})

(define-gl-glue (gl-fllush){
glFlush();
    RETURN0();
})

(define-gl-glue (gl-viewport x y width height)
{
    glViewport(fx2int(x),fx2int(y),fx2int(width),fx2int(height) );
    RETURN0();
})

(define-gl-glue (gl-front-face m){
glFrontFace(fx2int(m));
 RETURN0();
})

;;;;;;;test code here;;;;;;;;;;;;;;
(define-gl-glue (gl-test-c1)
{

    glEnableClientState (GL_VERTEX_ARRAY);
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode (GL_MODELVIEW);
    glLoadIdentity ();
    glFrontFace(GL_CW);
    glColor4f(1.0, 0.0, 0.0, 1.0);
    glPointSize(18);

    typedef struct {
    GLfloat x,y,z;
    } XYZ;

    XYZ p[3];
    p[0].x=-0.5;
    p[0].y=0.5;
    p[0].z=0;
    p[1].x=0.5;
    p[1].y=0.5;
    p[1].z=0;
    p[2].x=-0.5;
    p[2].y=-0.5;
    p[2].z=0.5;
    glVertexPointer(3, GL_FLOAT, 0,p);
    glDrawArrays(GL_POINTS, 0, 3);
    glDisableClientState(GL_VERTEX_ARRAY);

    RETURN0();

}
)

(define-gl-glue (gl-test-c2){
    glViewport (0,0,400,800);
    glMatrixMode   (GL_PROJECTION);
    glLoadIdentity ();
RETURN0();

})

(define-gl-glue (gl-test-c){
    glViewport (0,0,400,800);
    glMatrixMode   (GL_PROJECTION);
    glLoadIdentity ();
    //glOrthof (0, 0, 0, 0, 0, 0);

    typedef struct {
    GLfloat x,y,z;
    } XYZ;

    glEnableClientState (GL_VERTEX_ARRAY);
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode (GL_MODELVIEW);
    glLoadIdentity ();
    glFrontFace(GL_CW);
    glColor4f(1.0, 0.0, 0.0, 1.0);
    glPointSize(18);

    XYZ p[3];
    p[0].x=-0.5;
    p[0].y=0.5;
    p[0].z=0;
    p[1].x=0.5;
    p[1].y=0.5;
    p[1].z=0;
    p[2].x=-0.5;
    p[2].y=-0.5;
    p[2].z=0.5;
    glVertexPointer(3, GL_FLOAT, 0,p);
    glDrawArrays(GL_POINTS, 0, 3);
    glDisableClientState(GL_VERTEX_ARRAY);



RETURN0();
}
)

(define-gl-glue (gl-test-reshape w h){

    int height=fx2int(h);
    int width=fx2int(h);
    if (height==0)
    {
    height=1;
    }

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //gluPerspective(45.0f,(GLfloat)width/(GLfloat)height,0.1f,100.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

RETURN0();
})



