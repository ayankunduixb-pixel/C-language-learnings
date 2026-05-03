#include <stdio.h>
int main() {
    int arr[100];
    int n,i;
    printf("Enter number of elments:");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest,smallest;
    for(int i = 0; i < n; i++) {
    if(arr[i] > largest) {
        largest = arr[i];  
    }
    }
    for(int i = 0; i < n; i++) {
    if(arr[i] < smallest) {
        smallest = arr[i];  
    }
    }
    printf("the largest number is:%d\n",largest);
    printf("the smallest number is:%d\n",smallest);
    return 0;
}
