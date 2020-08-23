//
// Created by Leanne Iannucci on 8/21/20.
//

#include "advanced_s5c2.h"

int sum(int num) {
    static int i = 0;
    i += num;
    return i;

}