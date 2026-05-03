//Binary Search using recursion in C
#include <stdio.h>
int binarySearch(int arr[], int low, int high, int key) {
    while (low<= high) {
        int mid = (low+high)/2;

        // If the element is present at the middle itself
        if (arr[mid] == key) {
            return mid;
        }
        // If the element is smaller than mid, then it can only be present in low subarray
        if (arr[mid] < key) {
            return binarySearch(arr, mid+1, high, key);
        }
        // Else the element can only be present in high subarray
        return binarySearch(arr, low, mid-1, key);
    }
    // Element is not present in array
    return -1;
}
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1) {
        printf("Element found at position %d\n", result+1);
    } else {
        printf("Element not found in array\n");
    }
    return 0;
}
