#include <stdio.h>

int main() {
    int n;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fact = (fact * i);
    }

    printf("Factorial = %11d", fact);

    return 0;
}