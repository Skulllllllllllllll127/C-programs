#include <stdio.h>

void main() {
    int x, y, z;
    int temp;

    printf("--- Cyclic Rotation (x <- y, y <- z, z <- x) ---\n");
    
    printf("Enter value for x: ");
    scanf("%d", &x);
    printf("Enter value for y: ");
    scanf("%d", &y);
    printf("Enter value for z: ");
    scanf("%d", &z);

    printf("\n--- Before Rotation ---\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    
    temp = x;
    x = y;
    y = z;
    z = temp;

    printf("\n--- After Rotation ---\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
}