#include<stdio.h>
int main()
{
    int x,count=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    int b,c;
    scanf("%d%d",&b,&c);
    for(int i=0;i<x;i++)
    {
        if(a[i]<b || a[i]>c)
        {
             printf("%d ",a[i]);
             count++;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
    return 0;
}