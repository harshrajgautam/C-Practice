#include<stdio.h>
int main(){
    int day;
    printf(" enter day ");
    scanf("%d",&day);
    switch(day){
        case 1: printf("january");
        break;
         case 2: printf("February");
        break;
         case 3: printf("March");
        break;
         case 4: printf("april");
        break;
         case 5: printf("may");
        break;
         case 6: printf("june");
        break;
         case 7: printf("july");
        break;
         case 8: printf("August");
        break;
         case 9: printf("September");
        break;
         case 10: printf("October");
        break;
         case 11: printf("November");
        break;
         case 12: printf("December");
        break;
        default : printf("not a valid day");
    }
    return 0;
}