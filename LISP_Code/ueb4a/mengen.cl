#||
Aufgabe 2: Mengenoperationen

* Vereinigung (a b)
* Durchschnitt (a b)
* Differenz (a b)
* Potenzmenge (a)
||#

;; Funktion bildet die Vereinigung zweier Mengen a und b
(defun vereinigung (a b) (append a b))

;; Funktion bildet den Durchschnitt zweier Mengen a und b
(defun durchschnitt (a b)
 	(setq result '())
  (dolist (i a)
           (dolist (j b)
                    (if(equal i j)
		    	(setq result (cons i result))
		    )
           )
 )
result 
)

;; Funktion bildet die Differenz zweier Mengen a und b
(defun differenz (a b)
	(setq result a)
	(dolist (i b)
		(setq result (remove i result))
	)
result
)


;;(format t "~d" (find 3 '(1 2 3 4)))
(setq a '(1 2 3 4 5))
(setq b '(3 4 5 6 7))
(setq c '(12 25 100 42))
(setq d '(3 7 11 13 17))
;; Durchsschnitt zweier nicht-disjunkter Mengen a und b
(format t "~d~%" (durchschnitt a b))
;; Durchschnitt zweier disjunkter Mengen c und d
(format t "~d~%" (durchschnitt c d))
;; Vereinigung zweier nicht-disjunkter Mengen a und b
(format t "~d~%" (vereinigung a b))
;; Vereinigung zweier disjunkter Mengen c und d
(format t "~d~%" (vereinigung c d))
;; Differenz zweier nicht-disjunkter Mengen a und b
(format t "~d~%" (differenz a b))
;; Differenz zweier disjunkter Mengen c und d
(format t "~d~%" (differenz c d))
