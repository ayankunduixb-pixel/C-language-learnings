//1²+(1²+2²)+(2²+3²)+(3²+4²)+(4²+5²)+... N terms
#include <stdio.h>
int main() {
    int n, i;
    int sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        sum += i * i + (i + 1) * (i + 1);
    }

    printf("The sum of the series up to %d terms is: %d\n", n, sum);

    return 0;
}