//Find even and odd position of an Array
#include <stdio.h>
int main() {
    int arr[100];
    int n, i;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements at even positions
    printf("Elements at even positions:\n");
    for(i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Print elements at odd positions
    printf("Elements at odd positions:\n");
    for(i = 1; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}