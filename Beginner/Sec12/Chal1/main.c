#include <stdio.h>

int main() {

    int blah = 10, *pBlah = NULL;

    pBlah = &blah;

    printf("Blah Value: %d\n", blah);
    printf("Blah Address: %p\n", &blah);
    printf("Pointer Address: %p\n", &pBlah);
    printf("Pointer Value: %p\n", pBlah);
    printf("Value that pBlah is pointing to: %d\n", *pBlah);



    return 0;
}
