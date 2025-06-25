#include<stdio.h>
//Swapping without using third variable
void swap(int *a, int *b){
    *a= *a + *b - (*b = *a);
}
int main(){
    int a=10, b=20;
    printf("Before Swapping \n");
    printf("A = %d \nB = %d\n",a,b);
    swap(&a, &b);
    printf("After Swapping \n");
    printf("A = %d \nB = %d\n",a,b);
}
