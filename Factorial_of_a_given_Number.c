#include<stdio.h>
int main()
{
    int n,i,x=1;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        x *= i;
    }
    printf("%d",x);
}