#include<stdio.h>
int main()
{
	int a[3],b[3],i,c=0,p=0;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<3;i++)
	{
		if(a[i]>b[i])
		{
			c++;
		}
	     if(a[i]<b[i])
	    {
	        p++;
	    }
    }
    printf("%d %d",c,p);    
}