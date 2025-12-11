#include <stdio.h>
#include <math.h>

 void main() {
    double x1, y1;
    double x2, y2;
    double distance;
    double dx, dy;

    printf("--- Distance Between Two Points Calculator ---\n");

    printf("Enter x-coordinate for Point A (x1): ");
    scanf("%lf", &x1);
    printf("Enter y-coordinate for Point A (y1): ");
    scanf("%lf", &y1);

    printf("\nEnter x-coordinate for Point B (x2): ");
    scanf("%lf", &x2);
    printf("Enter y-coordinate for Point B (y2): ");
    scanf("%lf", &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    distance = sqrt((dx * dx) + (dy * dy));

    printf("\nCoordinates: A(%.2lf, %.2lf) and B(%.2lf, %.2lf)\n", x1, y1, x2, y2);
    printf("The distance between A and B is: %.4lf\n", distance);

}