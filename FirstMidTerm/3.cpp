//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

int main() {
    int n, m, k, brojnadeliteli, max = 0, brojceto;
    scanf("%d", &n);
    for (m = n - 1; m > 0; m--) {
        k = 1;
        brojnadeliteli = 0;
        while (k <= m) {
            if (m % k == 0) {
                brojnadeliteli++;
            }
            k++;
            if (brojnadeliteli > max) {
                max = brojnadeliteli;
                brojceto = m;
            }
        }
    }
    printf("%d", brojceto);

    return 0;
}