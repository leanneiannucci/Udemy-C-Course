#include <stdio.h>

int main() {
    FILE *fp;
    char c;
    int count=1;
    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return(-1);
    }
    while((c=fgetc(fp))!=EOF){
        printf("%c", c);
        if (c == '\n'){
            count++;
        }
    }

    printf("\nThere are %d lines in the file.\n", count);


    fclose(fp);
    fp = NULL;
    return(0);

}
