(define-macro (define-gui-glue (name . args ) . body)
`(define-safe-glue (,name ,@args)
properties: (
;(other-h-files "<glue.h>")
;(other-include-dirs "" )
;(other-c-files "")
;(other-libs "")
)
,@body))

