#include <stdio.h>
int main()
{
    FILE* ptr = NULL;
    char string[64]= "This content was proucde by me ";

ptr = fopen("flies.txt ","r");
fscanf(ptr ,"%s ",string);
printf("The content of the files has %s \n ",string );







    // ptr= fopen("flies.txt", "a ");
    // fprintf(ptr,"%s ",string);
    // return 0;

     return 0;
}