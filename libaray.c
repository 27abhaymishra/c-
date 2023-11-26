#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Use of malloc //

    // int *ptr;
    // int n ;
    // printf("Enter the size of array you want to create \n");
    // scanf("%d", &n);

    // ptr= (int*)malloc(n* sizeof(int));
    // for (int  i = 0; i < n; i++)
    // {
    //    printf("Enter the value no %d  of this array \n ", i);
    //    scanf("%d ",&ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //    printf("The value of at %d array is %d \n ", i,ptr[i]);

    // }
    
    // Use of calloc
    int *ptr;
    int n;
    printf("Enter the size of an arrray you want to create \n");
    scanf("%d \n ",&n);

    ptr= (int *)calloc(n,sizeof(int));
   
    for (int  i = 0; i < n; i++)
    {
        printf("Enter the value no %d of an array  \n",i);
        scanf("%d \n",&ptr[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        printf("The value of %d of an array is %d \n ",i,ptr[i]);
    }
    
     //use of reallloc //
     printf("Enter the size of an array you want to create ");   
    scanf("%d \n ",&n);

ptr=( int *)realloc(ptr,n*sizeof(int ));
for (int  i = 0; i < n; i++)
{
    printf ("Enter the value no %d of an array  \n ",i);
    scanf("%d \n ", &n);

}
for (int  i = 0; i < n; i++)
{
    printf("Enter the value at %d of an array \n",i);
    scanf("%d \n ,&n");

}
for (int  i = 0; i < n; i++)
{
    printf("The value of %d of an array is %d \n ", i,ptr[i]);

}

free(ptr);


     return 0;
}