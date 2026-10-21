#include <stdio.h>

int main() {
   int n,i;
   int count=0;
   for(i=0;i<10;i++){
    printf("enter n:\n");
    scanf("%d",&n);
      if(n>50){
        printf("%d id greater then 50",n);
        count++;
      }
      else{
        printf("%d id less then 50",n);
      }
   }
  printf("%d numbers are greater then 50",count);
    return 0;
}

