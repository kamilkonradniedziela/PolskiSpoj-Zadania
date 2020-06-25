#include <stdio.h>

int main()
{
    float a,b,c;
    float delta;
    while(scanf("%f%f%f",&a,&b,&c))
    {
        delta = b*b-4*a*c;
        if(delta<0)
        {
            printf("0\n");
        }
        else if(delta==0)
        {
            printf("1\n");
        }
        else 
        {
            printf("2\n");
        }
   }
   return 0;
}