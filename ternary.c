#include <stdio.h>

void main() {
    int num1, num2, num3;
    int largest;

    printf("--- Largest of Three Numbers (Ternary Operator) ---\n");
    

    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    printf("Enter the third number: ");
    scanf("%d", &num3);

    largest = (num1 > num2) 
                ? ((num1 > num3) ? num1 : num3)  : ((num2 > num3) ? num2 : num3); 
    
    printf("\nThe largest number among %d, %d, and %d is: %d\n", num1, num2, num3, largest);


}