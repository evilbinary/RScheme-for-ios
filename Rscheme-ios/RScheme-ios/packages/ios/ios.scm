
(define (read)
    (let (( pnum (read-op)))
        (if (number? (string->number pnum))
            (string->number pnum)
            pnum)))

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