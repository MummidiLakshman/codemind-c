#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j or i==n+1-j)
            {
                printf("x");
            }
            else
            {
                printf("0");
            }
        }
        printf("
");
    }
}