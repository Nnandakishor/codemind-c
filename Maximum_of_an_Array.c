#include<stdio.h>
int main(){
    int x,max;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
     max=a[0];
    for(int i=0;i<x;i++)
    {
        if(a[i]>max)
        {
             max=a[i];
        }
    }
    printf("%d",max);
}