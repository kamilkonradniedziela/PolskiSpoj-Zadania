#include <iostream>
#include <string>
using namespace std;

int main()
{
    unsigned int testy;
    int ile;
    int liczba;
    cin>>testy;
   for(int i = 0;i<testy;i++)
   {
        int wynik=0;
        cin>>ile;
        while(ile>0)
        {
            cin>>liczba;
            wynik+=liczba;
            ile--;
        }
        cout<<wynik<<endl;
   }
    return 0;
}
