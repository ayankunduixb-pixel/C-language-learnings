//Write a Program to perform different matrix operations like addition, multiplication with 2x2 matrix without using functions.
#include <stdio.h>
int main() {
    int i, j, k;
    int matrix1[2][2], matrix2[2][2], sum[2][2], product[2][2];

    // Input first matrix
    printf("Enter elements of first 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix addition
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Matrix multiplication
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            product[i][j] = 0;
            for(k = 0; k < 2; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display sum of matrices
    printf("Sum of the two matrices:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Display product of matrices
    printf("Product of the two matrices:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
