#include <stdio.h>
#include<stdlib.h>

int *functionDangling (){
    int a,b ,sum;
    a=34;
    b=40;
    sum = a+b;
    return sum ;
}
int main()
{
    int *ptr =( int *) malloc( 7* sizeof(int));
     ptr[0] =34;
     ptr[1]= 344;
     ptr[2]= 323;
ptr [3]= 234;
     
     free(ptr);

     int * dang =functionDangling();

     int *danglingPtr3; 
     {
        int a=12;
      danglingPtr3 =&a;
     }
     return 0;
}