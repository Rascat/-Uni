// Headerdatei zu intarray.c
// implementiert die Funktionen createIntArray(), 
// deleteIntArray(), getIntArrayAt() und setIntArrayAt().

#ifndef INTARRAY_H
#define INTARRAY_H

struct IntArray;
struct IntArray* createIntArray(unsigned int length);
void deleteIntArray(struct IntArray *intArray);
int getElement(struct IntArray *intArray, unsigned int index);
void setElement( struct IntArray *intArray, int value, unsigned int index);

#endif
