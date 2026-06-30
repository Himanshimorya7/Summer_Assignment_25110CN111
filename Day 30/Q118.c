#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amount;

    do {
        printf("\n1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= balance)
                    balance -= amount;
                else
                    printf("Insufficient Balance!\n");
                break;
                  case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}