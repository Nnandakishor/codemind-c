#include<stdio.h>
int main()
{
    int n,sum=0,arr[n];
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
           scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}