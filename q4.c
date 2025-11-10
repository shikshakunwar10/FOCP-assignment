#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal: a = %d, b = %d\n", a, b);

    // 1. Using temporary variable
    temp = a; a = b; b = temp;
    printf("1. Using temp: a = %d, b = %d\n", a, b);

    // 2. Using arithmetic
    a = a + b; b = a - b; a = a - b;
    printf("2. Using arithmetic: a = %d, b = %d\n", a, b);

    // 3. Using XOR
    a = a ^ b; b = a ^ b; a = a ^ b;
    printf("3. Using XOR: a = %d, b = %d\n", a, b);

    // 4. Using pointers
    int *p1 = &a, *p2 = &b;
    temp = *p1; *p1 = *p2; *p2 = temp;
    printf("4. Using pointers: a = %d, b = %d\n", a, b);

    return 0;
}
