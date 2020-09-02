#include <stdio.h>
#include "s8c4.h"

int main() {
    int num, bit, newNum;



    // input number and nth bit from user
    printf("Enter any number: ");
    scanf("%d",&num);
    newNum = num;
    printf("\nEnter nth bit to check and set (0-31): ");
    scanf("%d",&bit);


    // check if the nth bit of the given number is set (1) or not
    printf("The %d bit is set to %d.", bit, checkBit(num, bit));

    // set nth bit of given number as 1
    setBit(newNum, bit);

    //print results
    printf("Number before setting %d bit: %d", bit, num);
    printf("Number after setting %d bit: %d", bit, newNum);



    return 0;
}
