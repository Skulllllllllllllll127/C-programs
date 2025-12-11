#include <stdio.h>
long long calculate_power(int x, int y) {
    long long result = 1;
    if (y == 0) {
        return 1;
    }

    if (x == 0) {
        return 0;
    }
    for (int i = 1; i <= y; i++) {
        result = result * x;
    }

    return result;
}
int main() {
    int base, exponent;
    long long result;
    printf("--- Integer Power Calculator (x^y) ---\n");
    printf("Enter the base (x): ");
    scanf("%d", &base);
    printf("Enter the non-negative exponent (y): ");
    scanf("%d", &exponent);
    if (exponent < 0) {
        printf("\nError: The program assumes a non-negative integer exponent.\n");
        return 1;
    }
    result = calculate_power(base, exponent);
    printf("\nResult: %d raised to the power of %d is: %lld\n", base, exponent, result);
    return 0;
}