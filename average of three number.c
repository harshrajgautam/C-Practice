#include<stdio.h>
#include<math.h>
int main(){
    int m1,m2,m3,m4,m5,t,a;
    printf("/n/tenter the value of m1");
    scanf("%d",&m1);
     printf("/n/tenter the value of m2");
    scanf("%d",&m2);
     printf("/n/tenter the value of m3");
    scanf("%d",&m3);
     printf("/n/tenter the value of m4");
    scanf("%d",&m4);
     printf("/n/tenter the value of m5");
    scanf("%d",&m5);
    t=m1+m2+m3+m4+m5;
    a=t/5;
printf("/n/t total numner %d",t);
printf("/n/t average %d",a);
if(a>80)
{
    printf("/n/tfirst");
}
else if(a<80 &&a>60)
{
    printf("/n/tsecond");
}
else if(a<60 && a>35)
{
    printf("/n/tthird");
}
else{
    printf("/n/yfail");
}
    return 0;
}