#include <stdio.h>

void main() {
    int A, B, C;
    int second_largest;

    printf("--- Second Largest of Three Numbers ---\n");
    
    
    printf("Enter the first number (A): ");
    scanf("%d", &A);
    
    printf("Enter the second number (B): ");
    scanf("%d", &B);
    
    printf("Enter the third number (C): ");
    scanf("%d", &C);

    if ((A > B && A < C) || (A < B && A > C)) {
        second_largest = A;
    }
    
    else if ((B > A && B < C) || (B < A && B > C)) {
        second_largest = B;
    }
    else {
        second_largest = C;
    }

    printf("\nThe three numbers are: %d, %d, %d\n", A, B, C);
    printf("The second largest number is: %d\n", second_largest);

    
}