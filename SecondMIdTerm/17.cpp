//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>
#include <math.h>

int main() {
    int i, j, m, n, prva = 0, vtora = 0;
    int matrix[100][100];
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (n % 2) {
        for (i = 0; i < m; i++) {
            prva = 0;
            vtora = 0;
            for (j = 0; j < n; j++) {
                if (j < n / 2)
                    prva += matrix[i][j];
                else if (j > n / 2)
                    vtora += matrix[i][j];
            }
            matrix[i][n / 2] = fabs(prva - vtora);
        }
    } else {
        for (i = 0; i < m; i++) {
            prva = 0;
            vtora = 0;
            for (j = 0; j < n; j++) {
                if (j < n / 2)
                    prva += matrix[i][j];
                else
                    vtora += matrix[i][j];
            }
            matrix[i][n / 2 - 1] = fabs(prva - vtora);
            matrix[i][n / 2] = fabs(prva - vtora);
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