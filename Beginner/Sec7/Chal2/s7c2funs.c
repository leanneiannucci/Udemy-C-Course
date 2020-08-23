//
// Created by Leanne Iannucci on 5/25/20.
//

#include "s7c2funs.h"
#include <stdlib.h>

int rangeRand(int min, int max) {
    int num = min-1;

    while ((num < min) || (num > max)) {
        num = (rand() % (max-min+1))+min;

    }

    return num;
}

