#include<stdio.h>
int main()
{
    int a,b,p=0,s;
    scanf("%d",&a);
    s=a;
    while(a>0)
    {
        b=a%10;
        p=p*10+b;
        a=a/10;
    }
    if(s==p)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}