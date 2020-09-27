#include <iostream>

using namespace std;

int main()
{
    string liczba;
    int zaczelosie=0;
    cin >> liczba;
    for(int i=liczba.length()-1;i>=0;i--)
    {
        if(liczba[i]!='0')
        {
            zaczelosie=1;
        }
        if(zaczelosie==1)
        {
            cout<<liczba[i];
        }
    }
    return 0;
}
