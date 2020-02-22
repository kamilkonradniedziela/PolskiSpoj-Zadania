#include <iostream>

using namespace std;

int nwd(int a, int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else if (a < b)
		{
			b = b - a;
		}
	}
	cout << a << endl;
	return a;
}

int main()
{
	int proby;
	cin >> proby;
	for (int i = 0; i < proby; i++)
	{
		int a, b;
		cin >> a >> b;
		nwd(a, b);
	}
}