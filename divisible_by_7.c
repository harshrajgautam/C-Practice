#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:-");
    scanf("%d",&n);
    if(n%7==0){
        printf("divisible by 7");
    }
    else
    printf("not divisible by 7");
    return 0;
}