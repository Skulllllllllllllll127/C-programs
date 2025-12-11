#include <stdio.h>
void main() {
    int N = 5;
    int i, j;
    printf("--- Right-Aligned Star Pattern ---\n");
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
}