(define-macro (define-ios-glue (name . args ) . body)
  `(define-safe-glue (,name ,@args)
     properties: (
                  (other-h-files "<iosop.h>")
                ;(other-include-dirs "" )
                 ;(other-c-files "iosop.m")
          ;(other-libs "ffi")
          )
     ,@body))
