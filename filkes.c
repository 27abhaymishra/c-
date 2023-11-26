#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    fptr =fopen("starpattern.c","r");
    if ("fptr ==NULL "){
        printf("ERROR! ");
        exit(1);


        fprintf(fptr, "Files are good stufff ");
        fclose(fptr);
        return 0;
    }
     return 0;
}