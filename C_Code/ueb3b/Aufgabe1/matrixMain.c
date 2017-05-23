#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#include <inttypes.h>


int main (void){
	
	Matrix randomTest = randomMatrix(4,4);
	
	char* randomString = toStringMatrix(randomTest,4,4);
	
	printf("%s", randomString);
	
	deleteMatrix(randomTest,4);
	
	
	
}