//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

int main() {
    int i, j, n, m, counter = 0, eden = 0;
    int matrix[100][100];
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < m; i++) {
        counter = 0;
        for (j = 0; j < n; j++) {
            if (matrix[i][j] == 1)
                counter++;
            if (counter > 2) {
                eden++;
                break;
            }
            if (matrix[i][j] == 0)
                counter = 0;
        }
    }

    for (j = 0; j < n; j++) {
        counter = 0;
        for (i = 0; i < m; i++) {
            if (matrix[i][j] == 1)
                counter++;
            if (counter > 2) {
                eden++;
                break;
            }
            if (matrix[i][j] == 0)
                counter = 0;
        }
    }
    printf("%d", eden);
    return 0;
}
