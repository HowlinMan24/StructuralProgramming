//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

int main() {
    int x, m, n, zbir = 0, i, j;
    int matrix[100][100];
    scanf("%d", &x);
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < m; i++) {
        zbir = 0;
        for (j = 0; j < n; j++) {
            zbir += matrix[i][j];
        }
        for (j = 0; j < n; j++) {
            if (zbir > x)
                matrix[i][j] = 1;
            else if (zbir == x)
                matrix[i][j] = 0;
            else matrix[i][j] = -1;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}