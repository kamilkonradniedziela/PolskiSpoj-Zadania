#include <iostream>

int Collatz(int xn, int razy)
{
	if (xn == 1)
	{
		std::cout << razy << std::endl;
		return razy;
	}
	else
	{
		if (xn % 2 == 1)
		{
			return Collatz(3 * xn + 1, razy+1);
		}
		if (xn % 2 == 0)
		{
			return Collatz(xn / 2, razy+1);
		}
	}
}

int main()
{
	int testy,wyrazy_ciagu;
	std::cin >> testy;
	while(testy--)
	{
		std::cin >> wyrazy_ciagu;
		Collatz(wyrazy_ciagu, 0);
	}
	return 0;
}