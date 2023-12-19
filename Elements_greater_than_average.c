#include<stdio.h>
int main()
{
    int n,count=0,sum=0,avg;
    scanf("%d",&n);
    int a;
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=avg)
        {
            count++;
        }
    }
    printf("%d",count);
}