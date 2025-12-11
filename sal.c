#include <stdio.h>
struct Employee {
    int employee_number;
    char name[50];
    char address[100];
    char department[50];
    double salary;
};
void read_employee_data(struct Employee *emp, int index) {
    printf("\n--- Enter Data for Employee %d ---\n", index);
    
    printf("Enter Employee Number: ");
    scanf("%d", &emp->employee_number);
    
    printf("Enter Name: ");
    scanf(" %[^\n]", emp->name); 
    
    printf("Enter Address: ");
    scanf(" %[^\n]", emp->address); 
    
    printf("Enter Department: ");
    scanf(" %[^\n]", emp->department);
    
    printf("Enter Salary (Rs): ");
    scanf("%lf", &emp->salary);
}
void display_employee_data(struct Employee emp, int index) {
    printf("\n--- Employee %d Record ---\n", index);
    printf("Number:      %d\n", emp.employee_number);
    printf("Name:        %s\n", emp.name);
    printf("Address:     %s\n", emp.address);
    printf("Department:  %s\n", emp.department);
    printf("Salary:      %.2lf Rs\n", emp.salary);
}

void main() {
    struct Employee emp1;
    struct Employee emp2;
    
    printf("--- Employee Information Reader and Comparator ---\n");

    read_employee_data(&emp1, 1);
    read_employee_data(&emp2, 2);

    display_employee_data(emp1, 1);
    display_employee_data(emp2, 2);

    printf("\n--- Salary Comparison ---\n");

    if (emp1.salary > emp2.salary) {
        printf("%s earns more with a salary of %.2lf Rs.\n", emp1.name, emp1.salary);
    } 
    else if (emp2.salary > emp1.salary) {
        printf("%s earns more with a salary of %.2lf Rs.\n", emp2.name, emp2.salary);
    } 
    else {
        printf("Both employees, %s and %s, earn the same salary (%.2lf Rs).\n", emp1.name, emp2.name, emp1.salary);
    }

    
}
