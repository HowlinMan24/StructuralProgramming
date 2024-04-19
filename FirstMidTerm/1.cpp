//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

int main() {

    int m, n, i, broj, mozheblag = 0, cifra;
    scanf("%d%d", &m, &n);

    for (i = m; i <= n; i++) {
        broj = i;
        mozheblag = 0;
        while (broj > 0) {
            cifra = broj % 10;
            if (cifra == 1 || cifra == 3 || cifra == 5 || cifra == 7 || cifra == 9) {
                mozheblag = 0;
                break;
            }
            mozheblag = 1;
            broj = broj / 10;
        }
        if (mozheblag == 1) {
            printf("%d", i);
            return 0;
        }
    }
    printf("NE");
}
