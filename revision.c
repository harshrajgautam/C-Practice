  #include<stdio.h>
  #include<conio.h>
  int main(){
  int i=4;          /* Global definition   */
      
   
       i++;          /* Global variable     */
       func();
       printf( "Value of i = %d -- main function\n", i );
   }
   func()
   {
       int i=10;     /* Local definition */
       i++;          /* Local variable    */
       printf( "Value of i = %d -- func() function\n", i );
       return 0;
   }
