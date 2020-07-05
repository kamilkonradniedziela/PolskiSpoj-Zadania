#include <iostream>

using namespace std;

int main()
{
    int proby;
    string tekst;
    cin>>proby;
    while(proby--)
    {
        cin>>tekst;
        for(int i = 0;i<tekst.length()/2;i++)
        {
            cout<<tekst[i];
        }
        cout<<endl;
    }
    return 0;
}