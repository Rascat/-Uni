#include <stdio.h>
#include <stdlib.h>

struct IntArray
{
    unsigned int length;
    int* values;
};

struct IntArray* createIntArray(unsigned int length){
    struct IntArray *intArray = malloc(sizeof(unsigned int) + sizeof(int*));
    intArray->length = length;
    intArray->values = calloc(length, sizeof(int));
    return intArray;
}

void deleteIntArray(struct IntArray *intArray){
    free(intArray->values);
    free(intArray);
}

int getElement(struct IntArray *intArray, unsigned int index){
    if(intArray && index < intArray->length) {
        return intArray->values[index];
    } else {
        printf("Invalid argument.\n");
        return 1;
    }
}

void setElement( struct IntArray *intArray, int value, unsigned int index){
    if(intArray && index < intArray->length) {
        intArray->values[index] = value;
    } else {
        printf("Invalid argument.\n");
    }
}


