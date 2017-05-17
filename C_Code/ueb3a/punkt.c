#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


typedef struct {double x; double y;} Punkt;


double norm(Punkt *p){
	
	double norm = 0;
	
	norm = sqrt(((*p.x) * (*p.x)) + ((*p.y) * (*p.y)));
	
	return norm;
}

Punkt* randomPunkte( size_t len){
	
	srand(time(0));
	
	Punkt *result = malloc(sizeof(Punkt) * len);
	
	
	for(unsigned int i = 0; i < len; ++i){
		
		Punkt p = { rand() % 100, rand() % 100 };
		result[i] = p;
	}
	
	return result;
}

/*void printPunkte(Punkt const * const pts, size_t len){
	
}*/