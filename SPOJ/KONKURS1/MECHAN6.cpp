#include <iostream>
#include <fstream>
#include <cstdlib>
#include <math.h>
#include <sstream>
using namespace std;
int main()
{
    ifstream plik("dane.txt");
    ifstream plik2("dane.txt");
    int tab[5000];
    string tabdziesietna[5000];
    string tab2[5000];
    string tabreverse[5000]={};
    int sumapieriost=0;
    int sumapieriost2=0;
    int sumaczekerow=0;
    for(int i=0;i<5000;i++)
    {
        cin>>tab2[i];
        //plik>>tab[i];
        //cout << tab[i] << endl;
        string liczba=tab2[i];
        int dlug=liczba.length()-1;
        if(liczba[0]==liczba[dlug])
        {
            sumapieriost=sumapieriost+1;
        }
    }
//cout << endl << sumapieriost<<endl<<endl<<endl<<endl<<endl;
    //sumaczekerow=-1;
    /*for(int i=0;i<5000;i++)
    {
        int odwrot=tab2[i].length()-1;
        for(int j=0;j<tab2[i].length();j++)
        {
            tabreverse[i][j]=tab2[i][odwrot];
            //cout<<tabreverse[i][j];
            odwrot=odwrot-1;
        }
    }*/

    for(int i=0;i<5000;i++)
    {
        int wynikpotegowania=0;
        int lyczba2=0;
        string stryng;
            if(tab2[i].length()==7)
            {
                //string lyczba = tabreverse[0];
                    stryng=tab2[i][6];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*1;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][5];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*8;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][4];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*64;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][3];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*512;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][2];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*4096;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][1];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*32768;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][0];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*262144;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    ostringstream ss;
                    ss<<wynikpotegowania;
                    tabdziesietna[i]=ss.str();
                //cout << endl << tabdziesietna[i];
                //cout << endl << wynikpotegowania;
                //cout << endl << tabdziesietna[i];
            }
            if(tab2[i].length()==6)
            {
                //string lyczba = tabreverse[0];
                    stryng=tab2[i][5];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*1;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][4];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*8;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][3];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*64;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][2];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*512;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][1];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*4096;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][0];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*32768;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    ostringstream ss;
                    ss<<wynikpotegowania;
                    tabdziesietna[i]=ss.str();
                //cout << endl << tabdziesietna[i];
                //cout << endl << wynikpotegowania;
                //cout << endl << tabdziesietna[i];
            }
            if(tab2[i].length()==5)
            {
                //string lyczba = tabreverse[0];
                    stryng=tab2[i][4];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*1;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][3];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*8;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][2];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*64;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][1];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*512;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][0];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*4096;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    ostringstream ss;
                    ss<<wynikpotegowania;
                    tabdziesietna[i]=ss.str();
                //cout << endl << tabdziesietna[i];
                //cout << endl << wynikpotegowania;
                //cout << endl << tabdziesietna[i];
            }
            if(tab2[i].length()==4)
            {
                //string lyczba = tabreverse[0];
                    stryng=tab2[i][3];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*1;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][2];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*8;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][1];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*64;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][0];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*512;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    ostringstream ss;
                    ss<<wynikpotegowania;
                    tabdziesietna[i]=ss.str();
                //cout << endl << tabdziesietna[i];
                //cout << endl << wynikpotegowania;
                //cout << endl << tabdziesietna[i];
            }
            if(tab2[i].length()==3)
            {
                //string lyczba = tabreverse[0];
                    stryng=tab2[i][2];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*1;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][1];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*8;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][0];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*64;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    ostringstream ss;
                    ss<<wynikpotegowania;
                    tabdziesietna[i]=ss.str();
                //cout << endl << tabdziesietna[i];
                //cout << endl << wynikpotegowania;
                //cout << endl << tabdziesietna[i];
            }
            if(tab2[i].length()==2)
            {
                //string lyczba = tabreverse[0];
                    stryng=tab2[i][1];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*1;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    stryng=tab2[i][0];
                    lyczba2 = atoi(stryng.c_str());
                    lyczba2=lyczba2*8;
                    wynikpotegowania=wynikpotegowania+lyczba2;

                    ostringstream ss;
                    ss<<wynikpotegowania;
                    tabdziesietna[i]=ss.str();
                //cout << endl << tabdziesietna[i];
                //cout << endl << wynikpotegowania;
                //cout << endl << tabdziesietna[i];
            }
    }

    for(int i=0;i<5000;i++)
    {
        //plik2>>tab2[i];
        //plik>>tab[i];
        //cout << tab[i] << endl;
        string liczba=tabdziesietna[i];
        int dlug=liczba.length()-1;
        if(liczba[0]==liczba[dlug])
        {
            sumapieriost2=sumapieriost2+1;
        }
    }
    //cout << sumapieriost<<endl<<endl;
    //cout << sumapieriost2<<endl<<endl;
    /*for(int i=0;i<5000;i++)
    {
        for (int j=tab[i].length();j>0;j--) // to je dobre chyba...all
        {
            int sumka=0;
            mnoznik=8;
            if (j==)
            sumka=tab[i][j];
        }
    }*/
int maksimum=0;
int minimum=9999999;
    for(int i=0;i<5000;i++)
    {
        int maks=0;
        int czeker=0;
        int lyczba2=0;
        int lyczba3=0;

        string stryng;
        stryng=tab2[i][0];

        maks = atoi(stryng.c_str());
        //maks=
        //maks2=tab2[i][0];
        for(int j=0;j<tab2[i].length();j++)
        {
            //plik2>>tab2[i];
            //plik>>tab[i];
            //cout << tab[i] << endl;
            string liczba=tab2[i];
            int dlug=liczba.length()-1;
            //
            stryng=tab2[i][j];
            lyczba2 = atoi(stryng.c_str());
            //
            if(maks>lyczba2)
            {
                czeker=1;
                break;
            }
            maks=lyczba2;
        }
        if(czeker==0)
        {
            stryng=tab2[i];
            lyczba2 = atoi(stryng.c_str());
            if (maksimum<lyczba2)
            {
                maksimum=lyczba2;
            }
            stryng=tab2[i];
            lyczba2 = atoi(stryng.c_str());
            if (minimum>lyczba2)
            {
                minimum=lyczba2;
            }
            sumaczekerow=sumaczekerow+1;
        }

    }
    cout<<sumaczekerow;
    //cout<<endl<<"maks: "<< maksimum;
    //cout<<endl<<"min: "<< minimum;

    return 0;
}

