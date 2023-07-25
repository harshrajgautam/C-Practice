#include<stdio.h>
int main()
{
int i=1;
printf("counting");
while(i<=100){
printf("%d\n",i);
i=i+2;};
for(i=1;i<=100;i=i+2){
printf("%d\n",i);}
do{
	printf("%d\n",i);
	i+2;
}while(i<=100);
return 0;
}