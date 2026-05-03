#include <stdio.h>

int main() {
    int num, temp, rem, digits = 0;
    int sum = 0, i, power;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Count number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum of each digit raised to power of digits (using int math)
    while (temp != 0) {
        rem = temp % 10;
        power = 1;

        // Compute rem^digits manually
        for (i = 0; i < digits; i++) {
            power *= rem;
        }

        sum += power;
        temp /= 10;
    }

    // Check Armstrong condition
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
