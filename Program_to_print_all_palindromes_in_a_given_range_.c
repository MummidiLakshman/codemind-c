#include<stdio.h>
int pal(int i)
{
    int d=0,s,f;
    f=i;
    while(i>0)
    {
        s=i%10;
        d=d*10+s;
        i=i/10;
    }
    if(f==d)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int m,n,i,c=0;
    scanf("%d
",&m);
    scanf("%d",&n);
    for(i=m;i<n+1;i++)
    {
        if(pal(i))
        {
             printf("%d ",i);
        }
    }
}