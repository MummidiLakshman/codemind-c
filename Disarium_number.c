#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,c=0,h=0,f,r,t,j;
    scanf("%d",&n);
    j=n;
    t=j;
    while(n!=0)
    {
        s=n%10;
        n=n/10;
        c+=1;
    }
    while(j!=0)
    {
        r=j%10;
        j=j/10;
        f=pow(r,c);
        c-=1;
        h+=f;
    }
    if(h==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}