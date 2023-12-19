#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int i,arr[n],flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}