// Write a program in c to check whether a number is Peterson number or not using recursion and function.
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int isPeterson(int num) {
    int sum = 0, temp = num;
    while (temp != 0) {
        int rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }
    if (sum==num)
        printf("%d is a Peterson number.\n", num);
    else
        printf("%d is not a Peterson number.\n", num);
}
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    isPeterson(num);

    return 0;
}   