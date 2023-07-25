#include<stdio.h>
float sum(){
	int a,b,sum;
	printf("Ente two number");
	scanf("%f%f",&a,&b);
	sum=a+b;
	printf("Hello\n");
	printf("sum is %f\n",sum);
    return 0;
}
int prime(){
	int n,i,f;
	printf("enter n");
	scanf("%d",&n);
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
			f=1;
	}
	if(f==0)
    printf("prime");
	else
    printf("Not prime");
	return 0;
	
}
int main(){
	sum();
	prime();
}
	



