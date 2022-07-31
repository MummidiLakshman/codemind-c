#include<stdio.h>
#include<math.h>
int prime(int i)
{
    int j;
    if(i==1)
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
    int m,n,i,c=0;
    scanf("%d
",&m);
    scanf("%d",&n);
    for(i=m;i<n+1;i++)
    {
        if(prime(i))
        {
             c+=1;
        }
    }
    printf("%d",c);
}