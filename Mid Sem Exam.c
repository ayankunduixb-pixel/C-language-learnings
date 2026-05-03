//s=1^2/1! + 2^2/2! - 3^2/3! + 4^2/4! - .....n terms
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
float calculate_series(int n) {
    float sum = 0.0;
    for (int i = 1; i <= n; i++) {
        float term = power(i,2)/(float)factorial(i);
        if (i % 2 == 0) {
            sum += term; // even term is added
        } else {
            sum -= term; // odd term is subtracted
        }
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    float result = calculate_series(n);
    printf("The result of the series up to %d terms is: %.6f\n", n, result);
    
    return 0;
}