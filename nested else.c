#include<stdio.h>
int main(){
    int number;
    printf("enter number");
    scanf("%d",&number);
    if(number>=0){
    printf("even\n");
    if(number % 2==0)
    printf("positive");
    else
    printf("negative");}
    else{
        printf("negative");
    }
return 0;
}