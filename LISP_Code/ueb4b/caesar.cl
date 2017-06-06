;; caesar.cl by Lucas Schons
;; Test
;; Scan line from standart Input and Save String in variable "line"
(defun cryptLowerCase (c shift)
	(setq circularshift (- (char-code c) 97) )
	(setq circularshift (mod (+ circularshift shift) 26))
	(format t "~d" (code-char (+ circularshift 97)))

)
(defun cryptUpperCase (c shift)
	(setq circularshift (- (char-code c) 65) )
	(setq circularshift (mod (+ circularshift shift) 26))
	(format t "~d" (code-char (+ circularshift 65)))

)


(defun ceasar (&optional (shift 13))
	(setq text (read-line))
	(format t "~%der urspruengliche text lautet: ~s~%" text)
	(format t "der verschluesselte text lautet:~%")
	(loop for c across text
		do (when (alpha-char-p c)
			(when (upper-case-p c)
				(cryptUpperCase c shift)
			)
			(when (lower-case-p c)
				(cryptLowerCase c shift)
			)
		)
		do (when (not(alpha-char-p c))
			(format t "~d" c)
		)
	)
	(format t "~%")
	
)
(ceasar 10)
(ceasar)
