#include <iostream>

using namespace std;

int main()
{
    int n,x,pierwszy=-1,drugi=-1,czeker=0;
    cin>>n>>x;
    int tab[n];
    for (int i=1;i<=n;i++)
    {
        cin>>tab[i];
    }
    for (int i=1;i<=n;i++)
    {
        if(tab[i]==x&&czeker==0)
        {
            pierwszy=i;
            czeker=1;
        }
        if(tab[i]==x)
        {
            drugi=i;
        }
    }
    cout<<pierwszy<<" "<<drugi;
    return 0;
}
