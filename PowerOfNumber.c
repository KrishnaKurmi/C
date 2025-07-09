// PowerOfNumber.c
// Program to calculate the power of a number (x^y)

#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d^%d = %lld\n", base, exponent, result);

    return 0;
}
