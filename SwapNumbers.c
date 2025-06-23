#include<stdio.h>
//Swapping using third variable
void swapUsingVar(int a, int b){
    int c=a;
    a=b;
    b=c;
    printf("A = %d \nB = %d\n",a,b);
}
int main(){
    int a = 10,b = 20;
    printf("Before Swapping \n");
    printf("A = %d \nB = %d\n",a,b);
    printf("After Swapping \n");
    swapUsingVar(a,b);
    printf("------------------\n");

    //Swapping without using third variable
    printf("Before Swapping \n");
    printf("A = %d \nB = %d\n",a,b);
    a=a+b-(b=a);
    printf("After Swapping \n");
    printf("A = %d \nB = %d\n",a,b);
}
