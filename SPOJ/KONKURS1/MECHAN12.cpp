#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main()
{
    long long int dlug,bin,maxbin=0,maxdec=0,bin2;
    for (int i=0;i<1000;i++)
    {
        cin >> bin;
        bin2=bin;
        long long int dec=0;
        long long int bit;
        double exp=0.0;
        while(bin) {
            bit=bin%10;
            bin=bin/10;
            dec=dec+bit*pow(2, exp);
            exp++;
        }
	if(maxdec<dec)
    {
        maxdec=dec;
        maxbin=bin2;
    }
    }
    cout << maxdec << endl << maxbin;
    return 0;
}
