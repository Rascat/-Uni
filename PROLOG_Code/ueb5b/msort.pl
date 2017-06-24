% Prolog

% Regel merge
merge([], Xs, Xs).
merge(Xs, [], Xs).
merge([X|Xs], [Y|Ys], [X|S]) :-
	X @=< Y,
	merge(Xs, [Y|Ys], S).
merge([X|Xs], [Y|Ys], [Y|S]):-
	Y @=< X,
	merge([X|Xs],Ys,S).

%Regel split_at
split_at(Xs, N, Ys, Zs):-
	length(Ys, N),
	append(Ys, Zs, Xs).

% Regel split_half
split_half(Xs, Ys, Zs) :-
	length(Xs, Len),
	Half is Len // 2,
	split_at(Xs, Half, Ys, Zs).

% Die leere Liste wird als solche zurueck gegeben
msort([], []).
% Die ein-elementige Liste wird als soche zurueckgegeben
msort([X], [X]).

msort([X|Xs], S):-
	length(Xs, Len),
	0 < Len,
	split_half([X|Xs], Ys, Zs),
	msort(Ys, SY),
	msort(Zs, SZ),
	merge(SY,SZ, S).
