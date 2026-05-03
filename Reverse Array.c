//Reverse array
#include <stdio.h>
int main() {
    int arr[100], rev[100];
    int n, i, j;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    for(i = n - 1, j = 0; i >= 0; i--, j++) {
        rev[j] = arr[i];
    }

    // Print the reversed array
    printf("Reversed Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }
    printf("\n");

    return 0;
}