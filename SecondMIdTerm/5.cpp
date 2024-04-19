//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
    // vasiot kod pocnuva od ovde
    FILE *f = fopen("livce.txt", "r");
    char string2[100], string[100], prva[100], maxstring[100], dobivka[100];
    char c;
    int n, i, start = 0, v = 0, space = 0, x, prvo = 1;
    double max = 0, max1 = 0, kf = 1;
    while (fgets(string, 100, f) != NULL) {
        if (prvo) {
            strcpy(prva, string);
            prvo = 0;
            continue;
        }
        space = 0;
        v = 0;
        x = 0;
        for (i = 0; i <= strlen(string); i++) {
            if (isspace(string[i])) {
                space++;
            }
            if (space == 2) {
                v = i;
                break;
            }
        }
        for (i = v; i <= strlen(string); i++) {
            string2[x++] = string[i];
        }
        max = atof(string2);
        kf *= atof(string2);
        if (max1 < max) {
            strcpy(maxstring, string);
            strcpy(dobivka, string2);
            max1 = max;
        }
    }
    printf("%s%.2lf", maxstring, kf * atof(prva));
    fclose(f);
    return 0;

}