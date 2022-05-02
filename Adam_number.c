#include<stdio.h>
int main()
{
    int n,s,a,d=0,r,f,c=0;
    scanf("%d",&n);
    s=n*n;
    while(n>0)
    {
        r=n%10;
        d=d*10+r;
        n=n/10;
    }
    a=d*d;
    while(a>0)
    {
        f=a%10;
        c=c*10+f;
        a=a/10;
    }
    if(c==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}