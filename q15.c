#include <stdio.h>

int main() {
    int n, i, last;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    last = arr[n - 1];

    for (i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = last;

    printf("Array after rotation: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

