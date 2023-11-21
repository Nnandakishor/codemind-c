#include<stdio.h>
int main()
{
    int n,i,x;
    scanf("%d",&n);
    for(i=n*2;i>=1;i--)
    {
        x=i%2;
        if(x==0)
        {
            printf("%d ",i);
        }
    }
}