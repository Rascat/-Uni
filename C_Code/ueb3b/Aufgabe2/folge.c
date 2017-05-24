#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
char fileName[60];
char endian[20]; // either "big endian" or "little endian"
char dataType[20];
char sizeOfDataType[10];
char elementCount[10];
} FileHeader;

typedef enum{bigEndian, littleEndian} Endianness;

double doubleSwap(const double value){
	union{
		double value;
		unsigned char byte[8];
	} endian1, endian2;
	endian1.value = value;

	for (size_t i = 0; i < 8; ++i){
		endian2.byte[i] = endian1.byte[7-i];
	}
	return endian2.value;
}

Endianness systemEndian()
{
	int x = 1;
	if (*((char *)&x) == 1){
		return littleEndian;
	}
	return bigEndian;
}


double recursive(unsigned int n){

	if     ( n == 0 ) return 0;
  else if( n == 1 ) return 1;
  else  return (recursive(n-1) + 2*recursive(n-2)) ;

}

FileHeader* readBinaryHeaderFile(const char *fileName)
{
	FILE *fp;
	FileHeader tmp;
	FileHeader *result = &tmp;
	fp = fopen(fileName, "rb");
	if(!fp){
		printf("Unable to find file");
		exit(1);
	}

	fread(result,sizeof(FileHeader),1,fp);

	printf("%s\n", result->endian);
	printf("%s\n", result->dataType);
  printf("%s\n", result->sizeOfDataType);
  printf("%s\n", result->elementCount);

	fclose(fp);
	return result;
}

double* readBinaryFile(const char *fileName){
	FILE *fp;
	fp = fopen(fileName, "rb");
	double jnumbers[128];
	double *result = jnumbers;
	if(!fp){
		printf("Unable to find file");
		exit(1);
	}
	for(int i = 0; i < 128; ++i){
		fseek(fp,sizeof(double) * i,sizeof(FileHeader));
		fread(result,sizeof(double),1,fp);
		printf("%f\n", result[i]);

	}




	fclose(fp);
	return result;
}

double *endianDoubleSwap(double *result, const char *endian, const int elementCount){
  Endianness fileEndian = strcmp("bigEndian", endian) == 0 ? bigEndian : littleEndian;

  if(systemEndian() != fileEndian){
    for (int i = 0; i < elementCount; ++i, ++result){
      *result = doubleSwap(*result);
      printf("%d %.23f\n", i, *result);
    }
    result -=elementCount;
  }
  return result;
}
