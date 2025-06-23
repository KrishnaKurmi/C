#include<stdio.h>
void main(){
    int n;
    int a=0,b=1,next;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    printf("The fibonacci series is : \n");
    for(int i=0;i<n;i++){
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
    }
}