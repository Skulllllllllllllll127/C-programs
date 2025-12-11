#include <stdio.h>

// Function 1: Computes and returns the sum of digits
int sum_of_digits(int n) {
    int sum = 0;
    
    // Use an absolute value to handle negative numbers correctly
    int num = (n < 0) ? -n : n;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function 2: Computes and returns the reverse of a number
int reverse_number(int n) {
    int reversed = 0;
    int sign = 1;
    
    // Handle sign separately
    if (n < 0) {
        sign = -1;
        n = -n;
    }

    while (n != 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed * sign;
}

// Function 3: Counts and returns the number of digits
int count_digits(int n) {
    int count = 0;
    
    // Handle the special case for 0
    if (n == 0) {
        return 1;
    }
    
    // Use an absolute value
    int num = (n < 0) ? -n : n;

    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int choice;
    int number;
    int result;

    printf("--- Menu-Driven Number Operations ---\n");
    
    // Input the number once
    printf("Enter an integer: ");
    scanf("%d", &number);

    do {
        // Display Menu
        printf("\n--- Choose Operation ---\n");
        printf("1. Sum of Digits\n");
        printf("2. Reverse Number\n");
        printf("3. Count Digits\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                result = sum_of_digits(number);
                printf("\nResult: The sum of digits of %d is %d.\n", number, result);
                break;

            case 2:
                result = reverse_number(number);
                printf("\nResult: The reverse of %d is %d.\n", number, result);
                break;

            case 3:
                result = count_digits(number);
                printf("\nResult: The number of digits in %d is %d.\n", number, result);
                break;

            case 4:
                printf("\nExiting the program. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Please enter a number between 1 and 4.\n");
                break;
        }
        
    } while (choice != 4);

    return 0;
}