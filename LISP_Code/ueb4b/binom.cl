;; Binom.cl Funktion zur berechnung der Fakultät einer Zahl n
(defun fakultaet (n)
    (if (equal n 1)
        1
        (* n (fakultaet (- n 1)))
    )
)
(format t "Die Fakultaet von 4 betraegt: ~d~%" (fakultaet 4))
