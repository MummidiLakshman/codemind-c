#include<stdio.h>
int main()
{
    int i,a,b,c=0,d;
    scanf("%d%d",&a,&d);
    while(a!=0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    printf("%d",c);
}