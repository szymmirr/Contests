#include <iostream>
using namespace std;
int main()
{
    int tab[5000];
    string tab2[5000];
    int sumapieriost=0;
    for(int i=0;i<5000;i++)
    {
        cin>>tab2[i];
        string liczba=tab2[i];
        int dlug=liczba.length()-1;
        if(liczba[0]==liczba[dlug])
        {
            sumapieriost=sumapieriost+1;
        }
    }
    cout << sumapieriost;
    return 0;
}