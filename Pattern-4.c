#include <stdio.h>

void main() {
    int max_rows = 5;
    int i, j;

    printf("--- Combined Pyramid Pattern ---\n");
    for (i = 1; i <= max_rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    for (i = max_rows - 1; i >= 1; i--) { 
        char current_char = 'A' + (i - 1);
        for (j = 1; j <= i; j++) {
            printf("%c ", current_char);
        }
        printf("\n");
    }

    
}