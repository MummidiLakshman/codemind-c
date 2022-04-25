#include<stdio.h>
int palindrome(int a)
{
    int s,rev=0;
    while(a!=0)
    {
        s=a%10;
        rev=rev*10+s;
        a=a/10;
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,r;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        r=palindrome(arr[i]);
    if(arr[i]==r)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
}