#include <stdio.h>

void main() {
    float base1, base2, height, area;

    
    printf("--- Trapezoid Area Calculator ---\n");
    
    printf("Enter the length of the first parallel base (a): ");
    scanf("%f", &base1);
    printf("Enter the length of the second parallel base (b): ");
    scanf("%f", &base2);

    printf("Enter the height (h): ");
    scanf("%f", &height);

    area = 0.5 * (base1 + base2) * height;
    printf("\n--- Result ---\n");
    printf("Area of the trapezoid with bases %.2f and %.2f, and height %.2f is: %.2f\n", 
           base1, base2, height, area);

    
}