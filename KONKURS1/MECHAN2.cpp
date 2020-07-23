#include <iostream>
using namespace std;
int main()
{
    string liczba;
    int suma=0;
    for(int i=0;i<1000;i++)
    {
        cin >> liczba;
        int zera=0, jedynki=0;
        for (int j=0;j<liczba.length();j++)
        {
            if(liczba[j]=='0')
            {
                zera=zera+1;
            }
            if(liczba[j]=='1')
            {
                jedynki=jedynki+1;
            }
        }
        if(zera==jedynki)
        {
            suma=suma+1;
        }
    }
    cout << suma;
    return 0;
}
