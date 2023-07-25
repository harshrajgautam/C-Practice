#include<stdio.h>
int sum(){
	int a,b,sum;
	printf("Ente two number");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("Hello\n");
	printf("sum is %d\n",sum);
    return 0;
}
int prime(){
	int a;
	printf("enter a");
	scanf("%d",&a);
	if(a/1==0){
		printf("prime");
	}
	else if(a/a==0){
		printf("prime");
	}
int n;
printf("enter n");
scanf("%d",&n);
	 if(a/n==0){
		printf("not prime");
	}

	return 0;
	
}
int main(){
	sum();
	prime();
}
	


