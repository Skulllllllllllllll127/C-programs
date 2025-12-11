#include <stdio.h>

void main() {
    int N = 5;
    int i, j;

    printf("\n--- Full Star Pyramid ---\n");
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        
        printf("\n");
    }

    
}