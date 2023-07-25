#include<stdio.h>
int main(){
    int marks;
    printf("enter marks (0-100)");
    scanf("%d",&marks);
    if(marks >30 && marks==100){
    printf("pass");}
    else if(marks>100){
        printf("wrong number"); 
    }
    else{
        printf("fail");
    }
return 0;
}