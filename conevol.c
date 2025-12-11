#include <stdio.h>
#include <math.h>
#define PI 3.1415926

void main() {
    double radius, height, volume;

    printf("--- Cone Volume Calculator ---\n");
    
    
    printf("Enter the radius (r) of the cone: ");
    scanf("%lf", &radius);

    
    printf("Enter the height (h) of the cone: ");
    scanf("%lf", &height);

    
    volume = (PI * radius * radius * height) / 3.0;

    
    printf("\nCone with Radius (r) = %.2lf and Height (h) = %.2lf\n", radius, height);
    printf("The Volume (V) of the cone is: %.4lf\n", volume);

    
}