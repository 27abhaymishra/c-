#include <stdio.h>

int myfunc(int a,int b){
//auto int myVar
static int myVar;
myVar++;
printf("The myVar is %d \n", myVar);

//myvar = a+b;
return myVar;

}
int main()
{int a;


register int myVar = myfunc(3,5);
myVar = myfunc(3,5);
  myVar = myfunc(3,5);
  myVar = myfunc(3,5);  
     return 0;
}