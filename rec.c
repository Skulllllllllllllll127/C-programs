#include <stdio.h>
#define NUM_EMPLOYEES 5
struct Employee {
    int employee_number;
    char name[50];
    char address[100];
    char department[50];
    double salary;
};
void main() {
    struct Employee employees[NUM_EMPLOYEES] = {
        {1001, "Amit Sharma", "45, Phase 1, Noida", "IT Support", 45000.00},
        {1002, "Priya Singh", "12, Sector 10, Gurgaon", "Software Development", 82500.50},
        {1003, "Rohan Verma", "B-5, Vasant Kunj, Delhi", "Human Resources", 55000.00},
        {1004, "Kavita Reddy", "67, Whitefield, Bangalore", "Finance", 68200.75},
        {1005, "Vijay Patil", "9, Koregaon Park, Pune", "Marketing", 60000.00}
    };
    
    printf("--- Employee Records for %d Employees ---\n", NUM_EMPLOYEES);
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        printf("\n--- Employee Record %d ---\n", i + 1);
        printf("Employee Number: %d\n", employees[i].employee_number);
        printf("Name:            %s\n", employees[i].name);
        printf("Address:         %s\n", employees[i].address);
        printf("Department:      %s\n", employees[i].department);
        printf("Salary:          %.2lf Rs\n", employees[i].salary);
    }
    printf("\n----------------------------------------\n");
}