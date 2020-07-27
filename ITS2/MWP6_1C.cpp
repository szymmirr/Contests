#include <iostream>

using namespace std;

//ARMIA POLCYN

int nwd(int a,int b)
{
    int c;
    while(b != 0)
    {
        c=a % b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    int p,q;
    int * monety = new int[1000001];
    int a[1001];
    int b[1001];
    cin >> p >> q;
    for (int i=1;i<p+1;i++)
    {
        cin >> monety[i];
    }
    for (int i=1;i<q+1;i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i=1;i<q+1;i++)
    {
    int tmp = monety[a[i]];
    for(int j=a[i]+1; j<b[i]+1; j++)
    {
        tmp = nwd(monety[j], tmp);
    }
    //cout << tmp;
    for(int j=a[i]; j<b[i]+1; j++)
    {
        cout << monety[j]/tmp << " ";
    }
    cout << endl;
    }


    return 0;
}
