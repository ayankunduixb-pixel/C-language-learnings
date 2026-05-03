//Write in a file
#include<stdio.h>
int main() {
    FILE *fptr;
    char Ayan[50];
    fptr = fopen("biltu.txt", "w");
    if (fptr == NULL) {
        printf("Error to opening file!\n");
        return 1;
    }
    printf("Enter your name: ");
    scanf("%s", Ayan);
    fprintf(fptr, "Name: %s\n", Ayan);
    fclose(fptr);
    printf("Data written to file successfully.\n");
    return 0;
}
