#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int isArmstrong(int num) {
    int original = num;
    int sum = 0, digits = 0;
    int temp = num;

    // Count number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num; // Reset temp

    // Calculate sum of digits raised to the power of digits
    while (temp != 0) {
        int digit = temp % 10;
        sum += power(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
