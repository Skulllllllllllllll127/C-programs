#include <stdio.h>
long long calculate_factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return (long long)n * calculate_factorial(n - 1);
    }
}

int main() {
    int number;
    long long result;
    printf("--- Factorial Calculator (Recursive Function) ---\n");
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("\nError: Factorial is not defined for negative numbers.\n");
        return 1;
    }
    result = calculate_factorial(number);
    printf("\nFactorial of %d (%d!) is: %lld\n", number, number, result);
    return 0;
}