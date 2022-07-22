#include<stdio.h>
#include<math.h>
int sq(int b)
{
    int a;
    a=sqrt(b);
    if(a*a==b)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,i,s,d=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        s=sq(arr[i]);
        if(sq(arr[i]))
        {
            d+=arr[i];
        }
    }
    printf("%d",d);
}