// Program to print Fibonacci numbers in a given range
#include <stdio.h>

int main() {
    int start, end;
    int a = 0, b = 1, c;

    printf("Enter starting range: ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    printf("Fibonacci numbers between %d and %d are:\n", start, end);

    // Print Fibonacci numbers within the given range
    while (a <= end) {
        if (a >= start)
            printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
