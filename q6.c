#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

long long decimalToBinary(int n) {
    long long bin = 0;
    int rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int main() {
    int choice, dec;
    long long bin;

    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%lld", &bin);
        printf("Decimal: %d\n", binaryToDecimal(bin));
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &dec);
        printf("Binary: %lld\n", decimalToBinary(dec));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
