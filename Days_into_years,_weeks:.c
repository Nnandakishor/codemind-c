#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d",&x);
    y=x/365;
    z=(x-(y*365))/7;
    printf("%d
%d",y,z);
    
}