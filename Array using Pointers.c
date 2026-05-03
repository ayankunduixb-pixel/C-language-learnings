//Array using Pointers
#include <stdio.h>
void inputArray(int *arr, int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", (arr + i));
    }
}   
void displayArray(int *arr, int size) {
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    inputArray(arr, size);
    displayArray(arr, size);
    
    return 0;
}