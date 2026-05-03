//Array of Structures to store data of multiple students
#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
};
void inputStudents(struct student *students, int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}
void displayStudents(struct student *students, int count) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < count; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
    }
}
int main() {
    int count;
    printf("Enter the number of students: ");
    scanf("%d", &count);
    
    struct student students[count];
    
    inputStudents(students, count);
    displayStudents(students, count);
    
    return 0;
}