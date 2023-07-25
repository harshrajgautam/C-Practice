#include<stdio.h>
int main()
{
int s=0,n,r;
printf("enter a number");
scanf("%d",&n);
while(n>0){
	r = n%10;
	s=s+r;
	n=n/10;
}
printf("%d",s);
	return 0;
}
