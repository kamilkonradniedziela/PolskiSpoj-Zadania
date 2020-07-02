#include <stdio.h>

int main()
{
    int testy,liczba;
    scanf("%d",&testy);
    while(testy--)
    {
        scanf("%d",&liczba);
        if(liczba<2)
        {
            printf("NIE\n");
        }
        else
        {
            for(int i = 2;i<=liczba;i++)
            {
                if(liczba%i==0)
                {
                    if(i==liczba)
                    printf("TAK\n");
                    else
                    {
                        printf("NIE\n");
                    }
                    break;
                } 
            }
        }
    }
}