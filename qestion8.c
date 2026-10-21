#include <stdio.h>

int main() {
    int choice;
    int price;
    int total=0;
    char  order;
    // Take 3 meal prices and find the total bill.
    printf("do you want to order?(yes 'y' no 'n'):\n");
    scanf(" %c",&order);
   

    while(order=='y'){
         printf("1-burger=150 \n2-icecream=250 \n3-pizza=350  ");
         printf("enter choice\n");
         scanf("%d",&choice);
   
    switch(choice){
        case 1:
        price=150;
        break;
        case 2:
        price=250;
        break;
        case 3:
        price=350;
        break;
        default:
        price=0;
        printf("invalid input");
        break;
    }
     printf("do you want to order again?\n");
     scanf(" %c",&order);

    total=total+price;
}
    
    printf("total price is %d",total);
    return 0;
}