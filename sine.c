#include <stdio.h>
#include <math.h>
#define PI 3.14159

void main() {
    double angle_degrees;
    double angle_radians;
    double sine_value;
    double cosine_value;

    printf("--- Trigonometric Calculator (Degrees) ---\n");
    
   
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle_degrees);

    
    angle_radians = angle_degrees * (PI / 180.0);

    
    sine_value = sin(angle_radians);
    cosine_value = cos(angle_radians);

    
    printf("\nAngle in Degrees: %.2lf\n", angle_degrees);
    printf("Angle in Radians: %.4lf\n", angle_radians);
    printf("----------------------------------------\n");
    printf("Sine (sin) value:   %.6lf\n", sine_value);
    printf("Cosine (cos) value: %.6lf\n", cosine_value);


}