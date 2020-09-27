#include <iostream>
using namespace std;
int main()
{
    string dpp;
    cin>>dpp;
    long int tab[26]={};
    int Qaktywne=0,Waktywne=0,Eaktywne=0,Raktywne=0,Taktywne=0,Yaktywne=0,Uaktywne=0,Iaktywne=0,Oaktywne=0,Paktywne=0,Aaktywne=0,Saktywne=0,Daktywne=0,Faktywne=0,Gaktywne=0,Haktywne=0,Jaktywne=0,Kaktywne=0,Laktywne=0,Zaktywne=0,Xaktywne=0,Caktywne=0,Vaktywne=0,Baktywne=0,Naktywne=0,Maktywne=0;
    for(int i=0;i<dpp.size();i++)
    {
        int indeks1=0,indeks2=0;
        if(dpp[i]=='='&&dpp[i+1]=='0')
        {
            if(dpp[i-1]=='Q'){Qaktywne=1;tab[0]=0;}if(dpp[i-1]=='W'){Waktywne=1;tab[1]=0;}if(dpp[i-1]=='E'){Eaktywne=1;tab[2]=0;}if(dpp[i-1]=='R'){Raktywne=1;tab[3]=0;}
            if(dpp[i-1]=='T'){Taktywne=1;tab[4]=0;}if(dpp[i-1]=='Y'){Yaktywne=1;tab[5]=0;}if(dpp[i-1]=='U'){Uaktywne=1;tab[6]=0;}if(dpp[i-1]=='I'){Iaktywne=1;tab[7]=0;}
            if(dpp[i-1]=='O'){Oaktywne=1;tab[8]=0;}if(dpp[i-1]=='P'){Paktywne=1;tab[9]=0;}if(dpp[i-1]=='A'){Aaktywne=1;tab[10]=0;}if(dpp[i-1]=='S'){Saktywne=1;tab[11]=0;}
            if(dpp[i-1]=='D'){Daktywne=1;tab[12]=0;}if(dpp[i-1]=='F'){Faktywne=1;tab[13]=0;}if(dpp[i-1]=='G'){Gaktywne=1;tab[14]=0;}if(dpp[i-1]=='H'){Haktywne=1;tab[15]=0;}
            if(dpp[i-1]=='J'){Jaktywne=1;tab[16]=0;}if(dpp[i-1]=='K'){Kaktywne=1;tab[17]=0;}if(dpp[i-1]=='L'){Laktywne=1;tab[18]=0;}if(dpp[i-1]=='Z'){Zaktywne=1;tab[19]=0;}
            if(dpp[i-1]=='X'){Xaktywne=1;tab[20]=0;}if(dpp[i-1]=='C'){Caktywne=1;tab[21]=0;}if(dpp[i-1]=='V'){Vaktywne=1;tab[22]=0;}if(dpp[i-1]=='B'){Baktywne=1;tab[23]=0;}
            if(dpp[i-1]=='N'){Naktywne=1;tab[24]=0;}if(dpp[i-1]=='M'){Maktywne=1;tab[25]=0;}
        }
        if(dpp[i]=='+'&&dpp[i+1]=='+')
        {
            if(dpp[i-1]=='Q'){Qaktywne=1;tab[0]+=1;}if(dpp[i-1]=='W'){Waktywne=1;tab[1]+=1;}if(dpp[i-1]=='E'){Eaktywne=1;tab[2]+=1;}if(dpp[i-1]=='R'){Raktywne=1;tab[3]+=1;}
            if(dpp[i-1]=='T'){Taktywne=1;tab[4]+=1;}if(dpp[i-1]=='Y'){Yaktywne=1;tab[5]+=1;}if(dpp[i-1]=='U'){Uaktywne=1;tab[6]+=1;}if(dpp[i-1]=='I'){Iaktywne=1;tab[7]+=1;}
            if(dpp[i-1]=='O'){Oaktywne=1;tab[8]+=1;}if(dpp[i-1]=='P'){Paktywne=1;tab[9]+=1;}if(dpp[i-1]=='A'){Aaktywne=1;tab[10]+=1;}if(dpp[i-1]=='S'){Saktywne=1;tab[11]+=1;}
            if(dpp[i-1]=='D'){Daktywne=1;tab[12]+=1;}if(dpp[i-1]=='F'){Faktywne=1;tab[13]+=1;}if(dpp[i-1]=='G'){Gaktywne=1;tab[14]+=1;}if(dpp[i-1]=='H'){Haktywne=1;tab[15]+=1;}
            if(dpp[i-1]=='J'){Jaktywne=1;tab[16]+=1;}if(dpp[i-1]=='K'){Kaktywne=1;tab[17]+=1;}if(dpp[i-1]=='L'){Laktywne=1;tab[18]+=1;}if(dpp[i-1]=='Z'){Zaktywne=1;tab[19]+=1;}
            if(dpp[i-1]=='X'){Xaktywne=1;tab[20]+=1;}if(dpp[i-1]=='C'){Caktywne=1;tab[21]+=1;}if(dpp[i-1]=='V'){Vaktywne=1;tab[22]+=1;}if(dpp[i-1]=='B'){Baktywne=1;tab[23]+=1;}
            if(dpp[i-1]=='N'){Naktywne=1;tab[24]+=1;}if(dpp[i-1]=='M'){Maktywne=1;tab[25]+=1;}
        }
        if(dpp[i]=='<')
        {
            if(dpp[i-1]=='Q'){Qaktywne=1;indeks1=0;}if(dpp[i-1]=='W'){Waktywne=1;indeks1=1;}if(dpp[i-1]=='E'){Eaktywne=1;indeks1=2;}if(dpp[i-1]=='R'){Raktywne=1;indeks1=3;}
            if(dpp[i-1]=='T'){Taktywne=1;indeks1=4;}if(dpp[i-1]=='Y'){Yaktywne=1;indeks1=5;}if(dpp[i-1]=='U'){Uaktywne=1;indeks1=6;}if(dpp[i-1]=='I'){Iaktywne=1;indeks1=7;}
            if(dpp[i-1]=='O'){Oaktywne=1;indeks1=8;}if(dpp[i-1]=='P'){Paktywne=1;indeks1=9;}if(dpp[i-1]=='A'){Aaktywne=1;indeks1=10;}if(dpp[i-1]=='S'){Saktywne=1;indeks1=11;}
            if(dpp[i-1]=='D'){Daktywne=1;indeks1=12;}if(dpp[i-1]=='F'){Faktywne=1;indeks1=13;}if(dpp[i-1]=='G'){Gaktywne=1;indeks1=14;}if(dpp[i-1]=='H'){Haktywne=1;indeks1=15;}
            if(dpp[i-1]=='J'){Jaktywne=1;indeks1=16;}if(dpp[i-1]=='K'){Kaktywne=1;indeks1=17;}if(dpp[i-1]=='L'){Laktywne=1;indeks1=18;}if(dpp[i-1]=='Z'){Zaktywne=1;indeks1=19;}
            if(dpp[i-1]=='X'){Xaktywne=1;indeks1=20;}if(dpp[i-1]=='C'){Caktywne=1;indeks1=21;}if(dpp[i-1]=='V'){Vaktywne=1;indeks1=22;}if(dpp[i-1]=='B'){Baktywne=1;indeks1=23;}
            if(dpp[i-1]=='N'){Naktywne=1;indeks1=24;}if(dpp[i-1]=='M'){Maktywne=1;indeks1=25;}

            if(dpp[i+1]=='Q'){Qaktywne=1;indeks2=0;}if(dpp[i+1]=='W'){Waktywne=1;indeks2=1;}if(dpp[i+1]=='E'){Eaktywne=1;indeks2=2;}if(dpp[i+1]=='R'){Raktywne=1;indeks2=3;}
            if(dpp[i+1]=='T'){Taktywne=1;indeks2=4;}if(dpp[i+1]=='Y'){Yaktywne=1;indeks2=5;}if(dpp[i+1]=='U'){Uaktywne=1;indeks2=6;}if(dpp[i+1]=='I'){Iaktywne=1;indeks2=7;}
            if(dpp[i+1]=='O'){Oaktywne=1;indeks2=8;}if(dpp[i+1]=='P'){Paktywne=1;indeks2=9;}if(dpp[i+1]=='A'){Aaktywne=1;indeks2=10;}if(dpp[i+1]=='S'){Saktywne=1;indeks2=11;}
            if(dpp[i+1]=='D'){Daktywne=1;indeks2=12;}if(dpp[i+1]=='F'){Faktywne=1;indeks2=13;}if(dpp[i+1]=='G'){Gaktywne=1;indeks2=14;}if(dpp[i+1]=='H'){Haktywne=1;indeks2=15;}
            if(dpp[i+1]=='J'){Jaktywne=1;indeks2=16;}if(dpp[i+1]=='K'){Kaktywne=1;indeks2=17;}if(dpp[i+1]=='L'){Laktywne=1;indeks2=18;}if(dpp[i+1]=='Z'){Zaktywne=1;indeks2=19;}
            if(dpp[i+1]=='X'){Xaktywne=1;indeks2=20;}if(dpp[i+1]=='C'){Caktywne=1;indeks2=21;}if(dpp[i+1]=='V'){Vaktywne=1;indeks2=22;}if(dpp[i+1]=='B'){Baktywne=1;indeks2=23;}
            if(dpp[i+1]=='N'){Naktywne=1;indeks2=24;}if(dpp[i+1]=='M'){Maktywne=1;indeks2=25;}

            tab[indeks1]+=tab[indeks2];
        }
    }
    if(Aaktywne==1){while(tab[10]>1000000000){tab[10]-1000000000-1;}cout<<"A="<<tab[10]<<endl;}
    if(Baktywne==1){while(tab[23]>1000000000){tab[23]-1000000000-1;}cout<<"B="<<tab[23]<<endl;}
    if(Caktywne==1){while(tab[21]>1000000000){tab[21]-1000000000-1;}cout<<"C="<<tab[21]<<endl;}
    if(Daktywne==1){while(tab[12]>1000000000){tab[12]-1000000000-1;}cout<<"D="<<tab[12]<<endl;}
    if(Eaktywne==1){while(tab[2]>1000000000){tab[2]-1000000000-1;}cout<<"E="<<tab[2]<<endl;}
    if(Faktywne==1){while(tab[13]>1000000000){tab[13]-1000000000-1;}cout<<"F="<<tab[13]<<endl;}
    if(Gaktywne==1){while(tab[14]>1000000000){tab[14]-1000000000-1;}cout<<"G="<<tab[14]<<endl;}
    if(Haktywne==1){while(tab[15]>1000000000){tab[15]-1000000000-1;}cout<<"H="<<tab[15]<<endl;}
    if(Iaktywne==1){while(tab[7]>1000000000){tab[7]-1000000000-1;}cout<<"I="<<tab[7]<<endl;}
    if(Jaktywne==1){while(tab[16]>1000000000){tab[16]-1000000000-1;}cout<<"J="<<tab[16]<<endl;}
    if(Kaktywne==1){while(tab[17]>1000000000){tab[17]-1000000000-1;}cout<<"K="<<tab[17]<<endl;}
    if(Laktywne==1){while(tab[18]>1000000000){tab[18]-1000000000-1;}cout<<"L="<<tab[18]<<endl;}
    if(Maktywne==1){while(tab[25]>1000000000){tab[25]-1000000000-1;}cout<<"M="<<tab[25]<<endl;}
    if(Naktywne==1){while(tab[24]>1000000000){tab[24]-1000000000-1;}cout<<"N="<<tab[24]<<endl;}
    if(Oaktywne==1){while(tab[8]>1000000000){tab[8]-1000000000-1;}cout<<"O="<<tab[8]<<endl;}
    if(Paktywne==1){while(tab[9]>1000000000){tab[9]-1000000000-1;}cout<<"P="<<tab[9]<<endl;}
    if(Qaktywne==1){while(tab[0]>1000000000){tab[0]-1000000000-1;}cout<<"Q="<<tab[0]<<endl;}
    if(Raktywne==1){while(tab[3]>1000000000){tab[3]-1000000000-1;}cout<<"R="<<tab[3]<<endl;}
    if(Saktywne==1){while(tab[11]>1000000000){tab[11]-1000000000-1;}cout<<"S="<<tab[11]<<endl;}
    if(Taktywne==1){while(tab[4]>1000000000){tab[4]-1000000000-1;}cout<<"T="<<tab[4]<<endl;}
    if(Uaktywne==1){while(tab[6]>1000000000){tab[6]-1000000000-1;}cout<<"U="<<tab[6]<<endl;}
    if(Vaktywne==1){while(tab[22]>1000000000){tab[22]-1000000000-1;}cout<<"V="<<tab[22]<<endl;}
    if(Waktywne==1){while(tab[1]>1000000000){tab[1]-1000000000-1;}cout<<"W="<<tab[1]<<endl;}
    if(Xaktywne==1){while(tab[20]>1000000000){tab[20]-1000000000-1;}cout<<"X="<<tab[20]<<endl;}
    if(Yaktywne==1){while(tab[5]>1000000000){tab[5]-1000000000-1;}cout<<"Y="<<tab[5]<<endl;}
    if(Zaktywne==1){while(tab[19]>1000000000){tab[19]-1000000000-1;}cout<<"Z="<<tab[19]<<endl;}
    return 0;
}
