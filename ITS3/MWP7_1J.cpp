#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int tab[9][9],suma=0,i,j,bylem=0,terazmoge=1,pierwszei,pierwszej,drugiei,drugiej;
    string linia;
    for(i=0;i<9;i++)
    {
        cin>>linia;
        suma=0;
        terazmoge=1;
        for(j=0;j<9;j++)
        {
            char cyfra=linia[j];
            tab[i][j]=cyfra-'0';
            suma+=tab[i][j];
        }
        if(suma!=45&&bylem==0)
        {
            pierwszei=i;
            bylem=1;
            terazmoge=0;
        }
        if(suma!=45&&bylem==1&&terazmoge==1)
        {
            drugiei=i;
            bylem=1;
        }
    }
    int bylo1=0,bylo2=0,bylo3=0,bylo4=0,bylo5=0,bylo6=0,bylo7=0,bylo8=0,bylo9=0,winny1,winny2;
    cout<<pierwszei<<" "<<" "<<drugiei<<" "<<endl;
    for(j=0;j<9;j++)
    {
        if(tab[pierwszei][j]==1&&bylo1==1)winny1=j;if(tab[pierwszei][j]==1)bylo1=1;
        if(tab[pierwszei][j]==1&&bylo2==1)winny1=j;if(tab[pierwszei][j]==1)bylo2=1;
        if(tab[pierwszei][j]==1&&bylo3==1)winny1=j;if(tab[pierwszei][j]==1)bylo3=1;
        if(tab[pierwszei][j]==1&&bylo4==1)winny1=j;if(tab[pierwszei][j]==1)bylo4=1;
        if(tab[pierwszei][j]==1&&bylo5==1)winny1=j;if(tab[pierwszei][j]==1)bylo5=1;
        if(tab[pierwszei][j]==1&&bylo6==1)winny1=j;if(tab[pierwszei][j]==1)bylo6=1;
        if(tab[pierwszei][j]==1&&bylo7==1)winny1=j;if(tab[pierwszei][j]==1)bylo7=1;
        if(tab[pierwszei][j]==1&&bylo8==1)winny1=j;if(tab[pierwszei][j]==1)bylo8=1;
        if(tab[pierwszei][j]==1&&bylo9==1)winny1=j;if(tab[pierwszei][j]==1)bylo9=1;
    }
    for(j=0;j<9;j++)
    {
        if(tab[drugiei][j]==1&&bylo1==1)winny2=j;if(tab[drugiei][j]==1)bylo1=1;
        if(tab[drugiei][j]==1&&bylo2==1)winny2=j;if(tab[drugiei][j]==1)bylo2=1;
        if(tab[drugiei][j]==1&&bylo3==1)winny2=j;if(tab[drugiei][j]==1)bylo3=1;
        if(tab[drugiei][j]==1&&bylo4==1)winny2=j;if(tab[drugiei][j]==1)bylo4=1;
        if(tab[drugiei][j]==1&&bylo5==1)winny2=j;if(tab[drugiei][j]==1)bylo5=1;
        if(tab[drugiei][j]==1&&bylo6==1)winny2=j;if(tab[drugiei][j]==1)bylo6=1;
        if(tab[drugiei][j]==1&&bylo7==1)winny2=j;if(tab[drugiei][j]==1)bylo7=1;
        if(tab[drugiei][j]==1&&bylo8==1)winny2=j;if(tab[drugiei][j]==1)bylo8=1;
        if(tab[drugiei][j]==1&&bylo9==1)winny2=j;if(tab[drugiei][j]==1)bylo9=1;
    }
    cout<<"winni"<<winny1<<" " <<winny2<<endl;

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            cout<<tab[i][j];
        }
        cout<<endl;
    }
    return 0;
}
