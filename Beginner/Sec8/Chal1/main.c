#include <stdio.h>
#include "s8c1funs.h"

int main() {

 int primes[100],count = 0,test;

 for (int i = 1; i <= 100; i++) {
     test = isPrime(i,i-1);
     if (test == 1) {
         primes[count] = i;
         count++;
         printf("%d\n", i);
     }
 }

}
