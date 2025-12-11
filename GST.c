#include <stdio.h>

void main() {
    double original_price;
    double gst_rate_percent;
    double gst_rate_factor;
    double gst_amount;
    double total_price;

    printf("--- Goods and Services Tax (GST) Calculator ---\n");
    
    printf("Enter the original price of the item (before GST): ");
    scanf("%lf", &original_price);
    
    printf("Enter the GST rate: ");
    scanf("%lf", &gst_rate_percent);

    

    
    gst_rate_factor = gst_rate_percent / 100.0;

    
    gst_amount = original_price * gst_rate_factor;

    
    total_price = original_price + gst_amount;

    printf("\n--- GST Calculation Breakdown ---\n");
    printf("GST Rate Applied: %.2lf%%\n", gst_rate_percent);
    printf("----------------------------------------\n");
    printf("Price Before GST: %.2lf\n", original_price);
    printf("GST Amount (%.2lf%%):  %.2lf\n", gst_rate_percent, gst_amount);
    printf("Total Price (After GST): %.2lf\n", total_price);

}