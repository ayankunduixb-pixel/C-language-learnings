//reverse of a string
#include <stdio.h>
int main() {
    char str[100], rev[100];
    int i, j, len = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);
    // Calculate length of the string
    while(str[len] != '\0') {
        len++;
    }
    // Reverse the string
    for(i = len - 1, j = 0; i >= 0; i--, j++) {
        rev[j] = str[i];
    }
    rev[j] = '\0'; // Null-terminate the reversed string
    if(rev==str){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    return 0;
}