#include <stdio.h>

int main() {
    float x, y;
    printf("Enter coordinates (x y): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0)
        printf("Point lies in the 1st Quadrant.\n");
    else if (x < 0 && y > 0)
        printf("Point lies in the 2nd Quadrant.\n");
    else if (x < 0 && y < 0)
        printf("Point lies in the 3rd Quadrant.\n");
    else if (x > 0 && y < 0)
        printf("Point lies in the 4th Quadrant.\n");
    else if (x == 0 && y == 0)
        printf("Point lies at the Origin.\n");
    else if (x == 0)
        printf("Point lies on Y-axis.\n");
    else
        printf("Point lies on X-axis.\n");

    return 0;
}
