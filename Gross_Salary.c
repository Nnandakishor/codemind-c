#include<stdio.h>
int main()
{
    float bs,da,hra;
    scanf("%f",&bs);
    if(bs<=10000)
    {
        da=(80*bs)/100;
        hra=(20*bs)/100;
        printf("%.2f",bs+da+hra);
    }
     else if(bs<=20000)
    {
        da=(90*bs)/100;
        hra=(25*bs)/100;
        printf("%.2f",bs+da+hra);
    }
    else if(bs>20000)
    {
        da=(95*bs)/100;
        hra=(30*bs)/100;
        printf("%.2f",bs+da+hra);
    }
}