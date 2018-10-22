#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "sieve.h"

int sieve(int target) {
  int size = (int)(target * log(target) * 1.15);
  char * arr = malloc(size);
  int ctr = 1;

  for(int i = 3; i <size; i+=2) {
    arr[i] = i;
  }

  for(int i = 3; i <= size; i+=2) {
    if (arr[i]) {
      for(int j = i; j <= size; j+=i) {
	if (!(j % i) && arr[j]) {
	  arr[j] = 0;
	}
      }
      ctr++;
    }
    if (ctr == target) {
      return i;
    }
  }
}


