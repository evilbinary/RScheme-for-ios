;;gl const define here
(define-gl-const GL-POINTS  			"GL_POINTS")
(define-gl-const GL-UNSIGNED_BYTE  		"GL_UNSIGNED_BYTE")
(define-gl-const GL-FLOAT  			"GL_FLOAT")
(define-gl-const GL-PROJECTION  		"GL_PROJECTION")
(define-gl-const GL-MODELVIEW  			"GL_MODELVIEW")
(define-gl-const GL-COLOR-BUFFER-BIT  		"GL_COLOR_BUFFER_BIT")
(define-gl-const GL-TEXTURE-2D  		"GL_TEXTURE_2D")
(define-gl-const GL-TEXTURE-COORD-ARRAY  	"GL_TEXTURE_COORD_ARRAY")
(define-gl-const GL-SHORT  			"GL_SHORT")
(define-gl-const GL-TEXTURE-MIN-FILTER  	"GL_TEXTURE_MIN_FILTER")
(define-gl-const GL-TEXTURE-MAG-FILTER  	"GL_TEXTURE_MAG_FILTER")
(define-gl-const GL-LINEAR  			"GL_LINEAR")
(define-gl-const GL-NEAREST  			"GL_NEAREST")
(define-gl-const GL-LINEAR-MIPMAP-LINEAR  	"GL_LINEAR_MIPMAP_LINEAR")
(define-gl-const GL-VERTEX_ARRAY  		"GL_VERTEX_ARRAY")
(define-gl-const GL-COLOR_ARRAY  		"GL_COLOR_ARRAY")
(define-gl-const GL-BLEND  			"GL_BLEND")
(define-gl-const GL-SRC-ALPHA  			"GL_SRC_ALPHA")
(define-gl-const GL-ONE-MINUS-SRC-ALPHA  	"GL_ONE_MINUS_SRC_ALPHA")
(define-gl-const GL-TRIANGLES  			"GL_TRIANGLES")
(define-gl-const GL-TRIANGLE-STRIP  		"GL_TRIANGLE_STRIP")
(define-gl-const GL-TRIANGLE-FAN  		"GL_TRIANGLE_FAN")
(define-gl-const GL-LINES  			"GL_LINES")
(define-gl-const GL-LINE-STRIP  		"GL_LINE_STRIP")
(define-gl-const GL-LINE-LOOP  			"GL_LINE_LOOP")


(define-gl-const GL-RGB  			"GL_RGB")
(define-gl-const GL-RGBA  			"GL_RGBA")
(define-gl-const GL-ALPHA  			"GL_ALPHA")
(define-gl-const GL-SCISSOR-TEST  		"GL_SCISSOR_TEST")
(define-gl-const GL-TEXTURE-WRAP_S  		"GL_TEXTURE_WRAP_S")
(define-gl-const GL-TEXTURE-WRAP_T  		"GL_TEXTURE_WRAP_T")
(define-gl-const GL-REPEAT  			"GL_REPEAT")

;;GL_CLAMP/GL_CLAMP_TO_EDGE
(define-gl-const GL-CLAMP  			"GL_CLAMP_TO_EDGE")
(define-gl-const GL-INVALID-VALUE  		"GL_INVALID_VALUE")


(define-gl-const GL-DEPTH-BUFFER-BIT  		"GL_DEPTH_BUFFER_BIT")
(define-gl-const GL-DEPTH-TEST  		"GL_DEPTH_TEST")
(define-gl-const GL-CULL-FACE  		"GL_CULL_FACE")
(define-gl-const GL-FRONT  			"GL_FRONT")
(define-gl-const GL-BACK  			"GL_BACK")
(define-gl-const GL-TRUE  			"GL_TRUE")

(define-gl-const GL-LINE-SMOOTH  		"GL_LINE_SMOOTH")
(define-gl-const GL-CW  		"GL_CW")
(define-gl-const GL-VERTEX-ARRAY  		"GL_VERTEX_ARRAY")





(define (gl-test-demo1)

(glut-init)
(glut-event (lambda (type x y)
	(format #t "~a ~a ~a\n" type x y)))
(glut-display (lambda()
    (let ((points  (list->vector (list -0.5 0.5 0.0 0.5 0.5 0.0 -0.5 0.5 0.5 )) ))
	;(format #t "display\n")
    (gl-clear GL-COLOR-BUFFER-BIT)

    (gl-enable-client-state GL-VERTEX-ARRAY)
    (gl-front-face GL-CW)
    (gl-color4f 1.0  0.0 0.0 1.0)
    (gl-point-size 18.0)
    (gl-vertex-pointer 3 GL-FLOAT 0 points)
    (gl-draw-arrays GL-POINTS 0 3 )
    (gl-disable-client-state GL-VERTEX-ARRAY)


;(gl-test-c2)
;(gl-test-c1)

    )
))
(glut-reshape (lambda(w h)
    ;(gl-test-reshape w h)
	(format #t "reshape\n")
    (gl-disable GL-BLEND)
    (gl-disable GL-CULL-FACE)
    (gl-disable GL-DEPTH-TEST)

(gl-viewport 0 0 400 800)
(gl-matrix-mode GL-PROJECTION)
(gl-load-identity)

;(gl-color-texture-reset)
;(gl-clear-color 0.0 0.0 0.0 0.0 )
;(gl-matrix-mode GL-PROJECTION)
;(gl-load-identity)
;    (gl-ortho 0.0 300.0 0.0 400.0 -1.0 1.0)
;    (gl-matrix-mode GL-MODELVIEW)
;    (gl-enable GL-LINE-SMOOTH)

))
(glut-main-loop)
;(glut-exit)
)