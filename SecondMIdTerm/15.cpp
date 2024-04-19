//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>
#include <stdlib.h>

int poramnet(int x) {
    if (x == 0)
        return 0;
    int cifra = x % 10;
    if (cifra == 9)
        cifra = 7;
    // int cifra2 = poramnet(x / 10);
    // return cifra + cifra2 * 10;
    return poramnet(x / 10) * 10 + cifra;
}

int main() {
    int x, i, j, counter = 0;
    int array[100];
    while (scanf("%d", &x)) {
        array[counter] = poramnet(x);
        counter++;
    }
    for (i = 0; i < counter; i++) {
        for (j = i + 1; j < counter; j++) {
            if (array[j] < array[i]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (i = 0; i < 5 && i < counter; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}