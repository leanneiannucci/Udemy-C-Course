#include <stdio.h>
#include "s8c4.h"

int main() {
    int num, bit, newNum;

    // input number and nth bit from user
    printf("Enter any number: ");
    scanf("%d",&num);
    newNum = num;
    printf("The number %d is %lld in binary. Enter nth bit to check and set (0-31): ", num, dec2bin(num));
    scanf("%d",&bit);

    // check if the nth bit of the given number is set (1) or not
    printf("The %d bit is set to %d.\n", bit, checkBit(num, bit));

    // set nth bit of given number as 1
    setBit(&newNum, bit);

    //print results
    printf("Number before setting %d bit: %d\n", bit, num);
    printf("Number after setting %d bit: %d\n", bit, newNum);

    return 0;
}
