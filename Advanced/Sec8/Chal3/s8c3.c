//
// Created by Leanne Iannucci on 8/31/20.
//

#include "s8c3.h"
#include <math.h>

int bin2dec(long long bin) {
    int conv, count = 0;
    while(bin) {

        if (bin % 10) {
            conv = conv + (int)(pow(2,count));
        }
        bin = (long long)(bin/10);
        count++;
    }

    return conv;

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
