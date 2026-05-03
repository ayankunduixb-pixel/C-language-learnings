// Write a program in c to removing duplicate characters from an array.
#include <stdio.h>
int main() {
    int n,i,j;
    int arr[100];
    printf("Enter number of elments:");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] == -1) {
            continue; // Skip already marked elements
        }
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                arr[j] = -1; // Mark duplicate elements
            }
        }  
    }
    printf("Array after removing elements:");
    for(i=0;i<n;i++){
        if(arr[i]==-1){
            continue;
        }
        else{
            printf("%d ",arr[i]);
        }
    }
    return 0;
} 
            