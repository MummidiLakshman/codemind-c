#include<stdio.h>
#include<math.h>
int main()
{
    char str[100],s;
    int i,n,m=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(int(str[i])>=48 and int(str[i])<=57)
        {
            m+=int(str[i])-48;
        }
    }
    printf("%d",m);
}