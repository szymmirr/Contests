#include <iostream>
#include <fstream>

using namespace std;

//ARMIA POLCYN MORDERCZE PROGRAMOWANIE

int main()
{
    string wyraz;
    string zadb[999];
    string zadc[999];
    string wyrazy[1000];
    int licz1=0;
    int licz2=0;
    int sumanapisowpierwszych=0;
    for (int j=0;j<1000;j++)
    {
    int razem=0;
    int dlugosc=0;
    int dlugosc2=0;
    int wieksza=1;
    for (int i=0;i<1;i++)
    {
        //getline(cin,wyraz);
        cin>>wyraz;
        wyrazy[j]=wyraz;

    for (int i = 0; i < wyraz.length(); i++)
    {
        char x = wyraz.at(i);
        dlugosc=int(x);
        dlugosc2=dlugosc+dlugosc2;
        if(wyraz[i]<=wyraz[i-1])
        {
            wieksza=0;
        }
    }
    }
//cout <<endl<<dlugosc2;

int jest=1;

for(int i=2;i*i<=dlugosc2;i++)
{
    if(dlugosc2%i==0)
    {
        jest=0;
        break;
    }
}

if (jest==1)
{
    sumanapisowpierwszych=sumanapisowpierwszych+1;
}
if (wieksza==1)
{
    //cout<<wyraz<<endl;
    zadb[licz1]=wyraz;
    licz1=licz1+1;
}

    }

    cout << sumanapisowpierwszych;//<<endl<<endl;
//cout << 112;
    //plik2 << sumanapisowpierwszych<<endl<<endl;
//cout<<endl;
//plik2<<endl;

//plik2.close();
    return 0;
}



