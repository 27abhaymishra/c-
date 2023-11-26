#include <stdio.h>
#include <string.h>
struct  Student 
{
  int id;
  int marks ;
  char fav_char ;
  char name [34];

}harry,ravi,shumbum;

int main()
{ harry.id = 1;
ravi.id = 2;
shumbum.id = 3;
harry.marks= 45;
ravi.marks= 30;
shumbum.marks= 10;
harry.fav_char ='s';
ravi.fav_char= 'p';
shumbum.fav_char ='o';

strcpy(harry.name, "Passionate about cars");
strcpy(shumbum.name,"Gamer");
printf("Harry has got %d  marks \n ", harry.marks);
printf("harry name is :%s \n", harry.name);

printf(" shumbum has got %d  marks \n ", shumbum.marks);
printf(" shumbum name is :%s \n", shumbum.name);
    
  

     return 0;
}