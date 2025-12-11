#include <stdio.h>

void main() {
    int number;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    char choice;

    printf("--- Number Counter (Positive, Negative, Zero) ---\n");

    do {
        
        printf("\nEnter a number: ");
        scanf("%d", &number);

        if (number > 0) {
            positive_count++;
        } else if (number < 0) {
            negative_count++;
        } else {
            zero_count++;
        }

        printf("Current Counts: Positive=%d, Negative=%d, Zero=%d\n", positive_count, negative_count, zero_count);
        printf("Do you want to enter another number? (Y/N): ");
        
        while (getchar() != '\n'); 
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');
    printf("\n--- Final Summary ---\n");
    printf("Total positive numbers entered: %d\n", positive_count);
    printf("Total negative numbers entered: %d\n", negative_count);
    printf("Total zeros entered: %d\n", zero_count);
}