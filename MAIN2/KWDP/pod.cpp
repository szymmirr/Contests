#include <iostream>

using namespace std;

int main()
{
    int a,b,k,suma=0;
    cin >> a >> b >> k;
    for (int i=a;i<=b;i++)
    {
        if (i%k==0)
        {
            suma+=1;
        }
    }
    cout << suma;
    return 0;
}
