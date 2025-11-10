#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return 0;
    return 1;
}

int main() {
    int n, i, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
        if (isPrime(arr[i]))
            count++;

    printf("Number of prime numbers in the array = %d\n", count);
    return 0;
}

