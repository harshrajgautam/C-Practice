#include<stdio.h>
int main(){
    int sp,cp,loss,gain;
    printf("Enter value of sp:-");
    scanf("%d",&sp);
    printf("Enter value of cp:-");
    scanf("%d",&cp);
    if(sp>cp){
        printf("gain= %d",gain=sp-cp);
    }
    else
    printf("loss= %d",loss=cp-sp);
    return 0;
}