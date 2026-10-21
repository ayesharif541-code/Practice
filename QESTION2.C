/*
Bank ATM Simulator: An ATM starts with a balance of Rs. 50,000 
and shows a menu in a do while loop: 1) Withdraw, 2) Deposit, 3)
Check Balance, 4) Mini Statement, 5) Exit. Use a switch for the
menu. For Withdraw, use nested if else to check that the amount 
is a multiple of 500, that it does not exceed the balance, and 
that it does not exceed the daily limit of Rs. 20,000. Store the
last 10 transactions in a 1D array and print them in reverse order
for the Mini Statement. Ask for a 4-digit PIN with a maximum of 3
attempts using a while loop. When the PIN is correct, print the sum
of its digits and the PIN reversed. After 3 wrong attempts, block the card.
*/
#include<stdio.h>
int main(){
int choice;
int balance=50000;
int amount;
int i,n;
int pin;
int sum=0;
int digit;
int daily_limit=20000;int attempt;
int transactions[10]={0};
do{
    printf(" 1) Withdraw, 2) Deposit, 3)Check Balance, 4) Mini Statement, 5) Exit");

switch(choice){
    case 1:
    printf("enter amount of withdraw\n");
    scanf("%d",&amount);
    if(amount%500==0){
       if(balance>amount && amount<daily_limit){
       printf("you can withdraw\n");
       balance=balance-amount;
       }
    }
    break;
    case 2:
      for(i=0;i<10;i++){
        printf("enter amount of transiction\n");
        scanf("%d",&transactions[i]);
        balance=  balance +transactions ;
      }
     break;
     case 3:
     printf("balance :%d",balance);
    case 4:
     for(i=10;i>0;i--){
        printf("%d",&transactions[i]);
    } 
    while(attempt<3){
    printf("enter n:\n");
    scanf("%d",n);
    if(pin==1234){
    while(n!=0){
        digit=pin%10;
        sum=sum+digit;
        pin=pin/10;
     }
     }
     else{
        printf("invalid input\n");
     }
     attempt++;

}
    printf("sum of pin:",sum);
    case 5:
    printf("exit");
    break;
}
}while(choice != 5);

    return 0;
}