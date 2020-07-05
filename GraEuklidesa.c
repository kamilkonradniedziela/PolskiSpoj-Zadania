#include <stdlib.h>
#include <stdio.h>

int main()
{
    int testy,a,b,razem;
    scanf("%d",&testy);
    while(testy--)
    {
        scanf("%d%d",&a,&b);
        if(a==b)
        {
            razem=a+b;
        }
        else
        {
            while(a!=b)
            {
                if(a>b)
                {
                    a=a-b;
                    razem=a+b;
                }
                else
                {
                    b=b-a;
                    razem=a+b;
                }
            }
        }
        printf("%d\n",razem);
    }
}