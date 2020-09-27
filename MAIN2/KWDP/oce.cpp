#include <iostream>

using namespace std;

int main()
{
    int n,ocena,je=0,dw=0,trz=0,cz=0,pi=0,sz=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin >> ocena;
        if(ocena==1)je+=1;
        if(ocena==2)dw+=1;
        if(ocena==3)trz+=1;
        if(ocena==4)cz+=1;
        if(ocena==5)pi+=1;
        if(ocena==6)sz+=1;
    }
    cout<<je<<" "<<dw<<" "<<trz<<" "<<cz<<" "<<pi<<" "<<sz;
    return 0;
}
