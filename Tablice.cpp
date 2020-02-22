#include <iostream>

using namespace std;

int main()
{
	int proby;
	cin >> proby;
	for (int i = 0; i < proby; i++)
	{
		int ile;
		cin >> ile;
		int* tab = new int[ile];
		for (int i = 0; i < ile; i++)
		{
			cin >> tab[i];
		}
		for (int i = ile-1; i>=0; i--)
		{
			cout << tab[i]<<" ";
		}
		delete[]tab;
	}

}