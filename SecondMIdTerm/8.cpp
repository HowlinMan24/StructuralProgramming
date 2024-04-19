//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int cifri(char *string) {
    int i, counter = 0;
    for (i = 0; i < strlen(string); i++) {
        if (isdigit(string[i]))
            counter++;
    }
    if (counter > 1)
        return 1;
    else
        return 0;
}

void print(char *string) {
    int i, prva = 1, start = 0, end = 0;
    for (i = 0; i < strlen(string); i++) {
        if (prva) {
            if (isdigit(string[i])) {
                start = i;
                prva = 0;
            }
        }
        if (isdigit(string[i]))
            end = i;
    }
    for (i = start; i <= end; i++)
        printf("%c", string[i]);
}

int main() {
    wtf();
    // vasiot kod ovde
    FILE *f = fopen("dat.txt", "r");
    int i, start, end, prva = 1, max_start, max_end, digit;
    char string[100], maxstring[100];
    while (fgets(string, 100, f) != NULL) {
        if (prva) {
            strcpy(maxstring, string);
            prva = 0;
            continue;
        }
        if (cifri(string)) {
            if (strlen(maxstring) <= strlen(string))
                strcpy(maxstring, string);
        }
    }
    print(maxstring);
    fclose(f);
    return 0;
}
