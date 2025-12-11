#include <stdio.h>
void swap_values(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void main() {
    int num1, num2;
    printf("--- Variable Swapper (Call By Address) ---\n");
    printf("Enter the value for the first variable (Num 1): ");
    scanf("%d", &num1);
    
    printf("Enter the value for the second variable (Num 2): ");
    scanf("%d", &num2);

    printf("\n--- Before Swap in main() ---\n");
    printf("Num 1 = %d, Num 2 = %d\n", num1, num2);
    swap_values(&num1, &num2);

    printf("\n--- After Swap in main() ---\n");
    printf("The values have been exchanged.\n");
    printf("Num 1 = %d, Num 2 = %d\n", num1, num2);

    
}