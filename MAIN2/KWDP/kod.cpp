#include <iostream>
#include <cstdlib>
using namespace std;

int hex2dec (string heksadecymalna)
{
    int dziesietna = strtol(heksadecymalna.c_str(), NULL, 16);
    return dziesietna;
}

int main()
{
    string liczba;
    cin >> liczba;
    int teges = hex2dec(liczba);
    cout << teges << endl;
    char znak = (char)teges;
    cout << znak;
    return 0;
}
