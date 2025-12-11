#include <stdio.h>

void main() {
    char operator;
    double operand1, operand2;
    double result;

    printf("--- Simple Arithmetic Calculator (Switch Case) ---\n");
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter first operand: ");
    scanf("%lf", &operand1);
    printf("Enter second operand: ");
    scanf("%lf", &operand2);

    switch(operator) {
        case '+':
            result = operand1 + operand2;
            printf("\nResult: %.2lf + %.2lf = %.2lf\n", operand1, operand2, result);
            break;
            
        case '-':
            result = operand1 - operand2;
            printf("\nResult: %.2lf - %.2lf = %.2lf\n", operand1, operand2, result);
            break;
            
        case '*':
            result = operand1 * operand2;
            printf("\nResult: %.2lf * %.2lf = %.2lf\n", operand1, operand2, result);
            break;
            
        case '/':
            if (operand2 != 0.0) {
                result = operand1 / operand2;
                printf("\nResult: %.2lf / %.2lf = %.2lf\n", operand1, operand2, result);
            } else {
                printf("\nError: Division by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("\nError: Invalid operator entered. Please use +, -, *, or /.\n");
            break;
    }

}