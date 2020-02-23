#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.141592654

using namespace std;

int main()
{
    double r, d, P;
    cin >> r;
    cin >> d;
    P = (pow(r, 2) - pow(d, 2) / 4.0) * PI;

    cout << fixed << setprecision(2) << P;

    return 0;
}