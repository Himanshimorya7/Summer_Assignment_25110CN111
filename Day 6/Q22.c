#include <stdio.h>
#include <math.h>

int main() {
    int binary, rem, i = 0;
    long decimal = 0;

    printf("Enter binary number: ");
    scanf("%d", &binary);

    while(binary != 0) {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }

    printf("Decimal = %ld", decimal);

    return 0;
}