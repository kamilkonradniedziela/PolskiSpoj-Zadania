#include <stdio.h>

int main()
{
    int testy;
    scanf("%d",&testy);
    while(testy--)
    {
        int maksZakres,podzielnaPrzez,niepodzielnaPrzez;
        scanf("%d%d%d",&maksZakres,&podzielnaPrzez,&niepodzielnaPrzez);
        for(int i = 1;i<maksZakres;i++)
        {
            if(i%podzielnaPrzez==0 && i%niepodzielnaPrzez!=0)
            {
                printf("%d ",i);
            }
        }
        printf("\n");
    }
}