#include <stdio.h>
#define MAX_DIM 10
void main() {
    int m1_rows, m1_cols;
    int m2_rows, m2_cols;
    int i, j, k;
    int mat1[MAX_DIM][MAX_DIM];
    int mat2[MAX_DIM][MAX_DIM];
    int result[MAX_DIM][MAX_DIM];
    printf("--- Matrix Multiplication (M x N * P x Q) ---\n");
    printf("Enter rows and columns for Matrix 1 (M x N): ");
    scanf("%d %d", &m1_rows, &m1_cols);
    printf("Enter rows and columns for Matrix 2 (P x Q): ");
    scanf("%d %d", &m2_rows, &m2_cols);
    if (m1_cols != m2_rows) {
        printf("\nError: Matrix multiplication is not possible.\n");
        printf("The number of columns in Matrix 1 (%d) must equal the number of rows in Matrix 2 (%d).\n", m1_cols, m2_rows);
    }
    else{
        printf("\nEnter elements for Matrix 1 (%d x %d):\n", m1_rows, m1_cols);
    for (i = 0; i < m1_rows; i++) {
        for (j = 0; j < m1_cols; j++) {
            printf("M1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nEnter elements for Matrix 2 (%d x %d):\n", m2_rows, m2_cols);
    for (i = 0; i < m2_rows; i++) {
        for (j = 0; j < m2_cols; j++) {
            printf("M2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < m1_rows; i++) { 
        for (j = 0; j < m2_cols; j++) { 
            result[i][j] = 0; 
            for (k = 0; k < m1_cols; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("\n--- Resultant Matrix (%d x %d) ---\n", m1_rows, m2_cols);
    for (i = 0; i < m1_rows; i++) {
        for (j = 0; j < m2_cols; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    }
}