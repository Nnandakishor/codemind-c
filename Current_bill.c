#include<stdio.h>
int main()
{
    float uc,cu,bill,sc,ta;
    scanf("%f",&uc);
    if(uc<=199)
    {
        bill=uc*1.20;
        sc=100;
        cu=1.20;
        ta=bill+sc;
    }
    else if(uc>199 && uc<400)
    {
        bill=uc*1.50;
        sc=100;
        cu=1.50;
        ta=bill+sc;
    }
    else if(uc>=400 && uc<600)
    {
        bill=uc*1.80;
        sc=bill*0.15;
        cu=1.80;
        ta=bill+sc;
    }
    else if (uc>=600)
    {
        bill=uc*2.00;
        sc=bill*0.15;
        cu=2.00;
        ta=bill+sc;
    }
    printf("%.2f",ta);
}