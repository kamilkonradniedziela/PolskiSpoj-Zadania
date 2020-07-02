#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int testy,n;
    scanf("%d", &testy);
    while (testy--)
    {
        scanf("%d", &n);
        int * tab = malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &tab[i]);
        }
        for (int i = 1; i < n; i++)
        {
            printf("%d ", tab[i]);
        }
        printf("%d\n", tab[0]);
        free(tab);
    }
}