;; Binom.cl 
;; Funktion zur berechnung der Fakultät einer Zahl n
(defun fakultaet (n)
    (if (equal n 1)
        1
        (* n (fakultaet (- n 1)))
    )
)
(format t "Die Fakultaet von 4 betraegt: ~d~%" (fakultaet 4))
;; Funktion zur bestimmung des Binomialkoeffizienten zweier natürlicher Zahen a und b
(defun binomko (a b)
	(/ (fakultaet a)(* (fakultaet b)(fakultaet (- a b))))
)
(format t "Der Binom.ko. von (4 2) betraegt: ~s~%" (binomko 4 2))
(format t "Der Binom.ko. von (10 2) betraegt: ~s~%" (binomko 10 2))
(format t "Der Binom.ko. von (300 49) betraegt: ~s~%" (binomko 300 49))
(format t "Der Binom.ko. von (34 12) betraegt: ~s~%" (binomko 34 12))

