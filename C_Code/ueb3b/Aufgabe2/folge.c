#include <stdlib.h>
#include <stdio.h>

typedef struct {
char fileName[60];
char endian[20]; // either "big endian" or "little endian"
char dataType[20];
char sizeOfDataType[10];
char elementCount[10];
} FileHeader;

double recursive(unsigned int n){

	if     ( n == 0 ) return 0;
  else if( n == 1 ) return 1;
  else  return (recursive(n-1) + 2*recursive(n-2)) ;

}

void readBinaryHeaderFile(const char *fileName)
{
	FILE *fp;
	fp = fopen(fileName, "rb");
	int sizeFileHeader = sizeof(FileHeader);
	char buffer[sizeFileHeader + 1];
	fgets(buffer, sizeFileHeader + 1, fp);
	printf("%s\n", buffer);


}
