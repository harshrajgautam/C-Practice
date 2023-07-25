#include<stdio.h>
int main(){
    int n,i=2,f=0;
    cout<<"enter value of n";
    scanf("%d",&n);
    for(i=0;i<n;)
    n%i==0;
    if(f=1)
    i=i+1;
    else if(f=0)
    printf("prime number");
    else
    printf("not prime");
    return 0;
}
