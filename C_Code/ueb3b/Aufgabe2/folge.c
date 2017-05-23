#include <stdlib.h>
#include <stdio.h>

double recursive(unsigned int n){

	if     ( n == 0 ) return 0;
  else if( n == 1 ) return 1;
  else  return (recursive( 2^(n-1) ) - recursive(n))*(1/2);

}
