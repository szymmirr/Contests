#include <iostream>
using namespace std;
int main()
{
    int n,t;
    string kolejka,kolejka2;
    cin>>n>>t>>kolejka;
    for(int j=0;j<t;j++)
    {
        kolejka2=kolejka;
        for(int i=0;i<n;i++)
        {
            if(kolejka[i]=='C'&&kolejka[i+1]=='D')
            {
                kolejka2[i]='D';
                kolejka2[i+1]='C';
            }
        }
        kolejka=kolejka2;
    }
    cout<<kolejka;
    return 0;
}
