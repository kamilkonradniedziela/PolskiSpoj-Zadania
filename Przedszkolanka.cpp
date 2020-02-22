#include <iostream>

using namespace std;

int NWW(int a, int b)
{
	int iloczyn = a * b;
	do
	{
		if (a > b)
		{
			a = a - b;
		}
		else if(b>a)
		{
			b = b - a;
		}
	} while (a != b);
	int NWW = iloczyn / a;
	cout << NWW << endl;
	return NWW;
}

int main()
{
	int ilosc_testow,a,b;
	cin >> ilosc_testow;
	for (int i = 0; i < ilosc_testow; i++)
	{
		cin >> a;
		cin >> b;
		NWW(a, b);
	}
	return 0;
}