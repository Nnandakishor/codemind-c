#include<stdio.h>
int main()
{
    int a,b,i,x,count=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        x=i%6;
        if(x==0)
        {
            count++;
        }
    }
    printf("%d",count);
}