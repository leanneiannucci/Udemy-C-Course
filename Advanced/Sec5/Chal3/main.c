#include <stdio.h>

static int count = 0;

void myFun(void);

int main() {

    for (;count<5; count++){
        myFun();
    }
    return 0;
}


void myFun(void){
    printf("%d ", count);
}
