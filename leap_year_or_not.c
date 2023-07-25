#include<stdio.h>
int main(){
    int year;
    printf("Enter the year:-");
    scanf("%d",&year);
    if(year % 400 == 0){
        printf("%dleap year",year);
    }
    else if(year % 100 == 0)
    {
        printf("%dnot a leap year",year);
    }
    else if(year %4 == 0)
    {
        printf("%dleap year",year);
    }
    else
    printf("%d:-Not a leap year");
    return 0;
}