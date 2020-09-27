#include <iostream>

using namespace std;

int main()
{
    int tab[100000],liczba;
    cin>>liczba;
    for (int i=0;i<liczba;i++)
    {
        cin>>tab[i];
    }
    for (int i=0;i<liczba;i+=2)
    {
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    for (int i=1;i<liczba;i+=2)
    {
        cout<<tab[i]<<" ";
    }
    return 0;
}
