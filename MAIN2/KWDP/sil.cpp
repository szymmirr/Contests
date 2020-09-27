#include <iostream>

using namespace std;

int main()
{
    int liczba,silnia=1;
    cin>>liczba;
    for (int i=1;i<=liczba;i++)
    {
        silnia=silnia*i;
    }
    cout<<silnia;
    return 0;
}
