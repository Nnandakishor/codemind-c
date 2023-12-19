#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a;
	
	int i,arr[n],flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
	    if(arr[i]==a)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}