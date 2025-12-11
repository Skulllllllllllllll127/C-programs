#include <stdio.h>

void main() {
    int i, j;
    int rows = 5;

    printf("--- Inverted Number Pattern ---\n");
     for (i = rows; i >= 1; i--) {
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}