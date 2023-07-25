#include<stdio.h>
int main(){
    int hour,minute,second;
    printf("enter hour");
    scanf("%d",&hour);
    printf("minute %d",minute=hour*60);
    printf("second %d",second=hour*3600);
    return 0;
}