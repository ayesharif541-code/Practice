#include <stdio.h>
int main(){

    //Take n from the user and use a for loop to count how many numbers from 1 to n are even

    int i,n;
    int count=0;
    for(i=0;i<n;i++){
            printf("enter number:\n");
            scanf("%d",&n);
         if(n%2==0){
         printf("%d even \n",n);
           count++;
          
         }
         else{
         printf("%d is odd\n",n);
         }
       
     }
     printf("%d numbers are even\n",count);
    return 0;
}