#||	Sieb des Erathostenes
	Find alle Primzahlen zwischen 2 und n \in N
	* notiere alle ganzen Zahlen von 2 bis n
	* Sei p die kleinste noch nicht gestrichenen Zahl im Sieb => p ist Prim
	* Streiche im Sieb alle vielfachen j*p <= n mit j \in {N}
||#

;; Funktion prüft ob der Divisor den Dividenten mit Rest 0 teilt
(defun doesDivide (divident divisor)
	(if (equal (mod divident divisor) 0)
		t
		nil
	)
)

;; Funktion zur Anwendung des Prinzips "Sieb des Erathostenes"
(defun sieben (n)
	
)

;; Funktion zum rekursiven entfernen aller unerwünschter Elemente aus dem Sieb
(defun sieben_r (liste prime n)
	(if (equal (car liste) n)
		(setq result (cons (car liste) '()))

	)


)

;; Funktion zum rekursiven erstellen einer Liste mit den Ganzzahlen 2 - n
(defun auffuellen_r (maximum)
	(if(equal maximum 1)
		(setq result (cons maximum '()))
		(setq result (cons maximum (auffuellen_r (- maximum 1))))
	)
	
(setq result (sort result #'< :key (lambda (p) (- p 1))))
(setq result (remove 1 result))
result

)

;; Testfeld

(setq n 15)
(format t "~d~%" (auffuellen_r n))
(format t "~d~%" (doesDivide 2 3))

