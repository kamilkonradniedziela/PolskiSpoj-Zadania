#include <stdio.h>

int main()
{
    unsigned int testy, L, C;
    scanf("%d", &testy);
    while (testy--)
    {
        scanf("%d%d", &L, &C);
        if ((L - 1) % C == 0)
        {
            printf("NIE\n");
        }
        else
        {
            printf("TAK\n");
        }
    }
}