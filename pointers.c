#include <stdio.h>
int main()
{int a = 2;
int *pntra= &a;
int *pntr= NULL;
printf("The address of pointer  to a is  %p \n", &pntra);
printf("the address of a is %p \n ", &a);
printf("the adress of a is %p \n ", &pntra);
printf("The address of some garbage value is %p \n", pntr);
printf("The value of a is %d \n", *pntra);
printf("The value of a is %d \n", a);

    /* code */
    return 0;
}
