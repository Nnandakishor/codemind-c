#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,x,i;
    scanf("%d",&x);
    c=a+b;
    while(c<x)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(c==x)
    {
        printf("True");
    }
    else 
    {
        printf("False");
    }
}