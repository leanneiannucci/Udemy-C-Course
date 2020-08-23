#include <stdio.h>
#include <ctype.h>

#define FILENAME "Test.txt"
#define FILENAME_COPY "Test_copy.txt"

int main() {

    FILE *fp = NULL;
    FILE *fp_copy = NULL;
    long fpos;

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

    fseek(fp,0,SEEK_END);
    fpos = ftell(fp);
    rewind(fp);
    fseek(fp_copy,fpos,SEEK_END);
    rewind(fp_copy);

   for (int i = 1; i <= fpos; i++){
       fseek(fp,-i,SEEK_END);
       fseek(fp_copy, i, SEEK_CUR);
        fputc(fgetc(fp), fp_copy);
  }
    remove(FILENAME);
    fclose(fp_copy);
    rename(FILENAME_COPY, FILENAME);
}
