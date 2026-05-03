//Write a Program to split an array.
#include <stdio.h>
int main() {
    int arr[100];
    int n, i, mid;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate mid point
    mid = n / 2;

    // Print first half of the array
    printf("First half of the array:\n");
    for(i = 0; i < mid; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Print second half of the array
    printf("Second half of the array:\n");
    for(i = mid; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}