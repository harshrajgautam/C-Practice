#include<stdio.h>
#include<math.h>
int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);
if(age>=18)
printf("adult");
else if(age<18 && age>14)
printf("teneger");
else
printf("child");
return 0;
}