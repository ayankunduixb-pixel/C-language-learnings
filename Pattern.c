//Pattern to draw an inverted Right Angle Triangle with a manner of ABCDE, ABCD, ABC, AB, A.
#include <stdio.h>
int main() {
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        for(j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}