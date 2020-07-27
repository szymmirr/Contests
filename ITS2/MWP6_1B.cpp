#include <iostream>

using namespace std;

//const int duzo = 10000000000;
//long double c[duzo];

int main()
{
    int z,q;
    //long double c[100];
    int * c = new int[10000000];
    //long double qu[100];
    int * qu = new int[10000000];
    //long double wynik[100];
    //long double * wynik = new long double[10000000];
    long double wynik;
    int inter=0;
    cin >> z >> q;
    for (int i=0;i<z;i++)
    {
        cin >> c[i];
    }
    for (int i=0;i<q;i++)
    {
        cin >> qu[i];
    }
    for (int i=0;i<q;i++)
    {
        for (int j=0;j<z;j++)
        {
            wynik=qu[i]/c[j];
            if((int)qu[i]%(int)c[j]!=0)
            {
                inter=wynik;
                inter=inter+1;
                wynik=inter;
            }
            cout << wynik << " ";
        }
        cout << endl;
    }
    delete []c;
    return 0;
}
