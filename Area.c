#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

void main() {
    int choice;
    double dim1, dim2, area;

    do {
        
        printf("\n--- Area Calculation Menu ---\n");
        printf("1. Area of Triangle\n");
        printf("2. Area of Rectangle\n");
        printf("3. Area of Circle\n");
        printf("4. Surface Area of Sphere\n");
        printf("5. Exit Program\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Triangle Area ---\n");
                printf("Enter base: ");
                scanf("%lf", &dim1);
                printf("Enter height: ");
                scanf("%lf", &dim2);
                area = 0.5 * dim1 * dim2;
                printf("Area of Triangle: %.4lf\n", area);
                break;

            case 2:
                printf("\n--- Rectangle Area ---\n");
                printf("Enter length: ");
                scanf("%lf", &dim1);
                printf("Enter width: ");
                scanf("%lf", &dim2);
                area = dim1 * dim2;
                printf("Area of Rectangle: %.4lf\n", area);
                break;

            case 3:
                printf("\n--- Circle Area ---\n");
                printf("Enter radius: ");
                scanf("%lf", &dim1);
                area = PI * dim1 * dim1;
                printf("Area of Circle: %.4lf\n", area);
                break;

            case 4:
                printf("\n--- Sphere Surface Area ---\n");
                printf("Enter radius: ");
                scanf("%lf", &dim1);
                // Surface Area of Sphere = 4 * PI * r^2
                area = 4.0 * PI * dim1 * dim1;
                printf("Surface Area of Sphere: %.4lf\n", area);
                break;

            case 5:
                printf("\nExiting the program. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Please enter a number between 1 and 5.\n");
                break;
        }
        
    } while (choice != 5);
}