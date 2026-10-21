#include <stdio.h>

int main() {
int n; int zero_count=0; int odd_count=0;int even_count=0;
int digit=0;
int sum=0;

printf("enter number!\n");
scanf("%d",&n);
while (n!=0){
    digit=n%10;
    sum=sum+digit;
    n=n/10;
    
    if(digit%2==0){
        printf("%d is even",digit);
        even_count++;
        printf("%d digit are even\n",digit);
        }
        else if(digit==0){
        zero_count++;
          printf("%d digit are zero\n",digit);
        
        }
        else {
        odd_count++;
          printf("%d digit are odd\n",digit);
        
        }
       
}
printf("%d digit in number are zero\n",zero_count);
printf("%d digit in number  are odd\n",odd_count);
printf("%d digit in number are even\n",even_count);
printf("%d sum of n\n",sum);
if(n%2==0){

    printf("n is even");
}
else {
      printf("n is odd"); 
        
    }
  
    return 0;
}