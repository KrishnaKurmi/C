#include<stdio.h>
//Swapping using third variable
void swapUsingVar(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
int main(){
    int a = 10,b = 20;
    printf("Before Swapping \n");
    printf("A = %d \nB = %d\n",a,b);
    printf("After Swapping \n");
    swapUsingVar(&a,&b);
    printf("A = %d \nB = %d\n",a,b);
    printf("------------------\n");
    return 0;
}
