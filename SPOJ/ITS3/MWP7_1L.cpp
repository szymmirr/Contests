#include <iostream>
using namespace std;
int main()
{
    int n,h,w,r,wprawo=0,wdol=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        wprawo=0,wdol=0;
        cin>>h>>w>>r;
        for(int j=0;j<w;j+=r)
        {
            wprawo+=1;
        }
        for(int k=0;k<h;k+=r)
        {
            wdol+=1;
        }
        cout<<wprawo*wdol<<endl;
    }
    return 0;
}
