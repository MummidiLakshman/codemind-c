#include<stdio.h>
int main()
{
    int a,b,s=0,e=0,f=0,w,x=0;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        s=s+b;
        a=a/10;
    }
    if(s<10)
    {
        printf("%d",s);
    }
    else 
    {
        while(s!=0)
        {
           e=s%10;
           f=f+e;
           s=s/10;
        }
        if(f<10)
        {
            printf("%d",f);
        }
        else
        {
            while(f!=0)
            {
                w=f%10;
                x=x+w;
                f=f/10;
            }
            printf("%d",x);
        }
    }
}