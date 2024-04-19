//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

int main() {
    int pogolem, pomal, cifra_pomal, cifra_pogolem;
    scanf("%d %d", &pogolem, &pomal);
    if (pogolem <= 0 || pomal <= 0) {
        printf("Invalid input");
        return 0;
    }
    if (pomal > pogolem) {
        int pomosna = pomal;
        pomal = pogolem;
        pogolem = pomosna;
    }
    while (pomal > 0) {
        cifra_pomal = pomal % 10;
        cifra_pogolem = (pogolem / 10) % 10;
        if (cifra_pomal != cifra_pogolem) {
            printf("NE");
            return 0;
        }
        pomal /= 10;
        pogolem /= 100;
    }
    printf("PAREN");
    return 0;
}