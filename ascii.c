#include <stdio.h>

void main() {
    int i;
    
    printf("--- Alphabetic ASCII Values and Characters ---\n");
    printf("ASCII Value | Character\n");
    printf("---------------------------\n");
    for (i = 65; i <= 122; i++) {
        if (i >= 91 && i <= 96) {
            continue;
        }
        printf("%11d | %c\n", i, (char)i);
    }
}
    