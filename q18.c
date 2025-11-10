#include <stdio.h>

int main() {
    int n, i, j, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], printed[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        printed[i] = 0;
    }

    printf("Duplicate elements: ");
    for (i = 0; i < n; i++) {
        if (printed[i]) continue;
        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                printed[j] = 1;
            }
        }
        if (count > 1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found)
        printf("-1");

    printf("\n");
    return 0;
}
