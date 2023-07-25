#include<stdio.h>
 //int sum();
 int main(){
    sum();   
 }
 int  sum(){
    int a,b,sum=0;
    printf("enter number");
    scanf("%d",&a);
     printf("enter number");
    scanf("%d",&b);
    sum=a+b;
    printf("sum is %d",sum);
    return 0;
 }