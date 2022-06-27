#include<stdio.h>
int main()
{
    int i,n,c,a=0,b=1;
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        printf("True");
    }
    else
    {
        a=0;
        b=1;
        c=a+b;
        while(c<n)
        {
            c=a+b;
            a=b;
            b=c;
        }
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}