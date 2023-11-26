#include <stdio.h>


void fun3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value of %d , %d is %d \n  ", i, j, arr[i][j]);
        }
    }
}

int main()
{
    
    int matrix[2][2] = {{3, 5}, {4, 7}};
    

    fun3(matrix);
     return 0;
    

}
 