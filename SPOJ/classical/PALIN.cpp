#include<sstream>
#include<iostream>
#include<string>
using namespace std;
int main()
{
unsigned long long liczba,t,spr,i,j,k,l;
spr=0;
cin >>t;
for(k=0;k<t;k++)
{
    spr=0;
    cin >> liczba;
    for(l=0;spr!=1;l++)
    {
        liczba=liczba+1;

///////////
ostringstream ss;
ss << liczba;
string str = ss.str();
////////////

for (i = 0, j = str.length()-1; i < j; i++, j--)
{
if (str[i] != str[j])
break;
}
if (i < j)
{

}
else
{
    cout << liczba << endl;
    spr=1;
}
}
    }


return 0;
}
