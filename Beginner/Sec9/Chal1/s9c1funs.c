//
// Created by Leanne Iannucci on 7/16/20.
//

#include "s9c1funs.h"

int gcd(int int1, int int2, int count) {

 static int *n;
        // check if either are negative or 0
        if (count == 0) {
            int temp = 0;

            n = &temp;
            if ((int1 < 1) || (int2 < 1))
            {
                return 0;
            } else {
                // take whichever int is smaller and begin to divide by n
                if (int1 > int2) {
                    *n = int2;
                } else {
                    *n = int1;
                }
            }
        }
        if (*n == 1){
            return 1; // base case
        } else if (int1 % (*n) == 0 && int2 % (*n) == 0) {
            // if both are successful, then return
            return *n;
        } else {
        // if not proceed with n-1
            (*n)--;
        return gcd(int1, int2, 1);
        // repeat until n = 1
        }
    }


    float absFloat(float num) {
        if (num >= 0.0) {
            return num;
        } else {
            return num*-1;
        }
}

