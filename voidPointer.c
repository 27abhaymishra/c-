#include <stdio.h>

int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr =&b;
    printf(" The value of b  %f \n ", *((float* )ptr));
    ptr =&a;
    printf("The value of a %d \n  ", *((int *)ptr));
     return 0;
}