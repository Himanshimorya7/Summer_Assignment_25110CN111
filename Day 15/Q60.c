#include <stdio.h>

int main()
{
    int a[6], i, j = 0, temp;

    printf("Enter 6 elements:\n");

    for(i = 0; i < 6; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 6; i++)
    {
        if(a[i] != 0)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    printf("Array after moving zeros:\n");

    for(i = 0; i < 6; i++)
        printf("%d ", a[i]);

    return 0;
}