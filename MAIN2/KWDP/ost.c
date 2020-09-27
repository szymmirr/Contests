#include <stdio.h>
int main(void)
{
    int n,s=1,i=1;
    scanf("%d",&n);
    for(;i<=n;i++)
    {
        if(s==1)s=2;
        else if(s==2)s=4;
        else if(s==4)s=8;
        else if(s==8)s=6;
        else if(s==6)s=2;
    }
    printf("%d",s);
    return 0;
}