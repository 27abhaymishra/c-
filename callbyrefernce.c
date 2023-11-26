#include <stdio.h>



void swap(int *x,int *y ){
    int temp;
    temp =*x;
    *x=*y;
    *y=temp;

}
void main(){
    int r=10;
    int v=20;
    swap(&r,&v);
    printf("The value of r is  %d \n ", r);
    printf("The value of v is  %d \n ", v);

}