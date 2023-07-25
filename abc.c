#include<stdio.h>
#include<stdlib.h>
int main()
{
  char nm[20];
  float bp,np;
  char ch;
  input:
  
  fflush(stdin);
  printf("\n\tEnter employee name\t");
  gets(nm);
  printf("Enetr Basic Salary\t");
  scanf("%f", &bp);

  np = bp + bp*.3;
  printf("\n\n\tEmployee Name: %s", nm);
  printf("\n\tNet Pay: %f", np);

  con:
  fflush(stdin);
  printf("\n\n\tDo you want to continue..Y/N\t");
  scanf("%c", &ch);

  if(ch=='Y' || ch=='y') {
    goto input;
  } else if(ch=='N' || ch=='n') {
    exit(0);
  } else {
    printf("\n\n\tSorry.....Please input only Y/N.....");
    goto con;
  }
  return 0;
}