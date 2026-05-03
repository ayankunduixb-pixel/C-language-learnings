#include <stdio.h>

int main() {
    int arr[5], key, low, high, mid, i, found = 0;

    // Step 1: Take 5 numbers in ascending order
    printf("Enter 5 numbers in ascending order:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 2: Take number to search
    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Step 3: Binary search using for loop
    low = 0;
    high = 4;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("%d found at position %d.\n", key, mid + 1);
            found = 1;
            break;
        } 
        else if(arr[mid] < key) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    if(found=0)
        printf("%d not found in the list.\n", key);
    return 0;
}
