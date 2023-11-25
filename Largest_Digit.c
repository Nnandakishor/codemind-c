#include<stdio.h>
int main()
{
    int number,reminder,largest=0;
    scanf("%d",&number);
    while(number>0)
    {
        reminder=number%10;
        if(largest<=reminder)
        {
            largest=reminder;
        }
        number=number/10;
    }
    printf("%d",largest);
    
}