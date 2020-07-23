#include <iostream>

using namespace std;

int main()
{
    int suma=0, dlugosc;
    string napis;
    for (int i=0;i<1000;i++)
    {
        cin >> napis;
        dlugosc=napis.length();
        if (dlugosc%2==0)
        {
            suma=suma+1;
        }
    }
    cout << suma;
    return 0;
}
