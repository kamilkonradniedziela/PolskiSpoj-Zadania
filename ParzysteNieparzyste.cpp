#include <iostream>

int main()
{
	int testy,liczby;
	std::cin >> testy;
	for (int i = 0; i < testy; i++)
	{
		int liczbyWtablicy,tabSize=0;
		std::cin >> liczbyWtablicy;
		int* tab = new int[liczbyWtablicy];
		for (int i =0;i<liczbyWtablicy;i++)
		{
			std::cin >> liczby;
			tab[i]=liczby;
			tabSize++;
		}
		for (int j = 0; j < tabSize; j++)
		{
			if (j % 2 == 1)
			{
				std::cout << tab[j] << " ";
			}
		}
		for (int j = 0; j < tabSize; j++)
		{
			if (j % 2 == 0)
			{
				std::cout << tab[j] << " ";
			}
		}
		delete[]tab;
	}
}