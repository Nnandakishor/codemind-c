#include<stdio.h>
int main()
{
    int x,sum=0;
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
            sum += a[i];
        }
    }
    printf("%d",sum);
    return 0;
}