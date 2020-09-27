#include <iostream>

using namespace std;

int main()
{
    int a,b,przes=0;
    //int * p1 = new int[1000001];
    //int * p2 = new int[1000001];
    int p1[1000];
    int p2[1000];
    cin >> a >> b;
    for (int i=0;i<a;i++)
    {
        cin >> p1[i];
    }
    for (int i=0;i<b;i++)
    {
        cin >> p2[i];
    }


    for (int i=0;i<b;i++)
    {
        for (int j=0;j<a;j++)
        {
            if(p2[j]>p1[i])
            {
                if(j>a/2||j==a/2)
                {
                    if(a%2==0)
                    {
                        przes=przes+((a/2)-j);
                        //a=a+przes;
                    }
                    if(a%2!=0)
                    {
                        przes=przes+((a/2)-j);
                        //a=a+przes;
                    }

                }
                if(j<a/2)
                {
                    przes=przes+j+1;
                    //a=a+przes;
                }
            }
        }
    }
    cout << przes;
    return 0;
}
