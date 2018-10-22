#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int main() {
  printf("The 3rd prime number: \n");
  printf("%d\n", sieve(3));
  printf("The 5th prime number: \n");
  printf("%d\n", sieve(5));
  printf("The 7th prime number: \n");
  printf("%d\n", sieve(7));
  printf("The 100th prime number: \n");
  printf("%d\n", sieve(100));
  printf("The 1000th prime number: \n");
  printf("%d\n", sieve(1000));
  printf("The 10000th prime number: \n");
  printf("%d\n", sieve(10000));
  
  return 0;
}
