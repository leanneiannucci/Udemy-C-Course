//
// Created by Leanne Iannucci on 7/21/20.
//

#include <stdbool.h>
#include "s10c1.h"


int countStr(char str[]){
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;

}

void strCat(char str1[], char str2[], char result[]){
    int len1 = countStr(str1);
    int len2 = countStr(str2);
    for (int i = 0; i < (len1+len2); i ++){
        if (i < len1) {
            result[i]=str1[i];
        } else {
            result[i]=str2[i-len1];
        }
    }
    result[len1+len2+1] = '\0';


}

_Bool strEq(char str1[], char str2[]){
    _Bool isEq=0;
    if (countStr(str1) != countStr(str2)){
        return isEq;
    } else {
        for (int i = 0; i< countStr(str1); i++){
            if (str1[i] != str2[i]){
                isEq = 0;
                break;
            } else {
                isEq = 1;
            }
        }
        return isEq;
    }
}



