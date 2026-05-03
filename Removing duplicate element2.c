#include <stdio.h>
int main() {

    int n,i,j;
    int unique_count=0;
    int arr[100],unique[100];
    printf("Enter number of elments:");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < unique_count; j++) {
            if(arr[i] == unique[j])
                break;  // duplicate found
        }
        if(j == unique_count) {   // not found in unique[]
            unique[unique_count++] = arr[i];
        }
    }
    printf("Array after removing elements:");
    for(i=0;i<unique_count;i++){
        printf("%d  ",unique[i]);
    }

    
    return 0;
}
