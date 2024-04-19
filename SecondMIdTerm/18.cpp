//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

int main() {
    int n, i, j;
    float X = 0, Y = 0;
    scanf("%d", &n);
    double A[100][100], B[100][100];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%lf", &A[i][j]);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j)
                X += A[i][j];
            if (i + j >= n)
                Y += A[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j && i + j == n - 1)
                B[i][j] = X + Y;
            else if (i + j == n - 1)
                B[i][j] = Y;
            else if (i == j)
                B[i][j] = X;
            else
                B[i][j] = 0;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%.1lf ", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
