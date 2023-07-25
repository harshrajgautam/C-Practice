#include<stdio.h>
int main(){
    int a,b,c,Total,percentage;
    printf("enter the value of a");
    scanf("%d",&a);
     printf("enter the value of b ");
    scanf("%d",&b);
     printf("enter the value of c ");
    scanf("%d",&c);
    Total=a+b+c;
    printf("Total=%d\n",Total);
    percentage=((a+b+c)/3%);
    printf("percentage=%d\n",percentage);
    
	
    
    return 0;
}


