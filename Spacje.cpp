#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
     string tekst;
     while (getline(cin, tekst))
     {
          for (int i = 0; i < tekst.length(); i++)
          {
               if(tekst[i]==' ')
               {
                    i++;
                    putchar(toupper(tekst[i]));
               }
               else
               {
                    cout<<tekst[i];
               }
          }
          cout<<endl;
     }
     return 0;
}