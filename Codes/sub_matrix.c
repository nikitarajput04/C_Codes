#include <stdio.h>

#define ROW 3
#define COL 3

int main() {
    int matrix1[ROW][COL], matrix2[ROW][COL], sub[ROW][COL];

   
    printf("Enter elements of first %dx%d matrix:\n", ROW, COL);
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("matrix1[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of second %dx%d matrix:\n", ROW, COL);
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("matrix2[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            sub[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("\nSubtraction of the matrices:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
