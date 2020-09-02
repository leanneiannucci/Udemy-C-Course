//
// Created by Leanne Iannucci on 9/1/20.
//

#include "s8c4.h"

int checkBit(int num, int bit){
    int retBit;
    retBit = (num >> bit) & 1;
    return retBit;
}

void setBit(int *num, int bit){
    int changeNum = *num;
        changeNum = (1 << bit) | changeNum;
        *num = changeNum;
}

long long dec2bin(int n) {
    long long binaryNumber = 0;
    int remainder, i = 1;
    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}