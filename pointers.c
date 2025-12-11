#include <stdio.h>

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int N;
    int i;
    int *ptr;

    printf("--- Print 1D Array using Pointer ---\n");
    
    printf("Enter the size of the array (N, max %d): ", MAX_SIZE);
    scanf("%d", &N);

    if (N <= 0 || N > MAX_SIZE) {
        printf("Error: Invalid array size.\n");
        return 1;
    }

    printf("Enter %d integer elements:\n", N);
    for (i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    ptr = arr; 

    printf("\nDisplaying array elements using pointer arithmetic:\n");
    printf("Array elements: [");
    
    for (i = 0; i < N; i++) {
        printf("%d", *ptr);
        ptr++; 
        
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}