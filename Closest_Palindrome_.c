#include<stdio.h>
#include<math.h>
int pal(int n)
{
    int s,i,j,k=0;
    s=n;
    while(n!=0)
    {
        j=n%10;
        k=k*10+j;
        n=n/10;
    }
    if(s==k)
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
    int n,i,j,h,p;
    scanf("%d",&n);
    //printf("%d",n);
    for(i=n-1;i>=0;i--)
    {
        if(pal(i))
        {
           p=i;
           //printf("%d ",p);
           break;
        }
    }
    for(j=n+1;j<n+10000;j++)
    {
        if(pal(j))
        {
            h=j;
           // printf("%d ",h);
            break;
        }
    }
    if(abs(n-p)<abs(n-h))
    {
        printf("%d",p);
    }
    else if(abs(n-p)==abs(n-h))
    {
        printf("%d %d",p,h);
    }
    else
    {
        printf("%d",h);
    }
}
