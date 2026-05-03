//Write a Program in C to sort elements of array in ascending order.
#include <stdio.h>
int main() {
    int n, i, j, temp;
    
    // Ask user for the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input elements of the array
    printf("Enter %d integers: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sorting the array in ascending order using Bubble Sort
    for(i = 0; i < n; i++) {
        for(j = 0; j < n-i; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Print the sorted array
    printf("Sorted array in ascending order: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}