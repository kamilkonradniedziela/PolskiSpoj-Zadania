#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<int>tab;
	int x;
	while (std::cin >> x)
	{
		tab.push_back(x);
	}
	for (int i = tab.size()-1; i >= 0; i--)
	{
		std::cout << tab[i] << " ";
	}
	return 0;
}