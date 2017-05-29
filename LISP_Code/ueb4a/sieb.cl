#||	Sieb des Erathostenes
	Find alle Primzahlen zwischen 2 und n \in N
	* notiere alle ganzen Zahlen von 2 bis n
	* Sei p die kleinste noch nicht gestrichenen Zahl im Sieb => p ist Prim
	* Streiche im Sieb alle vielfachen j*p <= n mit j \in {N}
||#
(defun sieben (n)
	
)

(defun sieben_r (liste)

)

(defun auffuellen_r (maximum)
	(if(equal maximum 1)
		(setq result 1)
		(setq result (cons maximum (auffuellen_r (- maximum 1))))
	)
	
;;etq result (reverse result))
result

)

(setq n 15)
(format t "~d~%" (auffuellen_r n) )
