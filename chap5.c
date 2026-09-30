#include <stdio.h>

/*  step1: funtion prototype/deleration
    where we call the fuction 
    function name define by user same as variable

             " void function_name(); "

*/

/*
    step2: function defination
      "
       void functin_name(){
       printf("hello world");
       }
    
     "

*/

/*
     step3:function cell
    "
    int main(){
    print("hy");
    return 0;

    
    }
    
    "
*/
void first(); //prototype/declaration 
int main(){

    first(); //function call
    first();
    first();
    first();
    first();

  return 0;
}

//int= void int can return but void(empty) cannot
void first(){
printf("hello world\n ");

}