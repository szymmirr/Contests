#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int a,p,suma=0,tab[9],tab2[4],i=0,b,wyniczeq;
    cin >> a >> b;
    while (a!=0)
    {
        p=a%10;
        tab[i]=p;
        i=i+1;
        suma=p+suma;
        a=a/10;
    }
    wyniczeq=tab[0]*2;
    wyniczeq+=5;
    wyniczeq*=50;
    wyniczeq+=1764;
    wyniczeq-=b;
    cout << wyniczeq;
    return 0;
}
