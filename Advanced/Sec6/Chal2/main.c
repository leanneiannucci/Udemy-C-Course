#include <stdio.h>
#include <stdlib.h>

struct s{
    int arraySize;
    int array[];
};

int main() {

    struct s *ptr;

    printf("How long do you want the FAM to be?");
    scanf("%d", &(ptr->arraySize));
    int tmp = ptr->arraySize;
    ptr = malloc(sizeof(struct s) + (ptr->arraySize * (sizeof(int))));
    ptr->arraySize = tmp;


    for (int i = 0; i<(ptr->arraySize); i++){
        printf("Add element %d to FAM.\n", i+1);
        scanf("%d", &ptr->array[i]);
    }

    for (int i = 0; i<(ptr->arraySize); i++){
        printf("Element %d: %d\n", i+1, ptr->array[i]);
    }







    return 0;
}
