#include <stdio.h>
#include <stdlib.h>

int main ( ) {
  int x = 8;
  int N = 4;
  printf (" Initial value of x = %d\n", x);
  for ( int i = 0; i < N; i++ ) {
    x = x << 1;
    printf("New value of x = %d\n", x);
  }
  printf("C is alive and well ...\n");

} 
