#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"
#include <string.h>

typedef unsigned int uint;


Matrix newMatrix(size_t rows, size_t cols){

    Matrix matrix = malloc(sizeof(double *) * rows);


    for(unsigned int i = 0; i < rows; ++i){
        matrix[i] = calloc(cols, sizeof(double));
    }

    return matrix;
}

Matrix copyMatrix(Matrix m, size_t rows, size_t cols){

    for (unsigned int i = 0; i < rows; ++i){
        m[i] = realloc(m[i], sizeof(double) * cols);
    } 

    m = realloc(m, sizeof(double *) * rows );

    return m;
}

void deleteMatrix(Matrix m, size_t rows){

    for(unsigned int i = 0; i < rows; ++i){
        free(m[i]);
    }    
    
    free(m);
}

void printMatrix(Matrix m, size_t rows, size_t cols){
    int lenR = snprintf(NULL,0, "%f",0.0);
	for(uint i = 0; i < rows; ++i){
		
		char row[(cols * lenR) + 1];
		
		for(uint j = 0; j < cols; ++j){
			double digit = m[i][j];
			int len = snprintf(NULL,0,"%f", digit);
			char str[len+1];
			sprintf(str,"%f",digit);
			
			strcat(row,str);
			strcat(row," ");
		}
		strcat(row,"\n");
		printf("%s", row);
	}
	
	
}

/**
Matrix multMatrix(Matrix a, Matrix b, size_t n, size_t m, size_t p){
	
}
*/
void scaleMatrix(Matrix a, size_t rows, size_t cols, double val){
	
	for(unsigned int i = 0; i < rows; ++i ){
		for(unsigned int j = 0; j < cols; ++j){
			a[i][j] *= val;
		}
	}
}

bool equalMatrix( Matrix a, Matrix b, size_t rows, size_t cols){
	
	bool result = true;
	
	for(unsigned int i = 0; i < rows; ++i){
		for(unsigned int j = 0; j < cols; ++j){
			
			if(a[i][j] != b[i][j]){
				result = false;
				break;
			}
		}
	}
	return result;
}
