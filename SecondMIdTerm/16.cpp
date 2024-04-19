//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

int maksimum(int n) {
    if (n == 0)
        return 0;
    if (n % 10 > maksimum(n / 10))
        return n % 10;
    return maksimum(n / 10);
}

int main() {
    int n, x;
    while (scanf("%d", &n))
        printf("%d\n", maksimum(n));
    return 0;
}
