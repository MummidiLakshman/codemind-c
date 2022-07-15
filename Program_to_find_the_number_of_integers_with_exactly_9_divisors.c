#include<stdio.h>
int di(int a)
{
    int i,c=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c+=1;
        }
    }
    if(c==9)
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
    int n,c=0,d=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(di(i))
        {
         d+=1;
         printf("%d ",i);
        }
    }
    printf("
");
    printf("Total=%d",d);
}