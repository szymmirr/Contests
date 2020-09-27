#include <iostream>
using namespace std;

int main()
{
    int n,pier,drug;
    cin >> n;
    int tabliczb[n];
    for (int i=0;i<n;i++)
    {
        cin>>tabliczb[i];
    }

    pier=tabliczb[0];
    for (int i=1;i<n;i++)
    {
        drug=tabliczb[i];
        while(pier != drug)
        if(pier > drug) pier -= drug;
        else drug -= pier;
    }
    cout << pier;
    return 0;
}
