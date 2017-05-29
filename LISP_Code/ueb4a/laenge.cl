(defun laenge (*list*)
 	(if (equal *list* NIL)
  		(+ 0 0)
  		( + 1  (laenge(cdr *list*)))
   	)
)

(defun sortieren (liste)
	(setq cnt 0)
	(setq el 0)
	(dolist (i liste)
	;;(format t "iteration ~d" cnt)
		(setq el (+ el (laenge i)))
		(setq cnt (+ cnt 1))
	)
	(format t "cnt: ~d~%" cnt)
	(format t "el: ~d~%" el)
	(float(/ el cnt))
	

)	
		
  
(format t "~d~%" (sortieren '((moin hallo tschuess) (moin moin) (und hallo))))
(format t "~d~%" (sortieren '((a b c d g e)(4 5 6 7 2 3 ) (5 6 7 2 3 5 5)(j jk dfsad gf)(df dk)(df dks ls))))
