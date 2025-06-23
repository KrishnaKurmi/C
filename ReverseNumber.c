#include<stdio.h>
void reverse(int num){
    int res;
    while(num>0){
        res=num%10;
        num/=10;
        printf("%d",res);
    }
    printf("\n");
}
int main(){
    int num,rev;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Reversed number is : ");
    reverse(num);
    return 0;
}
