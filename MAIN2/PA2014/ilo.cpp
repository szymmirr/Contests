#include<iostream>
using namespace std;
//facebook.com/armiapolcyn
int main()
{
    int a=0,b=1,c=1,t,liczba,d=0,e=1,f=1,suicz=0;
    cin>>t;
    //cout<<a<<endl<<b<<endl<<c<<endl;
    for (int k=0;k<t;k++)
    {
        suicz=0;
        a=0,b=1,c=1,d=0,e=1,f=1;
        cin>>liczba;
        if(liczba==0)
        {
            cout<<"TAK"<<endl;
            suicz=1;
        }
        for(int i=0;i<liczba;i++)
        {
            for(int j=0;j<liczba;j++)
            {
                //cout<<c<<endl;
                if(c*f==liczba)
                {
                    cout<<"TAK"<<endl;
                    suicz=1;
                }
                if(suicz==1)break;
                d=e;
                e=f;
                f=d+e;
            }
            if(suicz==1)break;
            a=b;
            b=c;
            c=a+b;
            d=0,e=1,f=1;
        }
        if(suicz==0)
        {
            cout<<"NIE"<<endl;
        }
    }
    return 0;
}
