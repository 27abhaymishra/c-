#include <stdio.h>
int main()
{
    int arr[] = { 34,65,75,34,5,63,33};
    printf("Value of postion 3 of the array is %d\n ", arr[3]);
    printf("The address of first element of array is %d\n ",&arr[0]);
    printf("The address of first element of array is %d\n ",arr);
    printf("The address of second element of array is %d\n ",&arr[1]);
    printf("The address of second element of array is %d\n ",arr+1);
    printf("The address of third element of array is %d\n ",&arr[2]);
    printf("The address of third element of array is %d\n ",arr+2);

    printf("The value of array of first element is %d \n ",*(&arr[0]));
    printf("The value of array of first element is %d \n ",arr[0]);
    printf("The value of array of second element is %d \n ",*(&arr[1]));
    printf("The value of array of second element is %d \n ",arr[1]);
    printf("The value of array of third element is %d \n ",*(&arr[2]));
    printf("The value of array of third element is %d \n ",arr[2]);
    return 0;
}

