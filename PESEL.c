#include <stdlib.h>
#include <stdio.h>

int main()
{
    int proby,pesel_wynik,a,b,c,d,e,f,g,h,i,j,k;
    char pesel[12];
    scanf("%d",&proby);
    for(int i = 0;i<proby;i++)
    {
        scanf("%s",pesel);
        pesel_wynik= (pesel[0]-'0')*1+(pesel[1]-'0')*3+(pesel[2]-'0')*7+(pesel[3]-'0')*9+(pesel[4]-'0')*1+
        (pesel[5]-'0')*3+(pesel[6]-'0')*7+(pesel[7]-'0')*9+(pesel[8]-'0')*1+(pesel[9]-'0')*3+(pesel[10]-'0')*1;
        if(pesel_wynik>0)
        {
            if(pesel_wynik%10==0)
            {
                printf("D\n");
            }
            else
            {
                printf("N\n");
            }
        }
    }
}