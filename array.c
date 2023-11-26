#include <stdio.h>
int main(){
    // int marks[4];
    // marks[0]= 123;
    // printf("The marks of student 1 is : %d ", marks[0]);
    // return 0;

    int marks[2][4]= {{43,34,35,64},
                    {45,35,45,12}};

                    for (int i=0; i<2;i++){
                        for(int j=0; j<4;j++){
                            printf("%d ", marks[i][j]);

                        }
                        printf("\n");

                    }
return 0;
}