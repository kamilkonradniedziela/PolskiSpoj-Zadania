#include <stdlib.h>
#include <stdio.h>

int main()
{
    int testy, xa,ya,xb,yb,xc,yc;
    scanf("%d",&testy);
    while(testy--)
    {
        scanf("%d\t%d\t%d\t%d\t%d\t%d",&xa,&ya,&xb,&yb,&xc,&yc);
        if(xa-xb==0 || xa-xc==0)
        {
            printf("TAK\n");
            continue;
        }
        if(((ya-yb)/(xa-xb)) == ((ya-yc)/(xa-xc)))
        {
            printf("TAK\n");
        }
        else
        {
            printf("NIE\n");
        }
    }
    return 0;
}