#include <stdio.h>
#include <math.h>

void main() {
    double P, R, t, N;
    double amount, CI;

    printf("--- Compound Interest Calculator ---\n");
    
    printf("Enter Principal amount (P): ");
    scanf("%lf", &P);

    printf("Enter Annual Interest Rate (R, as a decimal, e.g., 0.05 for 5%%): ");
    scanf("%lf", &R);

    printf("Enter Time in years (t): ");
    scanf("%lf", &t);

    printf("Enter Number of times interest is compounded per year (N): ");
    scanf("%lf", &N);
    amount = P * pow((1 + R / N), (N * t));
    CI = amount - P;
    
    printf("\n--- Results ---\n");
    printf("Total Amount (A) after %.0lf years: %.2lf\n", t, amount);
    printf("Compound Interest (CI) earned: %.2lf\n", CI);

   
}