(define-macro (define-ios-glue (name . args ) . body)
  `(define-safe-glue (,name ,@args)
     properties: (
                  (other-h-files "iosop.h")
                ;(other-include-dirs "" )
                 ;(other-c-files "iosop.m")
          ;(other-libs "ffi")
          )
     ,@body))



(define-ios-glue (read-op)
{
    REG0=make_string(show_input());
    RETURN1();
})

(define-ios-glue (alert title message)
{
    alert(string_text(title),string_text(message));
    RETURN0();
})



