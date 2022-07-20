#include<stdio.h>
#include<math.h>
int main()
{
    char str[100],s;
    int i,n,m;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        n=int(str[i])-48;
        //printf("%d",n);
        if(n%2!=0)
        {
            m=pow(n,2);
            printf("%d",m);
        }
    }
}