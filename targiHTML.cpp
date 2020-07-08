#include <iostream>
#include <string>

using namespace std;

int main()
{
	string wyraz;
	while (getline(cin, wyraz))
	{
		for (int i = 0; i < wyraz.length(); i++)
		{
			if (wyraz[i] == '<')
			{
				while (wyraz[i] != '>')
				{
					i++;
					wyraz[i] = toupper(wyraz[i]);
				}
			}
		}
		cout << wyraz<<"\n";
	}
	return 0;
}