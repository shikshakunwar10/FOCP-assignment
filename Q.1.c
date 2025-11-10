#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    // Count number of digits
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = num;

    // Calculate the sum of nth power of digits
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
