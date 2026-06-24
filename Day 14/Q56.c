#include <stdio.h>

int main()
{
    int a[5], i, j;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Duplicate Elements: ");

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(a[i] == a[j])
                printf("%d ", a[i]);
        }
    }

    return 0;
}