#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=2;i<n+2;i++)
    {
        for(j=i-1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}