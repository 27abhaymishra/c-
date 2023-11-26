#include <stdio.h>

typedef struct  Student 
{
  int id;
  int marks ;
  char fav_char ;
  char name [34];

} std;

int main()
{
    typedef int* intpointers ;
intpointers a,b;
int c= 34;
a=&c;
b=&c;
 printf("The value of a is  %d ", *(b));
     return 0;
}