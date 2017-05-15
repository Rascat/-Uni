#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"
#include <string.h>


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
    unsigned int lengthPrintRow = cols * 2;
    char renderedRow[lengthPrintRow + 1];

    for(unsigned int i = 0; i < legthPrintRow; ++i){
        
    }    

}
