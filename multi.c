#include <stdio.h>
void main() {
    const int multiplier = 5; 
    const int MAX_SIZE = 100;
    
    int arr[MAX_SIZE];
    int size, i;
    printf("--- Array Element Multiplier (Multiplier: %d) ---\n", multiplier);
    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter %d integer elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array: [");
    for (i = 0; i < size; i++) {
        printf("%d%s", arr[i], (i == size - 1) ? "" : ", ");
    }
    printf("]\n");

    for (i = 0; i < size; i++) {
        arr[i] = arr[i] * multiplier;
    }

    printf("Resultant Array (Multiplied by %d): [", multiplier);
    for (i = 0; i < size; i++) {
        printf("%d%s", arr[i], (i == size - 1) ? "" : ", ");
    }
    printf("]\n");

}