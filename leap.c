#include <stdio.h>

void check_leap_year(int year) {
    printf("Checking year: %d\n", year);
    
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d IS a Leap Year.\n", year);
            } else {
                printf("%d IS NOT a Leap Year.\n", year); 
            }
        } else {
            printf("%d IS a Leap Year.\n", year);
        }
    } else {
        printf("%d IS NOT a Leap Year.\n", year);
    }
}
int main() {
    int input_year;

    printf("--- Leap Year Checker ---\n");
    printf("Enter a year: ");
    scanf("%d", &input_year);

    check_leap_year(input_year);
    return 0;
}