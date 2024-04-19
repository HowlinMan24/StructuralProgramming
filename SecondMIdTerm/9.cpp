//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

float neprekinatadropka(int array[], int n, int x) {
    if (x == n - 1)
        return array[x];
    return array[x] + 1 / neprekinatadropka(array, n, x + 1);
}

int main() {
    int n;
    int array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("%f", neprekinatadropka(array, n, 0));
    return 0;
}