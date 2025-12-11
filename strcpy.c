#include <stdio.h>
#define MAX_SIZE 100
void main() {
    char source[MAX_SIZE];
    char destination[MAX_SIZE];
    int i = 0;
    printf("--- Manual String Copy ---\n");
    printf("Enter the source string (up to %d characters): ", MAX_SIZE - 1);
    scanf("%s", source);
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
    printf("\nSource string: \"%s\"\n", source);
    printf("Copied string (Destination): \"%s\"\n", destination);

}