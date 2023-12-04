#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x<150)
    {
        printf("The person is Dwarf.");
    }
    else if((x>150)&&(165>=x))
    {
        printf("The person is average heighted.");
    }
    else if((x>165)&&(195>=x))
    {
        printf("The person is taller.");
    }
    else
    {
        printf("Abnormal height.");
    }
    
}