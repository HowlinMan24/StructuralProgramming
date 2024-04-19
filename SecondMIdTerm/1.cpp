//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int samoglaska(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    else
        return 0;
}

int main() {

    writeToFile();
    // Vasiot kod zapocnuva od tuka
    FILE *f = fopen("text.txt", "r");
    char string[100], c;
    char prethodna, sledna;
    int counter = 0, i;
    while (fgets(string, 100, f) != NULL) {
        string[strlen(string) - 1] = '\0';
        prethodna = string[0];
        for (i = 0; i < strlen(string); i++) {
            sledna = tolower(string[i]);
            if (prethodna == 'a' || prethodna == 'e' || prethodna == 'i' || prethodna == 'o' || prethodna == 'u') {
                if (sledna == 'a' || sledna == 'e' || sledna == 'i' || sledna == 'o' || sledna == 'u') {
                    printf("%c%c\n", prethodna, sledna);
                    counter++;
                }
            }
            prethodna = tolower(string[i]);
        }
    }
    printf("%d", counter);
    fclose(f);
    return 0;
}
