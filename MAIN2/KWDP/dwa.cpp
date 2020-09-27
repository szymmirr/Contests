#include <iostream>
using namespace std;
int main()
{
    int n,m,sumeczka=0,minsumka=100001,weszlem=0,biere,he,wlasnietam;
    cin >> n >> m;
    int tab[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> tab[i][j];
            he=tab[i][j];

            if(i==0&&j==3)
        {
            wlasnietam=tab[i][j];
        }
        }
    }
//cout<<tab[0][0]<<tab[0][1]<<tab[0][2]<<tab[0][3]<<endl<<tab[1][0]<<tab[1][1]<<tab[1][2]<<tab[1][3]<<endl<<tab[2][0]<<tab[2][1]<<tab[2][2]<<tab[2][3];
    for (int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            sumeczka=0;
            for(int k=0;k<m;k++)
            {
                if(i==j)
                {
                    break;
                }
                if(i!=j)
                {
                    if(tab[i][k]>tab[j][k])
                    {
                        biere=tab[j][k];
                        sumeczka+=tab[j][k];
                    }
                    else
                    {
                        biere=tab[i][k];
                        sumeczka+=tab[i][k];
                    }
                    weszlem=1;
                }

            }
            if(minsumka>sumeczka&&weszlem==1&&sumeczka!=0)
                {
                    minsumka=sumeczka;
                }

        }
    }
    cout<<minsumka;
    return 0;
}