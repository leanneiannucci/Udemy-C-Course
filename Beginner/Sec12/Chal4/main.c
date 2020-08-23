#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    char *blah = NULL;

    printf("Enter limit of the text: ");
    scanf("%d", &size);


    blah = (char *) malloc(size*(sizeof(char)));

    if (blah != NULL)
    {
        printf("Enter some text: ");
        scanf(" ");
        fgets(blah,size,stdin);

        printf("Inputted text is: %s \n", blah);
    }

    free(blah);
    blah = NULL;

    return 0;
}
