#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int ileLb, oIleLb, liczba;
    scanf("%d", &ileLb);
    scanf("%d", &oIleLb);
    int* tab = malloc(ileLb * sizeof(int));
    for (int i = 0; i < ileLb; i++)
    {
        scanf("%d", &liczba);
        tab[i] = liczba;
    }
    for (int i = oIleLb; i < ileLb; i++)
    {
        printf("%d ", tab[i]);
    }
    for (int i = 0; i < oIleLb; i++)
    {
        printf("%d ", tab[i]);
    }
}