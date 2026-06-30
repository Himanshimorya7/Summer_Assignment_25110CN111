#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i, max = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }
     for(i = 1; i < n; i++) {
        if(emp[i].salary > emp[max].salary)
            max = i;
    }

    printf("\nEmployee with Highest Salary\n");
    printf("ID     : %d\n", emp[max].id);
    printf("Name   : %s\n", emp[max].name);
    printf("Salary : %.2f\n", emp[max].salary);

    return 0;
}