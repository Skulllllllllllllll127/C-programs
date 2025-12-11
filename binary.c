#include <stdio.h>

void main() {
    int decimal_num;
    int binary_array[32]; 
    int i = 0; 
    int original_num;

    printf("--- Decimal to Binary Converter ---\n");
    printf("Enter a positive decimal integer: ");
    scanf("%d", &decimal_num);
    original_num = decimal_num;
    while (decimal_num > 0) {
        binary_array[i] = decimal_num % 2;
        decimal_num = decimal_num / 2;
        i++;
    }
    printf("\nBinary equivalent of %d is: ", original_num);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary_array[j]);
    }
    printf("\n");
}