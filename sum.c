#include <stdio.h>
void main() {
    int M, N, sum = 0;

    printf("Enter the starting number (M): ");
    scanf("%d", &M);
    printf("Enter the ending number (N): ");
    scanf("%d", &N);

    int i = M;
    while (i <= N) {
        sum += i;
        i++;
    }

    printf("Sum of all numbers between %d and %d is: %d", M, N, sum);
}
