#include <iostream>

using namespace std;

int main()
{
	int zestawy;
	cin >> zestawy;
	for (int i = 0; i < zestawy; i++)
	{
		string napis;
		cin >> napis;
		int licznik = 1;
		for (int i = 0; i < napis.length(); i++)
		{
			if (napis[i] != napis[i+1])
			{
				if (licznik > 2)
				{
					cout << napis[i] << licznik;
				}
				else if (licznik == 2)
				{
					cout << napis[i] << napis[i];
				}
				else
				{
					cout << napis[i];
				}
				licznik = 1;
			}
			else
			{
				licznik++;
			}
		}
		cout << endl;
	}
	return 0;
}