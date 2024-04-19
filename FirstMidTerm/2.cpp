//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

int main() {
    int n, x, i, brc = 0, cifra, broj = 0;
    scanf("%d", &n);
    if (n < 10) {
        printf("Brojot ne e validen");
        return 0;
    }
    for (i = n - 1; i > 0; i--) {
        x = i;
        while (x) {
            cifra = x % 10;
            brc++;
            broj = broj * 10 + cifra;
            x /= 10;
        }
        if (broj % brc == 0) {
            printf("%d", i);
            return 0;
        }
        broj = 0;
        brc = 0;
    }
    return 0;
}