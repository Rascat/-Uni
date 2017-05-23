#include <stdio.h>
#include "folge.h"

int main(){
  double result = recursive(4);
  printf("%f\n", result );

  char *fileName = "C:\\Users\\Lucas\\Projects\\WeeklyChallenges\\C_Code\ueb3b\\Aufgabe2\\excersize3b.bin";
  readBinaryHeaderFile(fileName);

  return 0;
}
