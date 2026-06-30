#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i, id, found = 0;

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
     printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++) {
        if(emp[i].id == id) {
            printf("\nEmployee Found\n");
            printf("ID     : %d\n", emp[i].id);
            printf("Name   : %s\n", emp[i].name);
            printf("Salary : %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Employee not found.");

    return 0;
}