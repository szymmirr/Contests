#include <iostream>
using namespace std;
//ARMIA POLCYN
//PROSZE SZANOWAC
//I ZROBIC SIZECONA
int main()
{
    int tab[1000];
    //string tabstr[1000]={};
    int ile=0,sumaparzystych=0,makssumacyfr=0,minsumacyfr=999,makskurde=0,minkurde=0;
    for (int i=0;i<1000;i++)
    {
        cin >> tab[i];
        int liczba=0,dziel=0;
        liczba=tab[i];
            int suma=0;
            int j=0;
            for(ile=1;ile*10<liczba;ile*=10);
            int ile2=0;
            int tab2[100];
            int sumacyfr=0;
                do
                {
                    int cyfra=liczba/ile;
                    //cout<<cyfra<<endl;
                    tab2[j]=cyfra;
                    sumacyfr+=cyfra;
                    j=j+1;
                    suma=suma+cyfra;
                    liczba=liczba-cyfra*ile;
                    ile/=10;
                }
                while(ile>0);
                int czeker=0,najwiekszacyfra=tab2[0];
            for (int m=1;m<ile2;m++)
            {
                if(najwiekszacyfra<tab2[m])
                {

                }
                if(najwiekszacyfra>=tab2[m])
                {
                    czeker=1;
                    break;
                }
                najwiekszacyfra=tab2[m];
            }
            if (czeker==0)
            {
                for (int k=0;k<ile2;k++)
                {
                    //cout<<tab2[k];
                }
                //cout << endl;
            }
        if(makssumacyfr<sumacyfr)
        {
            makssumacyfr=sumacyfr;
            makskurde=tab[i];
        }
        if(minsumacyfr>sumacyfr)
        {
            minsumacyfr=sumacyfr;
            minkurde=tab[i];
        }
        /*for (int k=0;k<ile2;k++)
        {
            cout<<tab2[k];
        }*/

        if(tab2[ile2-1]%2==0)
        {
            sumaparzystych+=1;
        }
    }
    //cout << endl << sumaparzystych << endl << endl << minkurde << endl << makskurde;
    cout << makskurde << endl << minkurde;
    return 0;
}
