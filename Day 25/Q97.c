#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter sorted elements of first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter sorted elements of second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    int merge[n1 + n2];

    i = 0;
    j = 0;
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j])
            merge[k++] = arr1[i++];
        else
            merge[k++] = arr2[j++];
    }

    while(i < n1)
        merge[k++] = arr1[i++];

    while(j < n2)
        merge[k++] = arr2[j++];

    printf("Merged Sorted Array:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", merge[i]);

    return 0;
}