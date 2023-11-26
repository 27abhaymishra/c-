#include <stdio.h>
int main()
{
    int a =34;
     int *ptr = NULL;
     int c =40;
     if (ptr !=NULL )
     {
        printf("The address of a is %d \n", ptr);
     }
     else
     {
        printf("The pointer is null pointer and it can not be dereferced ");
     }
     
     
     return 0;
}