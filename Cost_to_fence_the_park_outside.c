#include<stdio.h>
int main()
{
    int l,b,w,c,s,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    s=(l+2*w)*(b+2*w)-l*b;
    a=s*c;
    printf("%d",a);

}