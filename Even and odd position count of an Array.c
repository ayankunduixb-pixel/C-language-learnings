//Even and odd position count of an Array
#include <stdio.h>
int main() {
    int arr[100];
    int n, i;
    int even_count = 0, odd_count = 0;

    // Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count elements at even and odd positions
    for(i = 0; i < n; i++) {
        if(i % 2 == 0) {
            even_count++;
        } 
        else {
            odd_count++;
        }
    }

    // Print counts
    printf("Count of elements at even positions: %d\n", even_count);
    printf("Count of elements at odd positions: %d\n", odd_count);

    return 0;
}