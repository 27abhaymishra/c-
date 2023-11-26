#include <stdio.h>

void printstr(char str[]){
    int i= 0;
    while (str[i]!='\0')
    {
       printf("%c ", str[i]);
       i++;
    }
    printf("\n");
    
}

int main()
{char str[34];
gets(str);
printf("Using custom functions printstr \n");
printf(str);
printf("Using printf %s \n ", str);
printf("using puts : \n ",str);
puts(str);


    
     return 0;
}
