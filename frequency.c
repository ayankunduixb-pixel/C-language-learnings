//write a program in c to count the frequency of each element in an array
#include <stdio.h>
int main() {
    int n,i,j,count;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Frequency of each element:\n");
    for(i=0; i<n; i++) {
        count = 1;
        if(arr[i] == -1) {
            continue;
        }
        for(j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // Mark as counted
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}
