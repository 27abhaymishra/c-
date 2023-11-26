#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a= 324;
    int *ptr ;//This is a wild pointer 


    ptr = &a;//And this is no longer pointer 
    printf("The value of a is  %d \n ",*ptr);
     return 0;
}