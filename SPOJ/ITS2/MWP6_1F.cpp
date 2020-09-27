#include <iostream>

using namespace std;

int main()
{
    int p,r,q,suma=0,pn,a,b;
    //int a[100000]={};
    //int * a = new int[1000001];
    //int b[100000]={};
    //int * b = new int[1000001];
    cin >> p >> r >> q;

    for (int i=0;i<q;i++)
    {
        cin >> a >> b;
        for (int j=a;j<b+1;j++)
        {
            pn=(r*(j-1))+p;
            suma=suma+pn;
        }
        cout << suma <<endl;
    suma=0;
    }
/*for(int i=0;i<q;i++)
{
    for (int j=a[i];j<b[i]+1;j++)
    {
        pn=(r*(j-1))+p;
        suma=suma+pn;
    }
    cout << suma <<endl;
    suma=0;
}*/
    return 0;
}
