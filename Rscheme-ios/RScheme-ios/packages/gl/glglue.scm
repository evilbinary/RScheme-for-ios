(define-macro (define-gl-glue (name . args ) . body)
    `(define-safe-glue (,name ,@args)
    properties: (
    ;(other-h-files "<glglue.h>")
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

;;;gl const define here
(define-gl-const gl-points  			"GL_POINTS")
(define-gl-const gl-unsigned_byte  		"GL_UNSIGNED_BYTE")
(define-gl-const gl-float  			"GL_FLOAT")
(define-gl-const gl-projection  		"GL_PROJECTION")
(define-gl-const gl-modelview  			"GL_MODELVIEW")
(define-gl-const gl-color-buffer_bit  		"GL_COLOR_BUFFER_BIT")
(define-gl-const gl-texture-2d  		"GL_TEXTURE_2D")
(define-gl-const gl-texture-coord-array  	"GL_TEXTURE_COORD_ARRAY")
(define-gl-const gl-short  			"GL_SHORT")
(define-gl-const gl-texture-min-filter  	"GL_TEXTURE_MIN_FILTER")
(define-gl-const gl-texture-mag-filter  	"GL_TEXTURE_MAG_FILTER")
(define-gl-const gl-linear  			"GL_LINEAR")
(define-gl-const gl-nearest  			"GL_NEAREST")
(define-gl-const gl-linear-mipmap-linear  	"GL_LINEAR_MIPMAP_LINEAR")
(define-gl-const gl-vertex_array  		"GL_VERTEX_ARRAY")
(define-gl-const gl-color_array  		"GL_COLOR_ARRAY")
(define-gl-const gl-blend  			"GL_BLEND")
(define-gl-const gl-src-alpha  			"GL_SRC_ALPHA")
(define-gl-const gl-one-minus-src-alpha  	"GL_ONE_MINUS_SRC_ALPHA")
(define-gl-const gl-triangles  			"GL_TRIANGLES")
(define-gl-const gl-triangle-strip  		"GL_TRIANGLE_STRIP")
(define-gl-const gl-triangle-fan  		"GL_TRIANGLE_FAN")
(define-gl-const gl-lines  			"GL_LINES")
(define-gl-const gl-line-strip  		"GL_LINE_STRIP")
(define-gl-const gl-line-loop  			"GL_LINE_LOOP")

(define-gl-const gl-rgb  			"GL_RGB")
(define-gl-const gl-rgba  			"GL_RGBA")
(define-gl-const gl-alpha  			"GL_ALPHA")
(define-gl-const gl-scissor-test  		"GL_SCISSOR_TEST")
(define-gl-const gl-texture-wrap_s  		"GL_TEXTURE_WRAP_S")
(define-gl-const gl-texture-wrap_t  		"GL_TEXTURE_WRAP_T")
(define-gl-const gl-repeat  			"GL_REPEAT")

;;GL_CLAMP/GL_CLAMP_TO_EDGE
(define-gl-const gl-clamp  			"GL_CLAMP_TO_EDGE")
(define-gl-const gl-invalid-value  		"GL_INVALID_VALUE")

(define-gl-const gl-depth-buffer-bit  		"GL_DEPTH_BUFFER_BIT")
(define-gl-const gl-depth-test  		"GL_DEPTH_TEST")
(define-gl-const gl-cull-face  		"GL_CULL_FACE")
(define-gl-const gl-front  		"GL_FRONT")
(define-gl-const gl-back  		"GL_BACK")
(define-gl-const gl-true  		"GL_TRUE")
(define-gl-const gl-line-smooth  	"GL_LINE_SMOOTH")


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
glDrawArrays(extract_float(mode),extract_float(first),extract_float(count));
RETURN0();
})

;;;;;;;;;;;;;;to do;;;;;;;;;;;;;;;;

;(define-gl-glue (gl-vertex-pointer size type stride pointer){
;glVertexPointer(extract_float(size),extract_float(type),extract_float(stride), );
;RETURN0();
;})

;(define-gl-glue (gl-color-pointer size type stride pointer){
;glColorPointer(extract_float(size),extract_float(type),extract_float(stride), );
;RETURN0();
;})

;(define-gl-glue (gl-coord-pointer size type stride pointer){
;glTexCoordPointer(extract_float(size),extract_float(type),extract_float(stride), );
;RETURN0();
;})


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



