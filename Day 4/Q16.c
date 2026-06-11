#include <stdio.h>

int main() {
    int start, end, i, temp, rem, sum;

    printf("Enter range: ");
    scanf("%d%d", &start, &end);

    for(i = start; i <= end; i++) {
        temp = i;
        sum = 0;

        while(temp != 0) {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if(sum == i)
            printf("%d ", i);
    }

    return 0;
}