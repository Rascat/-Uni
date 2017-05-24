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

typedef enum {bigEndian, littleEndian} Endianness;

double doubleSwap(const double value);

Endianness systemEndian();

double *endianDoubleSwap(double *result, const char *endian, const int elementCount);

FileHeader *readBinaryHeaderFile(const char *fileName);

double *readBinaryFile(const char *fileName);



#endif
