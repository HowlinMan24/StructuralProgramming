//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>
#include <math.h>

int main() {
    int m, n, i, j, x = 0, zbir = 0;
    int matrix[100][100], array[100];
    float arsredina = 0;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < m; i++) {
        zbir = 0;
        int max = matrix[i][0];
        for (j = 0; j < n; j++) {
            zbir += matrix[i][j];
        }
        arsredina = (float) zbir / n;
        for (j = 0; j < n; j++) {
            if (fabs(arsredina - max) < fabs(arsredina - matrix[i][j]))
                max = matrix[i][j];
        }
        array[x++] = max;
    }
    for (i = 0; i < x; i++)
        printf("%d ", array[i]);
    return 0;
}