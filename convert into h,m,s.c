#include<stdio.h>
int main(){
    int h,m,s,sec;
    printf("enter sec");
    scanf("%d",&s);
    h=sec/3600;
    m=(sec-(3600/h))/60;
    printf("%d%d%d",h,m,s);
   return 0;
}