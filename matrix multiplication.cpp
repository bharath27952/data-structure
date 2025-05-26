#include <stdio.h>

#define MAX 10

int main() {
    int a[MAX][MAX], b[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;
    int i, j, k;

    // Input dimensions
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);

    // Check for matrix multiplication possibility
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first must equal rows of second.\n");
        return 1;
    }

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)
            scanf("%d", &a[i][j]);

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j)
            scanf("%d", &b[i][j]);

    // Initialize result matrix to 0
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
            result[i][j] = 0;

    // Multiply matrices
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
            for (k = 0; k < c1; ++k)
                result[i][j] += a[i][k] * b[k][j];

    // Display result
    printf("Resultant matrix:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
