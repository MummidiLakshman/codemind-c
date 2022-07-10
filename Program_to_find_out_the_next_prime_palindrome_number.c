#include<stdio.h>
int prime(int a)
{
    int i;
    if(a==0)
    {
        return 0;
    }
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int pal(int s)
{
    int k,f,d;
    k=s;
    f=0;
    while(s!=0)
    {
        d=s%10;
        f=f*10+d;
        s=s/10;
    }
    if(f==k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;i<n+10000;i++)
    {
        if(prime(i))
        {
            if(pal(i))
            {
               printf("%d",i);
               break;
            }
        }
    }
}