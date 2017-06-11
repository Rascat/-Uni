;;	Funktion zur berechnung der relativen Anzahl von Atomen in einer Liste von Listen

;; Funktion zur rekursiven bestimmung der Anzahl von Atomen in einer Liste
(defun laenge (*list*)
 	(if (equal *list* NIL)
  		(+ 0 0)
  		( + 1  (laenge(cdr *list*)))
   	)
)

;; Funktion übergibt die Teillisten der Ausgangsliste der Funktion laenge.
;; Die Variable el speichert die Gesamtanzahl der Atome aller Teillisten
;; Die Variable cnt speichert die Anzahl der Teillisten
(defun sortieren (liste)
	(setq cnt 0)
	(setq el 0)
	(dolist (i liste)
	;;(format t "iteration ~d" cnt)
		(setq el (+ el (laenge i)))
		(setq cnt (+ cnt 1))
	)
	;;(format t "cnt: ~d~%" cnt)
	;;(format t "el: ~d~%" el)
	(float(/ el cnt))
	

)	
		
;; Test-Ausgabe mit verschiedenen Listen

(format t "~d~%" (sortieren '((moin hallo tschuess) (moin moin) (und hallo))))
(format t "~d~%" (sortieren '((a b c d g e)(4 5 6 7 2 3 ) (5 6 7 2 3 5 5)(j jk dfsad gf)(df dk)(df dks ls))))
(format t "~d~%" (sortieren '((a e)(Esel Hund Katze Hahn) (3 5 5)(japan korea vietnam))))
