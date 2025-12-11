#include <stdio.h>
#define BASE_BILL 100.0
#define UNIT_RATE 10.0

void main() {
    int units_consumed;
    double unit_charge;
    double bill_amount;
    double discount_percent = 0.0;
    double discount_amount;
    double total_bill;

    printf("--- Electricity Bill Calculator with Discount ---\n");
    
    printf("Enter the number of units consumed: ");
    scanf("%d", &units_consumed);

    unit_charge = units_consumed * UNIT_RATE;
    bill_amount = BASE_BILL + unit_charge;

    if (bill_amount <= 200) {
        discount_percent = 0.0;
    } 
    else if (bill_amount <= 500) {
        discount_percent = 5.0; 
    } 
    else if (bill_amount <= 800) {
        discount_percent = 10.0; 
    } 
    else if (bill_amount <= 1100) {
        discount_percent = 15.0; 
    } 
    else { 
        discount_percent = 20.0; 
    }
    discount_amount = bill_amount * (discount_percent / 100.0);
    total_bill = bill_amount - discount_amount;

    printf("\n--- Bill Details for %d Units ---\n", units_consumed);
    printf("Initial Base Bill Amount:      %.2lf Rs\n", BASE_BILL);
    printf("Unit Charges (%.2lf x %d):       %.2lf Rs\n", UNIT_RATE, units_consumed, unit_charge);
    printf("----------------------------------------\n");
    printf("Subtotal Bill Amount:          %.2lf Rs\n", bill_amount);
    printf("Discount Applied (%.2lf%%):      -%.2lf Rs\n", discount_percent, discount_amount);
    printf("----------------------------------------\n");
    printf("Total Bill Amount Payable:     %.2lf Rs\n", total_bill);
}