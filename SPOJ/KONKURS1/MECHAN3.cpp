#include <iostream>
using namespace std;
int main()
{
    string liczba;
    int suma=0,sumajeden=0,sumazero=0;
    for(int i=0;i<1000;i++)
    {
        cin >> liczba;
        int zera=0, jedynki=0, jestjeden=0, jestzero=0;
        for (int j=0;j<liczba.length();j++)
        {
            if(liczba[j]=='0')
            {
                jestzero=1;
            }
            if(liczba[j]=='1')
            {
                jestjeden=1;
            }
        }
        if(jestjeden==1&&jestzero==0)
        {
            sumajeden=sumajeden+1;
        }
        else if(jestjeden==0&&jestzero==1)
        {
            sumazero=sumazero+1;
        }
    }
    cout << sumazero << endl << sumajeden;
    return 0;
}
