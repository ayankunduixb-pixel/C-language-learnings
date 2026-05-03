#include <stdio.h>
int main() {

    int n1,n2,i;
    int arr1[n1],arr2[n2];
    printf("Enter number of elments:");
    scanf("%d",&n1);
    printf("Enter %d elements: ",n1);
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter number of elments:");
    scanf("%d",&n2);
    printf("Enter %d elements: ",n2);
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int merged[n1+n2];
    for(i=0;i<n1;i++){
        merged[i]=arr1[i];
    }
    for(i=0;i<n2;i++){
        merged[n1+i]=arr2[i];
    }
    printf("merged array is:\n");
    for(i=0;i<n1+n2;i++){
        printf("%d",merged[i]);
    }
    return 0;
}
