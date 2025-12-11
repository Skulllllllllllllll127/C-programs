#include <stdio.h>

void main() {
    int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int N;
    int i, j;
    int temp;
    printf("--- Array Sorter (Ascending Order using Bubble Sort) ---\n");
    printf("Enter the size of the array (N, max %d): ", MAX_SIZE);
    scanf("%d", &N);
    printf("Enter %d integer elements:\n", N);
    for (i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nArray before sorting: [");
    for (i = 0; i < N; i++) {
        printf("%d%s", arr[i], (i == N - 1) ? "" : ", ");
    }
    printf("]\n");
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array after sorting (Ascending): [");
    for (i = 0; i < N; i++) {
        printf("%d%s", arr[i], (i == N - 1) ? "" : ", ");
    }
    printf("]\n");
}