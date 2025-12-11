#include <stdio.h>
#include <math.h>
double calculate_compound_interest(double principal, double rate, double time, double compounding_frequency) {
    double amount;
    double compound_interest;
    amount = principal * pow((1 + rate / compounding_frequency), (compounding_frequency * time));
    compound_interest = amount - principal;
    return compound_interest;
}
void main() {
    double P, R, t, N;
    double CI;
    printf("--- Compound Interest Calculator (Using Function) ---\n");
    printf("Enter Principal amount (P): ");
    scanf("%lf", &P);
    printf("Enter Annual Interest Rate: ");
    scanf("%lf", &R);
    printf("Enter Time in years (t): ");
    scanf("%lf", &t);
    printf("Enter Compounding frequency per year (N, e.g., 1 for annually): ");
    scanf("%lf", &N);
    CI = calculate_compound_interest(P, R, t, N);
    printf("\n--- Results ---\n");
    printf("Principal Amount: %.2lf\n", P);
    printf("Annual Rate (Decimal): %.4lf\n", R);
    printf("Compounding Frequency (N): %.0lf\n", N);
    printf("Time in Years (t): %.2lf\n", t);
    printf("----------------------------------\n");
    printf("Total Compound Interest (CI):%.2lf\n", CI);

    
}