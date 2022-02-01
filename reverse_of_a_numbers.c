#include<stdio.h>
int main()
{
    int a,i,b,p=0;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        p=p*10+b;
        a=a/10;
    }
    printf("%d",p);
}