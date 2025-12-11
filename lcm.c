#include <stdio.h>
void main() {
    int n1, n2;
    int a, b;
    int gcd, lcm;
    int remainder;
    
    printf("--- GCD and LCM Calculator ---\n");
    printf("Enter the first positive integer: ");
    scanf("%d", &n1);
    printf("Enter the second positive integer: ");
    scanf("%d", &n2);

    a = n1;
    b = n2;

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    gcd = a;

    lcm = (n1 / gcd) * n2;
    
    printf("\nFor numbers %d and %d:\n", n1, n2);
    printf("Greatest Common Divisor (GCD): %d\n", gcd);
    printf("Least Common Multiple (LCM): %d\n", lcm);
}