//
// Created by hrist on 4/19/2024.
//
#include <stdio.h>

int pozitivni(int array[], int n, int x) {
    static int counter = 0;
    if (x == n)
        return 0;
    else if (array[x] > -1)
        return 1 + pozitivni(array, n, x + 1);
    else
        return pozitivni(array, n, x + 1);
}

/*int pozitivni(int array[],int n,int x)
{
    static int counter=0;
    if(x==n)
      return counter;
    else if(array[x]>-1)
        counter++;
    return pozitivni(array,n,x+1);
}*/
int main() {
    int n, i;
    int array[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("%d", pozitivni(array, n, 0));
}