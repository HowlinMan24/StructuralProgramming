//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

void sort(char *string, int counter) {
    int i, j;
    for (i = 0; i < counter; i++) {
        for (j = i + 1; j < counter; j++) {
            if (string[i] > string[j]) {
                char temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
}

int main() {
    wtf();
    FILE *f = fopen("input.txt", "r");
    char string[100], string2[100];
    int i, x, counter = 0;
    while (fgets(string, 100, f) != NULL) {
        x = 0;
        counter = 0;
        for (i = 0; i < strlen(string); i++) {
            if (isdigit(string[i])) {
                string2[x++] = string[i];
                counter++;
            }
        }
        sort(string2, counter);
        printf("%d:", counter);
        for (i = 0; i < counter; i++)
            printf("%c", string2[i]);
        printf("\n");
    }
    fclose(f);
    return 0;
}
