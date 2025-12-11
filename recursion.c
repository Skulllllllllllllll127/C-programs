#include <stdio.h>
int fibonacci(int i) {
    if (i == 0) {
        return 0;
    }
    if (i == 1) {
        return 1;
    }
    else {
        return fibonacci(i - 1) + fibonacci(i - 2);
    }
}

int main() {
    int n, i;
    printf("--- Fibonacci Series Generator (Recursive) ---\n");   
    printf("Enter the number of terms (n) for the series: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("\nError: Please enter a non-negative number of terms.\n");
        return 1;
    }

    printf("\nFibonacci Series up to %d terms:\n", n);
        for (i = 0; i < n; i++) {
        printf("%d%s", fibonacci(i), (i == n - 1) ? "" : ", ");
    }   
    printf("\n");
    return 0;
}