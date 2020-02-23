#include <iostream>
#define T_SIZE 1001

using namespace std;

char* string_merge(char* p, char* d)
{
	unsigned int i = 0;
	while (p[i] && d[i]) 
	{
		++i; 
	}

	unsigned int b = 2 * i + 1;

	char* wsk = new char[b];

	for (i = 0; i < b; ++i)
	{
		if (i % 2 == 0)
		{
			wsk[i] = *p++;
		}
		else
		wsk[i] = *d++;
	}
	--i;
	wsk[i] = 0;
	return wsk;
}

int main() 
{
	int t, n;
	char S1[T_SIZE], S2[T_SIZE], * S;

	cin >> t; /* wczytaj liczbê testów */
	cin.getline(S1, T_SIZE);
	while (t) {
		cin.getline(S1, T_SIZE, ' ');
		cin.getline(S2, T_SIZE);
		S = string_merge(S1, S2);
		cout << S << endl;
		delete[] S;
		t--;
	}
	return 0;
}