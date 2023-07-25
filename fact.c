#include<stdio.h>
#include<conio.h>
int fact (int);
void main(){
    int f,n=5;
    f=fact(n);
    printf("factorial=%d",f);
}int fact(int n){
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}