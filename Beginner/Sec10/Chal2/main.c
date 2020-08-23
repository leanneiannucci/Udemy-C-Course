#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "s10c2.h"


int main() {
 // function 1, reverse string
    char strFor[] = "Reverse it!";
    char* strRev = malloc((strlen(strFor)+1)*sizeof(char));
    stringRev(strFor, strRev);
    printf("%s\n", strRev);


}
