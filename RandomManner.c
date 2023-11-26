#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber (int n){
    srand(time(NULL));
    return rand() %n;

}
int main()
{
    printf("The random number between 0 to 5 is %d \n ", getRandomNumber(5));
     return 0;
}