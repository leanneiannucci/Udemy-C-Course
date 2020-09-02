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
