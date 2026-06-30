#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks1, marks2, marks3, total, percentage;
};

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Marks of 3 Subjects: ");
    scanf("%f %f %f", &s.marks1, &s.marks2, &s.marks3);

    s.total = s.marks1 + s.marks2 + s.marks3;
    s.percentage = s.total / 3;

    printf("\n----- Student Result -----\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Total Marks : %.2f\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);
    return 0;
}