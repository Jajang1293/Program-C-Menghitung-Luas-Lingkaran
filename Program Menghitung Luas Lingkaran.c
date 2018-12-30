#include<stdio.h>

int main()
{
    float PHI = 3.14;
    float jari, luas;

    printf("Masukkan Jari-jari Lingkaran : ");
    scanf("%f", &jari);

    luas =PHI*jari*jari;
    printf("Luas : %.2f", luas);
    return 0;
}
