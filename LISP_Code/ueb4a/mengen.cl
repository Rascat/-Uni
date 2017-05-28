#||
Aufgabe 2: Mengenoperationen

* Vereinigung (a b)
* Durchschnitt (a b)
* Differenz (a b)
* Potenzmenge (a)
||#
(defun vereinigung (a b) (append a b))

(defun durchschnitt (a b)
	(setq result '())
	(dolist (i a)
		;;(dolist (j b)
		;;(if(equal i j)
			(setq tmp '(i))
			(append result tmp))
		;;)
	;;)
	
)

;;(format t "~d" (find 3 '(1 2 3 4)))
(setq a '(1 2 3 4 5))
(setq b '(3 4 5 6 7))
(format t "~d" (durchschnitt a b))
