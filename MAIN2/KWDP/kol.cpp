#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << fixed;
    cout.precision(3);
    long double promien;
    cin >> promien;
    cout << M_PI*promien*promien << endl;
    cout << 2*M_PI*promien;
    return 0;
}
