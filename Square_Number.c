#include<stdio.h>
#include<math.h>
int square(int n)
{
    int a;
    a=sqrt(n);
    if(a*a==n)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(square(n))
    {
    printf("True");
    }
    else
    {
        printf("False");
    }
}