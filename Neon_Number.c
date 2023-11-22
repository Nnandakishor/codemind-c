#include<stdio.h>
int main()
{
    int n,r,k,m=0;
    scanf("%d",&n);
    r=n*n;
    while(r>0)
    {
        k=r%10;
        m+=k;
        r=r/10;
    }
    if(m==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}