#include <stdio.h>
void main() {
    int number;
    long long sum_of_squares = 0;

    printf("--- Sum of Squares Calculator ---\n");
    printf("Rule: Calculates sum of squares, ignoring numbers divisible by 3.\n");
    printf("Stop: Enter a negative number to finish.\n");
    do {
        printf("\nEnter a number (non-negative to process, negative to quit): ");
        scanf("%d", &number);
        if (number < 0) {
            break;
        }
        if (number % 3 != 0) {
            sum_of_squares += (long long)number * number; 
            printf("Processing %d: Square added. Current Sum of Squares: %lld\n", number, sum_of_squares);
        } else {
            printf("Skipping %d: Number is divisible by 3.\n", number);
        }

    } while (1); 

    printf("\n----------------------------------------\n");
    printf("Negative number entered. Program terminated.\n");
    printf("Final Sum of Squares (excluding multiples of 3): %lld\n", sum_of_squares);
}