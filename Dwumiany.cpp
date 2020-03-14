#include <iostream>

using namespace std;

long long Newton(long long n, long long k)
{
    if (2 * k > n)
        k = n - k;
    long long wynik = 1;
    for (int i = 1; i <= k; i++)
        wynik = wynik * (n - i + 1) / i;
    return wynik;
}

int main()
{
    int t; cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long n, k; cin >> n >> k;
        cout << Newton(n, k) << endl;
    }
    return 0;
}