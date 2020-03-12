#include <iostream>
#include <math.h>

int main()
{
	unsigned int testy;
	int doba = 86400;
	unsigned long lbObzartuchow;
	long double lbCiastekWopakowaniu;
	std:: cin >> testy;
	for(int i = 0; i<testy ;i++)
	{
		std::cin >> lbObzartuchow >> lbCiastekWopakowaniu;
		int zjedzone = 0;
		for (int i = 0; i < lbObzartuchow; i++)
		{
			int czas;
			std::cin >> czas;
			zjedzone += (doba / czas);
		}
		std::cout <<ceil(zjedzone / lbCiastekWopakowaniu);
	}
}