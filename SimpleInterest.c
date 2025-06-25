#include<stdio.h>
void calculate(int p, float r, float t){
    float si= (p*r*t)/100;
    printf("Simple Interest is %f\n",si);
}
int main(){
    int principle;
    float  rate, time, si;
    printf("Enter the Amount : ");
    scanf("%d",&principle);
    printf("Enter the rate : ");
    scanf("%f",&rate);
    printf("Enter the time(years) : ");
    scanf("%f",&time);
    calculate(principle, rate, time);
    return 0;
}
