//
// Created by hrist on 4/19/2024.
//
#include <stdio.h> //Od nepoznat broj vneseni broevi da se opredelat dvata najgolemi
int main ()
{
    int n,m,cifra,maxcifra=0,maxcifra2=0,suma_na_cifri=0,brojac=0;
    scanf("%d",&m);
    int temp2=m;
    while(temp2)
    {
        cifra=temp2%10;
        suma_na_cifri+=cifra;
        temp2/=10;
        if(cifra>maxcifra)
            maxcifra=cifra;
    }
    maxcifra2=maxcifra;
    maxcifra=0;
    printf("%d: %d\n",m,suma_na_cifri);
    while(scanf("%d",&n))
    {
        int temp=n;
        cifra=0;
        suma_na_cifri=0;
        if(n<0)
            break;
        while(temp)
        {
            cifra=temp%10;
            suma_na_cifri+=cifra;
            temp/=10;
            if(cifra>maxcifra)
                maxcifra=cifra;
        }
        printf("%d: %d\n",n,suma_na_cifri+maxcifra2);
        maxcifra2=maxcifra;
        maxcifra=0;
    }
    return 0;
}
