#include<stdio.h>
int main()
{
    int n,m=99999999,c=0;
    scanf("%d",&n);
    int i,j,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<m)
        {
            m=arr[i];
        }
    }
    for(i=m;i>0;i--)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]%i==0)
            {
                c+=1;
            }
        }
        if(c==n)
        {
            printf("%d",i);
            break;
        }
    }
}