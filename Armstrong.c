// Write a program in c to check whether a number is Armstrong number or not using recursion.
#include <stdio.h>
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
int countDigits(int num) {
    if (num == 0) 
        return 0;
    return 1 + countDigits(num / 10);
}
int isArmstrong(int num, int digits) {
    if (num == 0) 
        return 0;
    int rem = num % 10;
    return power(rem, digits) + isArmstrong(num / 10, digits);
}
int main() {
    int num, digits, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    digits = countDigits(num);
    sum = isArmstrong(num, digits);

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}