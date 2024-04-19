//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

int main() {
    int z, a, b, ednakov = 0, vneseni_parovi = 0;
    float procent;
    scanf("%d", &z);
    while (scanf("%d %d", &a, &b)) {
        if (a == 0 && b == 0)
            break;
        if (z == a + b)
            ednakov++;
        vneseni_parovi++;
    }
    printf("Vnesovte %d parovi od broevi chij zbir e %d \n", ednakov, z);
    printf("Procentot na parovi so zbir %d e %.2f%%", z, (float) ednakov / vneseni_parovi * 100);
    return 0;
}
