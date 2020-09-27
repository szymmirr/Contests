#include <iostream>
#include <algorithm.h>

using namespace std;

int main()
{
    unsigned long long w,k,reszta,wynik;
    int rzuty[100000];
    cin >> w >> k;
    for(int i=0;i<w;i++)
    {
        cin >> rzuty[i];
    }
    //reszta=k%1000000000000;
    //cout << reszta;
    wynik=w!/(k!*(w-k)!);
    cout << wynik;
    return 0;
}
