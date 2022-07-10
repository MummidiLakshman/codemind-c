#include<stdio.h>
int prime(int a)
{
    int i;
    if(a==1)
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
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            if(prime(i))
            {
                c=1;
              printf("%d ",i);
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}