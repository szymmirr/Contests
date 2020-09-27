#include <iostream>

using namespace std;

int main()
{
    int a,b,c,maks,boka,bokb;
    cin>>a>>b>>c;
    maks=a;
    boka=b;
    bokb=c;
    if (b>maks)
    {
        maks=b;
        boka=a;
        bokb=c;
    }
    if (c>maks)
    {
        maks=c;
        boka=a;
        bokb=b;
    }
    ///////////////////////
    if(boka+bokb>maks)
    {
        cout << "TAK";
    }
    if(boka+bokb<=maks)
    {
        cout << "NIE";
    }
}
