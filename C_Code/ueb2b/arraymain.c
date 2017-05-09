#include <stdio.h>
#include <stdlib.h>
#include "intarray.h"

void main(){

    // test insertion
    struct IntArray *array1 = createIntArray(5);
    setElement(array1,43,2);
    int print = getElement(array1,2);
    printf("%d\n", print);
    deleteIntArray(array1);

    // test error msgs
    struct IntArray *array2 = createIntArray(5);
    setElement(array2,43,6);
    int error_result = getElement(array2,7);
    printf("%d\n", error_result);
    deleteIntArray(array2);
    
}
