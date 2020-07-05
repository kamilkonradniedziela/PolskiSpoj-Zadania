#include <stdio.h>

int main()
{
    int testy,c,k,w,pomocnicza;
    scanf("%d",&testy);
    while(testy--)   
    {
        scanf("%d%d%d",&c,&k,&w);
        if(c*w<=k)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}