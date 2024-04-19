//
// Created by hrist on 4/19/2024.
//
/*Од тастатура во низа се внесуваат N позитивни цели броеви (N <= 100), а потоа се внесува и цел број ind (ind >= 0).
Да се напише функција sum_pos која ја прима низата, бројот ind (кој претставува индекс во низата) и бројот на валидни елементи во низата.
Функцијата треба да врати сумата на сите елементи почнувајќи од дадениот индекс ind па се до крајот на низата.
Ако индексот ind е поголем од Nфункцијата треба да врати 0.*/
#include <stdio.h>

int sum_pos(int *array, int indeks, int n) {
    int i;
    int sum = *(array + indeks);
    for (i = 0; i < n; i++) {
        if ((array + indeks) < (array + i))
            sum += *(array + i);
    }
    return sum;
}

int main() {
    int n, i, j, indeks;
    scanf("%d", &n);
    int *array;
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    scanf("%d", &indeks);
    if (indeks < n)
        printf("%d", sum_pos(array, indeks, n));
    else
        printf("0");
    return 0;
}
