#include<stdio.h>
int main()
{
    int a,b,sum=0,n;
    scanf("%d",&a);
    n=a;
    while(a>0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    if(n%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}