#include<stdio.h>
int main(){
    int x,max,min,count=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
     max=a[0];
        min=a[0];
    for(int i=0;i<x;i++){
       
        if(a[i]>max){
        max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    int n=(max+min)/2;
   for(int i=0;i<x;i++){
      if(n==a[i])
      count++;
   }
   (count>0?printf("True"):printf("False"));
    return 0;
}