#include <stdio.h>
#include<stdlib.h>
int isPalindrome(int num  ){
    int reversed =0;
    int orignalNumber = num;

    while (num !=0 )
    {
       reversed = reversed *10 + num %10;
       num = num/10;
    }
    printf("The reverse number is %d \n ", reversed);

    if ( orignalNumber ==reversed )
    {
    return 1;

    }
    else
    {
        return 0;
    }
    
}
int main()
{
    int number ;
    printf("Enter the number to Check the no is palindrome or not \n");
    scanf("%d",&number);

    if (isPalindrome(number))
    {
        printf("This number is palindrome \n");

    }
    else
    {
    printf("This number is not palindrome \n ");

    }
    
     return 0;
}