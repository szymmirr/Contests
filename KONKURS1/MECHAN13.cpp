#include <iostream>
#include <fstream>
#include <math.h>
#include <sstream>
using namespace std;
string DecToBin(int number)
{
    if ( number == 0 ) return "0";
    if ( number == 1 ) return "1";

    if ( number % 2 == 0 )
        return DecToBin(number / 2) + "0";
    else
        return DecToBin(number / 2) + "1";
}
int main()
{
    long long int dlug,bin,dec=0,bit=0,maxbin=0,maxdec=0,bin2,sumadziewiatek=0,lacznasuma=0;
    //ifstream plik("liczby.txt");
    for (int i=0;i<1000;i++)
    {
        cin >> bin;
        stringstream s;
        s<<bin;
        string s2=s.str();
        dec=0;
        double exp=0.0;
        if(s2.length()==9)
        {
            //cout<<bin<<endl;
            sumadziewiatek+=1;
            while(bin) {
            bit=bin%10;
            bin=bin/10;
            dec=dec+bit*pow(2, exp);
            exp++;
        }
            lacznasuma+=dec;
        }
    }
    cout << sumadziewiatek << endl;
    //cout << DecToBin(sumadziewiatek);
    //cout<<lacznasuma<<endl;

    cout << DecToBin(lacznasuma);
    //cout << maxdec << endl << maxbin;

    return 0;
}
