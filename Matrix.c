//Write a Program to perform different matrix operations like addition, multiplication with m*n matrix without using functions.
#include <stdio.h>
int main() {
    int r, c, i, j, k;
    int matrix1[10][10], matrix2[10][10], sum[10][10], product[10][10];

    // Input number of rows and columns
    printf("Enter number of rows and columns (max 10): ");
    scanf("%d %d", &r, &c);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix addition
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Matrix multiplication
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            product[i][j] = 0;
            for(k = 0; k < c; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display sum of matrices
    printf("Sum of the two matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Display product of matrices
    printf("Product of the two matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}