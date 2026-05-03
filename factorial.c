//factorial with recursion and without recursion
#include <stdio.h>
int factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}
int factorial_iterative(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d using recursion: %d\n", num, factorial_recursive(num));
    printf("Factorial of %d using iteration: %d\n", num, factorial_iterative(num));

    return 0;
}