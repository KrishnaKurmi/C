#include<stdio.h>
int check(int a, int b, int c){
    if(a>=b && a>=c)
        return a;
    else if(b>=c && b>=a)
        return b;
    else
        return c;
}
int main(){
    int a, b, c, res;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Enter 3rd number : ");
    scanf("%d",&c);
    res=check(a, b, c);
    printf("%d is the largest.\n",res);
    return 0;
}
