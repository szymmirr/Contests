#include <iostream>

using namespace std;

int main()
{
    unsigned long long int t,n,silnia;
    silnia=1;
    unsigned long long int tab[101];
    cin>>t;
    for(unsigned long long int i=0;i<t;i++)
    {
        cin >> n;
        silnia=1;
        for(unsigned long long int j=1;j<=n;j++)
        {
            silnia=silnia*j;
        }
        tab[i]=silnia;
    }
    for(unsigned long long int i=0;i<t;i++)
    {
        cout<<tab[i]<<endl;
    }
    return 0;
}

