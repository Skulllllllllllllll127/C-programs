#include <stdio.h>
void main() {
    int MAX_ROW = 10;
    int MAX_COL = 10;
    int matrix[MAX_ROW][MAX_COL];
    int M, N;
    int i, j;
    int largest;
    printf("--- Largest Element in a Matrix ---\n");
    printf("Enter the number of rows (M, max %d): ", MAX_ROW);
    scanf("%d", &M);
    printf("Enter the number of columns (N, max %d): ", MAX_COL);
    scanf("%d", &N);
    printf("\nEnter the elements of the %d x %d matrix:\n", M, N);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            if (i == 0 && j == 0) {
                largest = matrix[i][j];
            }
        }
    }
    printf("\n--- Entered Matrix ---\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
    }
    printf("\nThe largest element in the matrix is: %d\n", largest);
}