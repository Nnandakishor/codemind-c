#include<stdio.h>
int main()
{
    int x,a=0,b=1,i,c;
    scanf("%d",&x);
    printf("%d %d",a,b);
    for(i=1;i<=x-2;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
}