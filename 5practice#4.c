#include <stdio.h>

  int sum( int a,int b);

int main(){
   int a,b,s ;
   printf("ENTER A:");
   scanf("%d",&a);
   printf("ENTER B:");
   scanf("%d",&b);
    s=sum(a,b);
    printf("the sum of a and b is %d",s);
    return 0;
   
}
 int sum(int a,int b){
   return a+b;

}