 #include<stdio.h>
 int main(){
 char name[ 15 ] ;
  printf(" Enter name of 15 Characters ") ;
  scanf(" %s " , name );           /* We NOT use & operator for String (Array of characters)*/    


  printf("%s", name);
return 0;
 }