#include <iostream>

using namespace std;

int main()
{
    long pier,drug,trz;
    cin>>pier>>drug>>trz;
    if(pier+drug==trz)
    {
        cout<<pier<<" + "<<drug<<" == "<<trz<<endl;
    }
    if(pier-drug==trz)
    {
        cout<<pier<<" - "<<drug<<" == "<<trz<<endl;
    }
    if(pier*drug==trz)
    {
        cout<<pier<<" * "<<drug<<" == "<<trz<<endl;
    }
    if(drug!=0&&pier/drug==trz)
    {
        cout<<pier<<" / "<<drug<<" == "<<trz<<endl;
    }
    if(drug!=0&&pier%drug==trz)
    {
        cout<<pier<<" % "<<drug<<" == "<<trz<<endl;
    }
    return 0;
}
