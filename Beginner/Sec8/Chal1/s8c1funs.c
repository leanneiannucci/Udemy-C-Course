//
// Created by Leanne Iannucci on 7/13/20.
//

#include "s8c1funs.h"

int isPrime(int i, int n) {
        if (i==1) {
            return 0;
        } else if (n==1) {
            return 1;
        }
        else if ((i % (n) == 0)) {
            return 0;
        } else {
            return isPrime(i,n-1);
        }
}