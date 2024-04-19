//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

int main() {
    char c;
    int sum = 0, temp = 0;
    while ((c = getchar()) != '!') {
        if (c >= '0' && c <= '9') {
            temp = (temp * 10) + c - '0';
            //sum = sum + temp;
        } else {
            sum = sum + temp;
            temp = 0;
        }
    }
    printf("%d", sum + temp);
    return 0;
}