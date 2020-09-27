#include <iostream>

using namespace std;

int main()
{
    int liczba,pierwsza=1;
    cin >> liczba;
    for (int i=2;i<liczba/2+1;i++)
    {
        if (liczba%i==0)
        {
            pierwsza=0;
        }
    }
    if (pierwsza==1)
    {
        cout<<"pierwsza";
    }
    if (pierwsza==0)
    {
        cout<<"zlozona";
    }
    return 0;
}
