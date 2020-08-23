//
// Created by Leanne Iannucci on 5/19/20.
//

#include "chal2fun.h"


int strLength(const char *ptr) {
    const char *incrPtr = ptr;

    while ((*incrPtr)) {
        ++incrPtr;
    }
        return incrPtr - ptr;




}