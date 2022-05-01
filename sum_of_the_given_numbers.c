#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&arr1[i],&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
         printf("%d
",arr1[i]+arr2[i]);
    }
}