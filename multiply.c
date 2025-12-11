#include <stdio.h>

void main() {
    int A, B;

    printf("--- Swapping Two Numbers (Multiplication/Division) ---\n");
    
    // Input
    printf("Enter value for A: ");
    scanf("%d", &A);
    printf("Enter value for B: ");
    scanf("%d", &B);

    printf("\n--- Before Swap ---\n");
    printf("A = %d, B = %d\n", A, B);
    
    A = A * B;
    B = A / B;
    A = A / B;
    printf("\n--- After Swap ---\n");
    printf("A = %d, B = %d\n", A, B);

}