#include <stdio.h>

int main()
{
    int a[5], i, key, count = 0;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter element: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++)
    {
        if(a[i] == key)
            count++;
    }

    printf("Frequency = %d", count);

    return 0;
}