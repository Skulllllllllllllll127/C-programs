#include <stdio.h>
#define MAX_SIZE 100
void main() {
    char str[MAX_SIZE];
    int length = 0;
    int start = 0;
    int end;
    int is_palindrome = 1; 
    printf("--- Palindrome Checker ---\n");
    printf("Enter a string (up to %d characters): ", MAX_SIZE - 1);
    scanf("%s", str);
    while (str[length] != '\0') {
        length++;
    }
    end = length - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            is_palindrome = 0; 
            break;             
        }
        start++;
        end--;
    }
    printf("\nString: \"%s\"\n", str);
    if (is_palindrome == 1) {
        printf("Result: The string IS a palindrome.\n");
    } else {
        printf("Result: The string IS NOT a palindrome.\n");
    }
}