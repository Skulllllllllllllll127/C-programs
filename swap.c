#include <stdio.h>

void main() {
    int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int N;
    int i;
    int temp;
    printf("--- Array Element Swapper (First and Last) ---\n");
    printf("Enter the size of the array (N, max %d): ", MAX_SIZE);
    scanf("%d", &N);
    if (N == 1) {
        printf("Array size is 1. No swap necessary.\n");
        printf("Enter the single element: ");
        scanf("%d", &arr[0]);
    } else {
        printf("Enter %d integer elements:\n", N);
        for (i = 0; i < N; i++) {
            printf("Element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
    }
    printf("\nArray before swap: [");
    for (i = 0; i < N; i++) {
        printf("%d%s", arr[i], (i == N - 1) ? "" : ", ");
    }
    printf("]\n");

    if (N >= 2) {
        temp = arr[0];
        arr[0] = arr[N - 1];
        arr[N - 1] = temp;
    }
    printf("Array after swap: [");
    for (i = 0; i < N; i++) {
        printf("%d%s", arr[i], (i == N - 1) ? "" : ", ");
    }
    printf("]\n");
}