#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    string w1,w2,w3;
    unsigned long long suma=0;
    cin>>w1>>w2>>w3;
    for (unsigned long long i=0;i<w1.size();i++)
    {
        if(w1[i]!=w2[i])
        {
            suma=suma+1;
        }
        if(w1[i]!=w3[i])
        {
            suma=suma+1;
        }
        if(w2[i]!=w3[i]&&w1[i]!=w2[i]&&w1[i]!=w3[i])
        {
            suma=suma-1;
        }
    }
    cout << suma;
    return 0;
}
