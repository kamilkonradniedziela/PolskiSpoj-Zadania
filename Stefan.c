#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int miasta, zysk;
	long long suma=0, maksymalnyZysk = 0;
	scanf("%d", &miasta);
	while (miasta--)
	{
		scanf("%d", &zysk);
		suma = suma + zysk;
		if (suma > maksymalnyZysk)
		{
			maksymalnyZysk = suma;
		}
		if (suma < 0)
		{
			suma = 0;
		}
	}
	printf("%d", maksymalnyZysk);
	return 0;
}