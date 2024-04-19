//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int pomestuvanje(char *string, int x) {
    char f = 'A';
    if (*string == '\0')
        return 0;
    if (isalpha(*string)) {
        if (islower(*string))
            f = 'a';
        *string = f + (*string + x - f) % 26;
    }
    return pomestuvanje(string + 1, x);
}

int main() {
    int n, i, j, x, z;
    char string[80], temp[80];
    scanf("%d %d\n", &n, &x);
    for (i = 0; i < n; i++) {
        fgets(string, 80, stdin);
        string[strlen(string) - 1] = '\0';
        pomestuvanje(string, x);
        puts(string);
    }
    return 0;
}