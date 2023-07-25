#include<stdio.h>
int main(){
   int m1,m2,m3,m4,m5,m6,t;
    printf("enter the value of m1:-");
    scanf("%d",&m1);
     printf("enter the value of m2:-");
    scanf("%d",&m2);
     printf("enter the value of m3:-");
    scanf("%d",&m3);
     printf("enter the value of m4:-");
    scanf("%d",&m4);
     printf("enter the value of m5:-");
    scanf("%d",&m5);
     printf("enter the value of m6:- ");
    scanf("%d",&m6);
    t=m1+m2+m3+m4+m5+m6;
    scanf("total is %d",t);
    if(t>350){
        printf("pass");
    }else{
    printf("fail");}
return 0;
}