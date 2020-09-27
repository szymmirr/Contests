#include <iostream>

using namespace std;

int main()
{
    int t,n,a,suma;
    int tab[101];
    cin >> t;
    for (int i=0;i<t;i++)
    {
        cin >> n;
        suma=0;
        for (int j=0;j<n;j++)
        {
            cin >> a;
            suma=suma+a;
        }
        tab[i]=suma;
    }
    for (int i=0;i<t;i++)
    {
        cout << tab[i] << endl;
    }
    return 0;
}
