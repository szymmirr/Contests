#include <iostream>

using namespace std;

int main()
{
    int n,npoprzednia=0,dlugosc=0,maksdlugosc=0,tab[999]={},ostindeks=0,poprawa=0,ostatniawartosc=0;
    for(int i=0;cin>>tab[i];i++){}
    for(int i=1;i<999;i++)
    {
        if(tab[i]>tab[i-1])
        {
            dlugosc+=1;
        }
        if(dlugosc>maksdlugosc)
        {
            maksdlugosc=dlugosc;
            ostatniawartosc=tab[i-1];
            ostindeks=i;
        }
        if(tab[i]<tab[i-1])
        {
			dlugosc=0;
        }
    }
    poprawa=tab[ostindeks]-tab[ostindeks-maksdlugosc];
    //cout<<ostindeks<<" "<<endl;
    cout<<maksdlugosc+1<<endl<<poprawa;
    return 0;
}
