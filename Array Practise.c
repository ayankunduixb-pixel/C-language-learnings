#include <stdio.h>

int main() {
    int arr[100], n, i;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read elements into array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("The elements of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
