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

