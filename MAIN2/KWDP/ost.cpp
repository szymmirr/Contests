#include <iostream>
using namespace std;
int main()
{
    int n,s=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(s==1)s=2;
        else if(s==2)s=4;
        else if(s==4)s=8;
        else if(s==8)s=6;
        else if(s==6)s=2;
    }
    cout<<s;
    return 0;
}
