#include <stdio.h>

int main() {
    int m, n, p;


    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    
    printf("Enter columns of matrix B (rows must be %d): ", n);
    scanf("%d", &p);


    int A[m][n], B[n][p], C[m][p];


    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &B[i][j]);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            C[i][j] = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    printf("Result matrix C (A x B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
