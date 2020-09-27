#include <iostream>

using namespace std;

int main()
{
    int n,maks=0,suma=0;
    cin >> n >> n;
    while (n!=-1)
    {
        if (n>maks)
        {
            maks=n;
            suma+=1;
        }
        cin >> n;
    }
    cout << suma;
    return 0;
}
