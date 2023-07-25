#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter value of a:- ");
    scanf("%d",&a);
    printf("enter value of b:- ");
    scanf("%d",&b);
    printf("enter value of c:- ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("greater number is -%d -",a);
    }
    else if(b>a && b>c){
        printf("greater number is -%d -",b);
    }
    else{
        printf("greater number is -%d ",c);
    }
    return 0;
}