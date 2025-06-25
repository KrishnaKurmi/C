#include<stdio.h>
int sumOfDigits(int num){
    int sum=0;
    while(num!=0){
        if(num%10>0)
            sum+=num%10;
        else
            sum-=num%10;
        num/=10;
    }
    return sum;
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("The Sum of Digits of %d is %d.",num,sumOfDigits(num));
    return 0;
}
