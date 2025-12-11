#include <stdio.h>
void main() {
    int n, i;
    long long a = 0, b = 1; 
    long long next_term;

    printf("--- Fibonacci Sequence Generator ---\n");
    printf("Enter the number of Fibonacci terms (n) to generate: ");
    scanf("%d", &n);

    printf("\nFirst %d Fibonacci numbers:\n", n);
    if (n >= 1) {
        printf("%lld", a);
    }
    if (n >= 2) {
        printf(", %lld", b);
    }
    for (i = 3; i <= n; i++) {
        next_term = a + b;
        printf(", %lld", next_term);
        a = b;
        b = next_term;
    }
    printf("\n");
}