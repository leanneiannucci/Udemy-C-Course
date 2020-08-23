//
// Created by Leanne Iannucci on 7/21/20.
//

#include "s10c2.h"
#include <string.h>


void stringRev(char strFor[], char *strRev){
    int len = strlen(strFor);
    for (int i=0; i < len; i++) {
        strRev[i] = strFor[len-(i+1)];
    }
    strRev[len+1]='\0';
}
