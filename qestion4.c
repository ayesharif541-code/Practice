#include <stdio.h>

int main() {
    // Ask for withdrawal amounts 5 times. Count how many withdrawals were made.
    //Ask for deposits until the user enters 0. Count how many deposits were entered.
    int withdrawal_amounts,deposits_amount;
     int total_withdrawn=0;
     int total_deposits=0;
    int withdrawal_count=0;
    int deposits_count=0;
    int i;
    int j=0;
    int amount=50000;
    for(i=0;i<5;i++){
        printf("enter withdrawamount:\n");
        scanf("%d",&withdrawal_amounts);
        if(withdrawal_amounts<amount){
            amount=amount-withdrawal_amounts;
            total_withdrawn += withdrawal_amounts;
            withdrawal_count++;
            printf("your withdrawal_amount is %d\n",withdrawal_amounts);
        }
        else{
            printf("you can't withdraw\n");
        }
    }
    
printf("your total withdrow amount is %d\n", total_withdrawn);
printf("your total withdrow count is %d\n",withdrawal_count); 

    printf("enter deposits_amount:\n");
    scanf("%d",&deposits_amount);
while(deposits_amount!=0){

        if(deposits_amount>0){
            amount=amount+deposits_amount;
            deposits_count++;
            printf("your  deposits_amount is %d\n",deposits_amount);
        }
        else{
            printf("you can't deposits\n");
        }
         printf("enter deposits_amount:\n");
        scanf("%d",&deposits_amount);
    }
    
printf("your total deposits_amount is %d\n", total_deposits);
printf("your total deposits_count is %d\n",deposits_count); 
    
    
  
  

    return 0;
}