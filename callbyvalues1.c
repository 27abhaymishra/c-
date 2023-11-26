#include <stdio.h>
void changeValue(int *address){
   *address =43462;

}
int main()
{int a =4352;
printf("The value of a is %d \n", a);
   changeValue(&a);
   printf("The value of a is %d \n", a); 
     return 0;
}