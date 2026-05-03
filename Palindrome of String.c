#include <stdio.h>

int main() {
    char str[100];
    int len=0,i;
    printf("Enter the string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    int start=0,end=len-1;
    int flag=1;
    while(start<end){
        if(str[start]!=str[end]){
            flag=0;
            break;
        }
        start++;
        end--;
    }

    if(flag==1){
        printf("The string is palindrome");
    }
    else{
        printf("The string is not palindrome");
    }
    return 0;
}
