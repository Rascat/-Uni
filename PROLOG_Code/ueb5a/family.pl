% Hey Vim this is a Prolog Programm
male(tom).
male(bernd).
male(klaus).
male(simon).
male(david).
male(hugo).
female(anna).
female(susi).
female(karin).
female(klara).
/* Likes(X, Y) - X mag Y */
likes(tom, dogs).
likes(anna, tom).
likes(hugo, wine).
likes(susi, dogs).
likes(simon, dogs).
likes(simon, anna).
/* likes(X, Y) - Jeder mag seine Kinder und Eltern */
likes(X, Y):- mother(Y , X); father(Y, X); son(Y, X); daughter(Y, X).
/* likes(klaus, Y) - Klaus mag jeden, der Hunde mag */
likes(klaus, Y):- likes(Y, dogs).
/*parent(X, Y) - X ist Elternteil von Y */
parent(anna, bernd).
parent(klaus, tom).
parent(klaus, hugo).
parent(klaus, susi).
parent(simon, david).
parent(simon, klara).
parent(karin, david).
parent(karin, hugo).
parent(karin, susi).
parent(karin, klara).
/* mother(X, Y) - X ist Mutter von Y */
mother(X, Y):- parent(X, Y), female(X).
/* father(X, Y) - X ist Vater von Y */
father(X, Y):- parent(X, Y), male(X).
/*parents(X, Y) - X und Y haben ein Kind */
parents(X, Y):- parent(X, Z), parent(Y, Z).
/* brother(X, Y) - X ist der Bruder von Y */
brother(X, Y):- male(X), parent(Z, X), parent(Z, Y), X \= Y.
/* sister(X, Y) - X ist die Schwester von Y */
sister(X,  Y):- female(X), parent(Z, X), parent(Z, Y), X \= Y.
/* halfSibling(X, Y) - X ist Halbgeschwister von Y */
/* son(X, Y) - X ist Sohn von Y */
son(X, Y):- male(X), parent(Y, X).
/* daughter(X, Y) - X ist die Tochter von Y */
daughter(X, Y):- female(X), parent(Y, X).

