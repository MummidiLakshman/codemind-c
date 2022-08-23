#include<stdio.h>
#include<math.h>
int prime(int i)
{
    int j;
    if(j==1)
    {
        return 0;
    }
    for(j=2;j*j<i+1;j++)
    {
        if(i%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,s,d,j,f,g;
    scanf("%d",&n);
    for(i=n;i<n+10000;i++)
    {
        if(prime(i))
        {
            s=i;
            break;
        }
    }
    for(j=n-1;j>=0;j--)
    {
        if(prime(j))
        {
            d=j;
            break;
        }
    }
    f=abs(n-s);
    g=abs(n-d);
    if(f>=g)
    {
        printf("%d",g);
    }
    else
    {
        printf("%d",f);
    }
}