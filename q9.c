#include <stdio.h>

int main() {
    int n, i, found = -1;
    printf("Enter number of scores: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter scores: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("First occurrence of 99 is at index %d\n", found);
    else
        printf("Score 99 not found.\n");

    return 0;
}
