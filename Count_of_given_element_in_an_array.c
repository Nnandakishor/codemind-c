#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n],count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }
    printf("%d",count);
}
        