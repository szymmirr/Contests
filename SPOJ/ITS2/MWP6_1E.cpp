#include <iostream>

using namespace std;

int main()
{
    int k,p,n,r,maks=0,suma=0,myk=0,sumka=0,maksik=0;
    int czektable[100000]={};
    //int * czektable = new int[10000000];
    string stas;
    cin >> k >> p >> n >> r;
    cin >> stas;

    for (int i=0;i<r;i++)
    {
        if(stas[i]=='k'&&k>0)
        {
            k=k-1;
            suma=suma+1;
            myk=1;
            if(suma>maks)
            {
                maks=suma;
            }
        }
        if(myk==1)
        {
            czektable[i]=1;
        }
        else
        {
            czektable[i]=0;
            //czektable[i-1]=0;
        }

        if(stas[i]=='p'&&p>0)
        {
            p=p-1;
            suma=suma+1;
            myk=1;
            if(suma>maks)
            {
                maks=suma;
            }
        }

        if(myk==1)
        {
            czektable[i]=1;
        }
        else
        {
            czektable[i]=0;
            //czektable[i-1]=0;
        }

        if(stas[i]=='n'&&n>0)
        {
            n=n-1;
            suma=suma+1;
            myk=1;
            if(suma>maks)
            {
                maks=suma;
            }
        }

        if(myk==1)
        {
            czektable[i]=1;
        }
        else
        {
            czektable[i]=0;
            //czektable[i-1]=0;
        }

        myk=0;
    }
    //cout << "maksimum" << maks;
    for (int i=0;i<r;i++)
    {
        if(czektable[i]==1)
        {
            sumka=sumka+1;
            if(sumka>maksik)
            {
                maksik=sumka;
            }
        }
        if(czektable[i]==0)
        {
            sumka=0;
        }
    }
    cout << maksik;
    return 0;
}
