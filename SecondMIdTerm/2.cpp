//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int digit(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

int main() {
    wtf();
    FILE *f = fopen("broevi.txt", "r");
    while (!feof(f)) {
        int n, x, i;
        fscanf(f, "%d", &n);
        if (n == 0) break;
        int max = 0;
        int maxN = 0;
        for (i = 0; i < n; ++i) {
            fscanf(f, "%d", &x);
            int y = digit(x);
            if (y > max) {
                max = y;
                maxN = x;
            }
        }
        printf("%d\n", maxN);
    }
    fclose(f);
    // vashiot kod ovde
}
