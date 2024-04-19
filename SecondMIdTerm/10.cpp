//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void wf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
    FILE *f = fopen("podatoci.txt", "r");
    int start, end, prva, i;
    char string[100];
    char z1, z2;
    scanf("\n%c", &z1);
    scanf("%c", &z2);
    if (isspace(z2)) {
        char temp = z1;
        z1 = z2;
        z2 = temp;
    }
    while (fgets(string, 100, f) != NULL) {
        start = 0;
        end = 0;
        prva = 1;
        if (isspace(z1) == 0) {
            for (i = 0; i < strlen(string); i++) {
                if (string[i] == z1)
                    start = i;
                else if (string[i] == z2) {
                    end = i;
                    break;
                }
            }
        } else {
            for (i = 0; i < strlen(string); i++) {
                if (prva) {
                    if (isspace(string[i])) {
                        start = i;
                        prva = 0;
                    }
                }
                if (string[i] == z2)
                    end = i;
            }
        }
        for (i = start + 1; i < end; i++)
            printf("%c", string[i]);
        printf("\n");
    }
    fclose(f);
    return 0;
}