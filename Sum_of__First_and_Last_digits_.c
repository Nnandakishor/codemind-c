#include<stdio.h>
int main()
{
    int n,r,x;
    scanf("%d",&n);
    r=n%10;
    n=n/10;
    while(n!=0)
    {
        x=n%10;
        n=n/10;
    }
    printf("%d",x+r);
}