//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

int main() {
    int i, j, n, m, poz1, poz2, quadrant1 = 0, quadrant2 = 0, quadrant3 = 0, quadrant4 = 0;
    scanf("%d %d", &n, &m);
    int matrix[100][100];
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);
    scanf("%d %d", &poz1, &poz2);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (i < poz1 && j < poz2)
                quadrant2 += matrix[i][j];
            if (i < poz1 && j >= poz2)
                quadrant1 += matrix[i][j];
            if (i >= poz1 && j < poz2)
                quadrant3 += matrix[i][j];
            if (i >= poz1 && j >= poz2)
                quadrant4 += matrix[i][j];
        }
    }
    printf("%d %d %d %d", quadrant1, quadrant2, quadrant3, quadrant4);
    return 0;
}
