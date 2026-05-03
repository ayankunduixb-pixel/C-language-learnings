//power function of x^y
#include <stdio.h>
double power(double x, int y) {
    double result = 1.0;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}
int main() {
    double base;
    int exponent;

    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (y): ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);

    return 0;
}