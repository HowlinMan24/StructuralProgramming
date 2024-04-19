//
// Created by hrist on 4/19/2024.
//
//Од стандарден влез се внесуваат два цели броја N и Х.
//Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
//Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
#include <stdio.h>

int main() {
    int N, X, i, cifra, cifraX, flag = 1;
    scanf("%d%d", &N, &X);
    for (int i = N - 1; i >= 0; --i) {
        int temp = i;
        while (temp) {
            int tempX = X;
            cifra = temp % 10;
            while (tempX) {
                cifraX = tempX % 10;
                if (cifra == cifraX) {
                    flag = 0;
                    break;
                }
                tempX /= 10;
            }
            if (flag == 0)
                break;
            temp /= 10;
        }
        if (flag) {
            printf("%d", i);
            break;
        }
        flag = 1;
    }

    return 0;
}
