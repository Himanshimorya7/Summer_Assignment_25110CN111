#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, i, max = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
      for(i = 1; i < n; i++) {
        if(s[i].marks > s[max].marks)
            max = i;
    }

    printf("\nStudent with Highest Marks\n");
    printf("Roll Number : %d\n", s[max].roll);
    printf("Name        : %s\n", s[max].name);
    printf("Marks       : %.2f\n", s[max].marks);

    return 0;
}