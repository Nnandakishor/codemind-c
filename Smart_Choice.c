#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int i=(500-(x*2)+1000-((x+y)*4));
    int j=(500-((x+y)*2)+1000-(y*4));
    if(i>j || i==j )
    {
        printf("%d",i);
    }
    else 
    {
        printf("%d",j);
    }
}