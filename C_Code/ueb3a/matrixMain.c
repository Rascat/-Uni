#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main (void){
	
	Matrix test = newMatrix(4,4);
	
	printMatrix(test,4,4);
	
	deleteMatrix(test,4);
	
	
	
}