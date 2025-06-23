#include<stdio.h>
int check(int y){
    if((y%4==0 && y%100!=0) || (y%400==0))
        return 1;
    else
        return 0;
}
int main(){
    int year;
    printf("Enter an year : ");
    scanf("%d",&year);
    int ans = check(year);
    if(ans==1)
        printf("%d is a leap year.\n",year);
    else
        printf("%d is not a leap year.\n",year);
    return 0;
}
