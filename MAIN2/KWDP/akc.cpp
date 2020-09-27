#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,q,srodek=0,czeker=0;
    cin >> n;
    int nn[n];
    for (int i=0;i<n;i++)
    {
        //cin >> nn[i];
        scanf("%d",&nn[i]);
    }
    cin >> q;
    int x[q];
    for (int i=0;i<q;i++)
    {
        //cin >> x[i];
        scanf("%d",&x[i]);
    }
    int poczatek=0;
    for (int i=0;i<q;i++)
    {
        int suma=0;
    for (int j=0;j<n;j++)
        {
            if (x[i]==nn[poczatek])
            {
                suma = suma+1;
            }

            if(x[i]<nn[poczatek])
            {
                //cout << suma << endl;
                printf("%d\n",suma);
                break;
            }
            else
            {
                poczatek=poczatek+1;
            }
        }
    }
    return 0;
}
