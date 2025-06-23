#include<stdio.h>
// using recursion
int fact(int num){
    if(num==0)
        return 1;
    else
        return num*fact(num-1);
}
int main(){
    int num, res;
    printf("Enter a number : ");
    scanf("%d",&num);
    res=fact(num);
    printf("Factorial of %d is %d\n",num,res);
    return 0;
}