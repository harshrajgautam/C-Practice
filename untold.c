#include<stdio.h>
int sum(int a, int b);
int substract(int a,int b);
int multiply(int a,int b);
int division(int a,int b);
int printTable(int n);
int main(){
    int a,b;
    printf("enter value of a:-");
    scanf("%d",&a);
     printf("enter value of b:-");
    scanf("%d",&b);
    int s=sum(a,b);
    printf("sum is =%d",s);
     int c=substract(a,b);
    printf("\nsubstract =%d",c);
    int d=multiply(a,b);
    printf("\nmultiply =%d",d);
    int e=division(a,b);
    printf("\ndivision=%d",e);
    int f=printTable;
    printf("\nPrintTable is=%d",f);
    
    return 0;
}
    int substract(int a, int b){
    printf("\nenter value of a:-");
    scanf("%d",&a);
     printf("enter value of b:-");
     scanf("%d",&b);
    
    return a-b;
}
int multiply(int a, int b){
    printf("\nenter value of a:-");
    scanf("%d",&a);
     printf("enter value of b:-");
     scanf("%d",&b);
     return a*b;}
     
     int division(int a, int b){
    printf("\nenter value of a:-");
    scanf("%d",&a);
     printf("enter value of b:-");
     scanf("%d",&b);
    
    return a%b;}
    int PrintTable(int n);
    printf("Enter value of n");
    scanf("%d",&n);
    for(int i=1;i<=0;i++){
    	return n*i;
	}

    
int sum(int a,int b){
    return a+b;
}
