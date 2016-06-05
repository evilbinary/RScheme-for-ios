(define-macro (define-gl-glue (name . args ) . body)
    `(define-safe-glue (,name ,@args)
    properties: (
    ;(other-h-files "<glglue.h>")
    ;(other-include-dirs "" )
    ;(other-c-files "")
    ;(other-libs "")
)
,@body))


(define-gl-glue (gl-ortho left right bottom top near far)
{
glOrthof(extract_float(left),extract_float(right),extract_float(bottom),extract_float(top),extract_float(near),extract_float(far));
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


(define-gl-glue (gl-matrix-mode mode){
 glMatrixMode(fx2int(mode));
RETURN0();
})

(define-gl-glue (test){

static float triangleCoords[] = {//
-0.5f, -0.25f, 0, //
0.5f, -0.25f, 0, //
0.0f, 0.559016994f, 0 //
};
static float angle = 0;



glClearColor(1.0f, 0.5f, 0.5f, 1.0f);
glEnableClientState(GL_VERTEX_ARRAY);

glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

glMatrixMode(GL_MODELVIEW);
glLoadIdentity();

glRotatef(angle, 0.0f, 0.0f, 1.0f);

// Draw the triangle
glColor4f(0.63671875f, 0.76953125f, 0.22265625f, 0.0f);
glVertexPointer(3, GL_FLOAT, 0, triangleCoords);
glDrawArrays(GL_TRIANGLES, 0, 3);

RETURN0();
})



