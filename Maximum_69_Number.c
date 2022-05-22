#include<stdio.h>
int main()
{
    int n,s,d=0,g=0,f,k=0;
    scanf("%d",&n);
    while(n>0)
    {
        s=n%10;
        d=d*10+s;
        n=n/10;
    }
    while(d>0)
    {
        f=d%10;
        if(f==6 && k==0)
        {
            f=9;
            k+=1;
        }
        g=g*10+f;
        d=d/10;
    }
    printf("%d",g);
}