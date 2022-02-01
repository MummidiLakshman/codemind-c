#include<stdio.h>
int main()
{
    int i,a,k=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
          k++;
        }
    }
    if(k==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
    return 0;
}