#include <stdio.h>
int b =34;
 int ret()
{
    return 43*3;
}

int functions(int b1)
{
    static int myvar =  ret();
    printf("The value of myvr  is %d \n ", myvar);
    myvar++;

    return b1+myvar;

}
int main()
{int b=44;

int val=functions(b);

int *ptr= &val;
     return 0;
}