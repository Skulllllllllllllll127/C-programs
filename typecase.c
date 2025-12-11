#include <stdio.h>
void main() {
    char ch;
    
    printf("--- Character Case Tester and Converter (Manual) ---\n");
    printf("Enter a single character: ");
    scanf(" %c", &ch);

    
    if (ch >= 'A' && ch <= 'Z') {
        printf("Input character '%c' is a CAPITAL letter.\n", ch);
        
        
        char converted_ch = ch + ('a' - 'A');
        printf("Conversion: Capital to Small Letter is '%c'.\n", converted_ch);
    } 
    
    else if (ch >= 'a' && ch <= 'z') {
        printf("Input character '%c' is a small letter.\n", ch);
        
        
        char converted_ch = ch - ('a' - 'A');
        printf("Conversion: Small to Capital Letter is '%c'.\n", converted_ch);
    } 
    
    else {
        printf("Input character '%c' is neither a capital nor a small letter. No conversion performed.\n", ch);
    }

    
}