#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    int employee_number;
    char name[50];
    char address[100];
    char department[50];
    double salary;
    struct Date date_of_joining;
    struct Date date_of_birth;
};

int main() {
    struct Employee emp1 = {
        1001, 
        "Alok Tandon", 
        "7, Green Park, New Delhi", 
        "IT Security", 
        95000.00,
        {15, 8, 2022}, 
        {22, 5, 1995} 
    };

    printf("--- Employee Record with Nested Dates ---\n");
    printf("-----------------------------------------\n");
    
    printf("Employee Number: %d\n", emp1.employee_number);
    printf("Name:            %s\n", emp1.name);
    printf("Department:      %s\n", emp1.department);
    printf("Salary:          %.2lf Rs\n", emp1.salary);
    
    printf("Date of Joining: %d/%d/%d\n", 
           emp1.date_of_joining.day, 
           emp1.date_of_joining.month, 
           emp1.date_of_joining.year);
           
    printf("Date of Birth:   %d/%d/%d\n", 
           emp1.date_of_birth.day, 
           emp1.date_of_birth.month, 
           emp1.date_of_birth.year);
           
    printf("-----------------------------------------\n");

    return 0;
}