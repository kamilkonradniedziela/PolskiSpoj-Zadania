#include <iostream>

int main()
{
	int liczba, nowa_liczba=0;
	while (std::cin >> liczba)
	{
		nowa_liczba += liczba;
		std::cout << nowa_liczba << std::endl;
	}
}
