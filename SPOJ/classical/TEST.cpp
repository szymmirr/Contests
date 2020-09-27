#include <iostream>

using namespace std;

int main()
{
    int tab[42];
    int licz=0;
    int a;
    for(int i=0;tab[i]!=42;i++)
    {
        cin>>a;
        licz=licz+1;
        tab[i]=a;
        if (a==42)
        {
            for(int i=0;tab[i]!=42;i++)
            {
                cout << tab[i] << endl;
            }
            return 0;
        }
    }

}


