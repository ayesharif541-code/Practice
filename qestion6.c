//Take a number and use a while loop to count how many digits it has.
#include <stdio.h>

int main() {
 int n;
 int digit;
 int sum=0;
 int count=0;
 printf("enter  number:\n");
 scanf("%d",&n);

while(n!=0){
    digit=n%10;
    sum=sum+digit;
    n=n/10;
    count++;
    
}
    printf("the sum of n is %d\n",sum);
    printf("number of digit in n is %d\n",count);
    return 0;
}