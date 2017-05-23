#ifndef FOLGE_H
#define FOLGE_H
#include <stdio.h>

double recursive(unsigned int n);

typedef struct {
char fileName[60];
char endian[20]; // either "big endian" or "little endian"
char dataType[20];
char sizeOfDataType[10];
char elementCount[10];
} FileHeader;



void readBinaryHeaderFile(const char *fileName);



#endif
