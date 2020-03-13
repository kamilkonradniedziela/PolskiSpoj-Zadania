#include <iostream>
#include <string>
#include <cmath>

int main()
{
    int testy, lb_punktow, x[100], y[100], tmp;
    std::string nazwa[100];
    double pkt_1, pkt_2;
    std::string nazwa_tmp;
    std::cin >> testy;
    for (int i = 0; i < testy; i++)
    {
        std::cin >> lb_punktow;
        for (int j = 0; j < lb_punktow; j++)
        {
            std::cin >> nazwa[j] >> x[j] >> y[j];
        }
        for (int j = 0; j < lb_punktow; j++)
        {
            for (int k = 0; k < lb_punktow - 1; k++)
            {
                pkt_1 = sqrt(x[k] * x[k] + y[k] * y[k]);
                pkt_2 = sqrt(x[k + 1] * x[k + 1] + y[k + 1] * y[k + 1]);
                if (pkt_1 > pkt_2)
                {
                    tmp = x[k];
                    x[k] = x[k+1];
                    x[k+1] = tmp;
                    
                    tmp = y[k];
                    y[k] = y[k+1];
                    y[k+1] = tmp;
                    
                    nazwa_tmp = nazwa[k];
                    nazwa[k] = nazwa[k+1];
                    nazwa[k+1] = nazwa_tmp;
                }
            }
         }
        
        for (int j = 0; j < lb_punktow; j++)
        {
            std::cout << nazwa[j] << " " << x[j] << " " << y[j] << std::endl;
        }
    }
}