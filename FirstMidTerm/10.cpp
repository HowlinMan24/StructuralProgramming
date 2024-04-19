//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

int main() {
    int number;
    while (scanf("%d", &number)) {
        if (number <= 10)
            continue;
        int temp = number;
        int flag = 0;
        while (temp) {
            if (temp % 10 < temp / 10 % 10 && temp / 10 % 10 > temp / 100 % 10) {
                flag = 1;
            } else if (temp % 10 > temp / 10 % 10 && temp / 10 % 10 < temp / 100 % 10) {
                flag = 1;
            }else {
                flag=0;
            }
            if (!flag)
                break;

            temp /= 100;
        }
        if (flag)
            printf("%d\n", number);
    }
}