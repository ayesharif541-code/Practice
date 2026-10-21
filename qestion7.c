#include <stdio.h>

int main() {
    // Take a number and count how many of its digits are even
    int n;
    int count=0;
    int count_even=0;
    int count_odd=0;
    int digit;
    printf("enter number\n");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        n=n/10;
        count++;
        if(digit%2==0){
            printf("%d is even",digit);
            count_even++;
        } 
        else{
            printf("%d is odd\n",digit);
            count_odd++;
        }
    }
    printf("%d number are odd numbers",count_odd);
    printf("%d number are even numbers",count_even);







    return 0;
}