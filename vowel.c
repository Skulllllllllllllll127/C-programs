#include <stdio.h>

void main() {
    char ch;
    
    printf("--- Vowel or Consonant Checker ---\n");
    printf("Enter a single character: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
        char lower_ch = ch;
        if (ch >= 'A' && ch <= 'Z') {
            lower_ch = ch + ('a' - 'A');
        }

        switch (lower_ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("Input '%c' is a VOWEL.\n", ch);
                break;
            default:
                printf("Input '%c' is a CONSONANT.\n", ch);
                break;
        }
    } 
    else {
        printf("Input '%c' is NOT an alphabetic character (it is a number or special symbol).\n", ch);
    }

    
}