#include <stdio.h>
struct Employee {
    int employee_number;
    char name[50];
    char address[100];
    char department[50];
    double salary;
};

void main() {
    struct Employee emp1 = {
        1001, 
        "Ravi Kumar", 
        "45, MG Road, Bangalore", 
        "Software Development", 
        75500.50
    };

    printf("--- Employee Record Display ---\n");
    printf("----------------------------------\n");
    
    printf("Employee Number: %d\n", emp1.employee_number);
    printf("Name:            %s\n", emp1.name);
    printf("Address:         %s\n", emp1.address);
    printf("Department:      %s\n", emp1.department);
    printf("Salary:          %.2lf Rs\n", emp1.salary);
    printf("----------------------------------\n");

    
}