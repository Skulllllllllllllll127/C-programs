#include <stdio.h>
#define MAX_EMPLOYEES 100
struct Employee {
    int employee_number;
    char name[50];
    char address[100];
    char department[50];
    double salary;
};
void main() {
    struct Employee employees[MAX_EMPLOYEES];
    int N,i,found_high_earner = 0;
    printf("--- Employee Record Manager and Salary Filter ---\n");
    printf("Enter the number of employees (N, max %d): ", MAX_EMPLOYEES);
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        printf("\n--- Entering Data for Employee %d ---\n", i + 1);
        employees[i].employee_number = i + 1; // Auto-assign employee number
        printf("Employee Number: %d\n", employees[i].employee_number);
        printf("Enter Name: ");
        scanf(" %[^\n]", employees[i].name); 
        printf("Enter Address: ");
        scanf(" %[^\n]", employees[i].address); 
        printf("Enter Department: ");
        scanf(" %[^\n]", employees[i].department);
        printf("Enter Salary (Rs): ");
        scanf("%lf", &employees[i].salary);
    }
    printf("\n==============================================\n");
    printf("Employees with Salary Greater Than 50000 Rs:\n");
    for (i = 0; i < N; i++) {
        if (employees[i].salary > 50000.00) {
            printf("- %s (Salary: %.2lf Rs)\n", employees[i].name, employees[i].salary);
            found_high_earner = 1;
        }
    }
    if (found_high_earner == 0) {
        printf("No employees found with a salary greater than 50000 Rs.\n");
    }
    printf("==============================================\n");
}