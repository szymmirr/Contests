#include<iostream>
using namespace std;

int main()
{
bool palindrom = true;
string slowo;
    cin >> slowo;
    int d = slowo.length();

    for(int i = 0; i < d / 2; i++)
            if (slowo[i] != slowo[d-1-i])
            {
                palindrom = false;
                break;
            }
    if (palindrom == true)
    cout << "TAK";
    else
        cout << "NIE";
return 0;
}

