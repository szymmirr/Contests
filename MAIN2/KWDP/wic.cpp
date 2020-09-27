#include <iostream>

using namespace std;

int main()
{
    int n,liczba,maks=0,wice=0;
    cin >> n;
    cin>>liczba;
    maks=liczba;
    cin>>liczba;


    if(liczba>maks)
    {
        wice=maks;
        maks=liczba;
    }
    else
    {
        wice=liczba;
    }
    for(int i=1;i<n-1;i++)
    {
        cin >> liczba;
        if(liczba>=maks)
        {
            wice=maks;
            maks=liczba;
        }
        else if(liczba<=maks&&liczba>=wice)
        {
            wice=liczba;
        }
    }
    cout<<wice;
    return 0;
}
