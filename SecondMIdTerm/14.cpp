//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

int main() {
    int n, i, j, k;
    scanf("%d", &n);
    int matrix[100][100], matrix2[100][100], matrix3[100][100];
    for (i = 0; i < n; i++)
        for (j = 0; j < n * 2; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < n; i++) {
        for (j = n; j < n * 2; j++) {
            for (k = 0; k < n; k++) {
                matrix2[i][k] = matrix[i][j];
                j++;
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matrix3[i][j] = matrix[i][j];
        }
    }
    for (j = 0; j < n; j++) {
        for (i = n; i < n * 2; i++) {
            for (k = 0; k < n; k++) {
                matrix3[i][j] = matrix2[k][j];
                i++;
            }
        }
    }
    for (i = 0; i < n * 2; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}