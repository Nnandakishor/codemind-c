#include<stdio.h>
int main()
{
    int n,i,m=0,k=1,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        m+=r;
        k*=r;
        n=n/10;
    }
    if(m==k)
    {
       printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}