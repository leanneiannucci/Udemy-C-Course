#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "Test.txt"
#define FILENAME_COPY "Test_copy.txt"

int main() {

    FILE *fp = NULL;
    FILE *fp_copy = NULL;
    char ch;
    int a;

    fp = fopen(FILENAME, "r");
    fp_copy = fopen(FILENAME_COPY, "w+");

    if(fp == NULL)
    {
        printf("File does not exist\n");
        return -1;
    }
    if(fp_copy == NULL)
    {
        printf("File does not exist\n");
        return -1;
    }

    while((ch=fgetc(fp))!=EOF) {
        a = islower(ch);
        if (a>0) {
            ch = toupper(ch);
        }
        fputc(ch,fp_copy);
    }

    remove(FILENAME);
    fclose(fp_copy);
    rename(FILENAME_COPY, FILENAME);

}
