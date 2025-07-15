// 37. Write a C program to implement a structure for storing student information and display it.

#include <stdio.h>

// Define a struct to store student details
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Display the data
    printf("Student details:\n");
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
