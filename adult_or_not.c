#include<stdio.h>
#include<math.h>
int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);
    if(age>18){
    printf("%d adult", age);}
    else{
    printf("%d not adult", age);}
    return 0;
}