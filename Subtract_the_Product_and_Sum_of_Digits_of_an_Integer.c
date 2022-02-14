#include<stdio.h>
int main()
{
    int a,b,sum=0,pro=1,res;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        sum=sum+b;
        pro=pro*b;
        a=a/10;
    }
    res=pro-sum;
    printf("%d",res);
}