#include <stdio.h>
#include "s10c1.h"
#include <stdlib.h>

int main() {

    // function 1 count the number of characters in a string
    printf("%d\n", countStr("hello"));
    printf("%d\n", countStr("hkjsnlcknl"));

    // function 2 concatenate two char arrays

    char str1[] = "Hello,";
    char str2[] = " It's me";
    char *finalStr = malloc((countStr(str1) + countStr(str2) + 1) * sizeof(char));
    strCat(str1, str2, finalStr);
    printf("%s\n",finalStr);


    // function 3 are two strings equal

    printf("%d\n",strEq("Hello", "hello"));
    printf("%d\n",strEq("Hello", "Hello"));
    printf("%d\n",strEq("Hello", "Hellp"));


}
