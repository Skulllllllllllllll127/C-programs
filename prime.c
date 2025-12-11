#include <stdio.h>
#include <math.h>
void main() {
    int N1, N2;
    int i, j;
    int is_prime;
    printf("--- Prime Number Generator ---\n");
    printf("Enter the starting number (N1): ");
    scanf("%d", &N1);
    printf("Enter the ending number (N2, must be > N1): ");
    scanf("%d", &N2);

    printf("\nPrime numbers between %d and %d are:\n", N1, N2);
    for (i = N1; i <= N2; i++) {
        is_prime = 1;
        if (i <= 1) {
            is_prime = 0;
        } 
        int limit = (int)sqrt(i);
        for (j = 2; j <= limit; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
}