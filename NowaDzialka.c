#include <stdio.h>

int main()
{
    int ile,metry;
    scanf("%d\n",&ile);
    for(int i = 0;i<ile;i++)
    {
        scanf("%d",&metry);
        printf("%d\n",metry*metry);
    }
    return 0;
}