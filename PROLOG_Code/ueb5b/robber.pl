% Prolog


kenntKombination(X):-
	X = [_,_,_,_,_], /* Es gibt 5 Männer die die Kombination kennen */
	member([jones,dick,vw,_,_],X), /* Mr. Jones ist dick und fährt einen VW */
	member([smith,_,jaguar,englaender,_],X), /* Mr. Smith fährt einen Jaguar und ist Engländer */
	member([_,duenn,fiat,_,_],X), /* Der dünne Mann fährt einen Fiat */
	member([poole,_,_,schotte,_],X,), /* Mr. Poole ist Schotte */
	member([kent,_,_,_,blau],X), /* Mr. Kent traegt einen blauen Anzug */
	member([_,dick,_,_,schwarz],X), /* Der dicke Mann traegt einen schwarzen Anzug */
	member([_,duenn,_,ire,_],X), /* Der duenne Mann ist Ire */
	member([bright,_,renault,_,gruen],X), /* Mr. Bright traegt einen gruenen Anzug und faehrt einen Renault */
	member([_,klein,_,schotte,_],X), /* Der kleine Mann ist Schotte */
	member([_,duenn,_,_,blau],X), /* Der duenne Mann traegt einen blauen Anzug */
	member([_,normal,_,kanadier,_],X), /* Der Mann normaler Statur ist Kanadier */
	member([_,_,mazda,_,grau],X), /* Der Mann im grauen Anzug faehrt einen Mazda */
	member([_,_,_,waliser,schwarz],X), /* Der Mann im schwarzen Anzug ist Waliser */
	member([_,gross,_,_,braun],X) /* Der grosse Mann traegt einen braunen Anzug */

	warenZusammen([_,_,_,waliser,_],[_,_,_,kanadier,_],X),
	warenZusammen([_,gross,_,_,_],[_,_,mazda,_,_],X).


