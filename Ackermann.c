//// Write a program in c to check whether a number is Ackermann function or not using recursion and function.2
#include <stdio.h>

int ackermann(int m, int n) {
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return ackermann(m - 1, 1);
    else
        return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    int m, n, result;

    printf("Enter two non-negative integers (m and n): ");
    scanf("%d %d", &m, &n);

    result = ackermann(m, n);

    printf("Ackermann(%d, %d) = %d\n", m, n, result);

    return 0;
}
