//two string copy to one string without using library function  and then print the 1st digit of the string.
#include <stdio.h>
int main() {
    char str1[100], str2[100], merged[200];
    int i, j;

    // Input first string
    printf("Enter the first string: ");
    scanf("%s", str1);  // Using %[^\n] to read string with spaces

    // Input second string
    printf("Enter the second string: ");
    scanf("%s", str2);  // Using %[^\n] to read string with spaces

    // Copy first string to merged
    for(i = 0; str1[i] != '\0'; i++) {
        merged[i] = str1[i];
    }

    // Copy second string to str3f
    for(j = 0; str2[j] != '\0'; j++, i++) {
        merged[i] = str2[j];
    }
    merged[i] = '\0'; // Null-terminate the concatenated string

    // Print the concatenated string
    printf("Concatenated String: %s", merged);

    // Print the first character of the concatenated string
    if(merged[0] != '\0') {
        printf("The first character of the concatenated string is: %c\n", merged[0]);
    } else {
        printf("The concatenated string is empty.\n");
    }

    return 0;
}

    