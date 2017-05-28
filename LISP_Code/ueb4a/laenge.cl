(defun laenge (*list*)
	(if (equal *list* NIL)
		(+ 0 0)
		( + 1  (laenge(cdr *list*)))
	)
		
	
)
(format t "~d~%" (laenge '(1 2 3 4 6 7))) 
(format t "~d~%" (laenge '(1 2 3 4))) 
(format t "~d~&" (laenge '(peter klaus valerie))) 
(format t "~d~%" (laenge '(moin (moin moin) und hallo)))
