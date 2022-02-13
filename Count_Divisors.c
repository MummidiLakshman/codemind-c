#include<stdio.h>
int main()
{
    int a,i,b,c,count=0;
    scanf("%d%d%d",&a,&b,&c);
    for(i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            count++;
        }
    }
    printf("%d",count);
}