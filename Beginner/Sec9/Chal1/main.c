#include <stdio.h>
#include "s9c1funs.h"

int main() {

    // function 1.. greatest common divisor of two non negative numbers
    printf("%d\n", gcd(4,2,0));
    printf("%d\n", gcd(10,5,0));
    printf("%d\n", gcd(100,12,0));
    printf("%d\n", gcd(456769,3,0));
    printf("%d\n", gcd(3,456769, 0));

    // function 2... absolute value calc of a float
    printf("%2.2f\n", absFloat(6.2));
    printf("%2.2f\n", absFloat(-6.2));
    printf("%2.2f\n", absFloat(0));
    printf("%2.2f\n", absFloat(5));
    printf("%2.2f\n", absFloat(-5));
    printf("%2.2f\n", absFloat((int) 5));
    printf("%2.2f\n", absFloat((int) -5));



}
