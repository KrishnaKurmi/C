#include<stdio.h>
int rev(int num){
    int res=0;
    while(num>0){
        res*=10;
        res+=num%10;
        num/=10;
    }
    return res;
}
int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if(num==rev(num))
        printf("%d is a Palindrome Number.",num);
    else
        printf("%d is not a Palindrome Number.",num);
    return 0;
}
