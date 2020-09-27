#include <iostream>
using namespace std;

int main()
{
    string slowo;
    for(;getline(cin,slowo);)
    {
        for(int i=0;i<slowo.size();i++)
        {
            if(slowo[i]==' ')cout<<"/";
            if(slowo[i]=='A')cout<<".-";
            if(slowo[i]=='B')cout<<"-...";
            if(slowo[i]=='C')cout<<"-.-.";
            if(slowo[i]=='D')cout<<"-..";
            if(slowo[i]=='E')cout<<".";
            if(slowo[i]=='F')cout<<".-..";
            if(slowo[i]=='G')cout<<"--.";
            if(slowo[i]=='H')cout<<"....";
            if(slowo[i]=='I')cout<<"..";
            if(slowo[i]=='J')cout<<".---";
            if(slowo[i]=='K')cout<<"-.-";
            if(slowo[i]=='L')cout<<"..-.";
            if(slowo[i]=='M')cout<<"--";
            if(slowo[i]=='N')cout<<"-.";
            if(slowo[i]=='O')cout<<"---";
            if(slowo[i]=='P')cout<<".--.";
            if(slowo[i]=='Q')cout<<"--.-";
            if(slowo[i]=='R')cout<<".-.";
            if(slowo[i]=='S')cout<<"...";
            if(slowo[i]=='T')cout<<"-";
            if(slowo[i]=='U')cout<<"..-";
            if(slowo[i]=='V')cout<<"...-";
            if(slowo[i]=='W')cout<<".--";
            if(slowo[i]=='X')cout<<"-..-";
            if(slowo[i]=='Y')cout<<"-.--";
            if(slowo[i]=='Z')cout<<"--..";
            if(slowo[i]!=' ')cout<<"/";
        }
        cout<<endl;
    }
    return 0;
}
