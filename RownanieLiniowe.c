#include <stdio.h>

int main()
{
    int ile;
    float a,b,c,wynik;
    scanf("%f%f%f",&a,&b,&c);
    if(a>0)
    {
    wynik=(c-b)/a;
         printf("%.2f",wynik);
    }
    else if(a==0 && b!=c)
    {
        printf("BR");
    }
    else if(a==0 && b==c)
    {
        printf("NWR");
    }
}