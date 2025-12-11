#include <stdio.h>
#include <ctype.h> 
#define MAX_SIZE 100
int main() {
    char str[MAX_SIZE];
    char *ptr;
    char current_char;
    
    int a_count = 0;
    int e_count = 0;
    int i_count = 0;
    int o_count = 0;
    int u_count = 0;

    printf("--- Vowel Counter using Pointer ---\n");
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    ptr = str; 

    while (*ptr != '\0') {
        current_char = toupper(*ptr);
        switch (current_char) {
            case 'A':
                a_count++;
                break;
            case 'E':
                e_count++;
                break;
            case 'I':
                i_count++;
                break;
            case 'O':
                o_count++;
                break;
            case 'U':
                u_count++;
                break;
        }

        ptr++;
    }

    printf("\nString Entered: \"%s\"\n", str);
    printf("Vowel Count: A-%d, E-%d, I-%d, O-%d, U-%d\n", 
           a_count, e_count, i_count, o_count, u_count);
           
    int total_vowels = a_count + e_count + i_count + o_count + u_count;
    printf("Total Vowels: %d\n", total_vowels);

    return 0;
}