#include <stdio.h>
#include <stdbool.h>


int main() {
    int els = 0;
    int sum = 0;

    printf("How long do you want the array to be?\n");
    scanf("%d", &els);

    int arr[els];

    for (int i =0; i < els; i++){
        printf("Please enter Element #%d:\n", i+1);
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }

    printf("The sum of all these elements is %d", sum);

    return 0;
}
