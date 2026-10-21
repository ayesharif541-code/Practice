/*Smart Hostel Mess System: A hostel has n students (take n from the user
, maximum 50). Store each student's meal choice in an array: 1 = Breakfast
, 2 = Lunch, 3 = Dinner, 4 = Skip. Use a do while loop to keep asking for
 a choice until it is valid (1 to 4). Use a switch to add the meal's price
(Rs. 150, 250, 300, 0) to that student's bill. If a student's total bill
 is above Rs. 1000, apply a nested if else: a 10% discount if the student
ordered all three meals, otherwise a 5% discount. At the end, print each
student's final bill, the highest and second-highest bill, and the total
 money collected.
*/
#include<stdio.h>
int main(){
int i;
int bill[5]={0};
int price=0;
int dis_amount[5];
int total_bill[5]={0};
int max=0;
int sec_max=0;
int meal_choice[5];
int breakfast , lunch , diner;


for(i=0;i<5;i++){

    do{
    printf(" 1 = Breakfast=150, 2 = Lunch=250, 3 = Dinner=300, 4 = Skip=0\n");
    printf(" enter student meal choice :\n");
    scanf("%d",&meal_choice[i]);
    }while(meal_choice[i]<1 || meal_choice[i]>4);
switch(meal_choice[i]){
    case 1:
    printf("1 = Breakfast=150\n");
    price=150;
    bill[i]=bill[i]+price;
    total_bill[i]=bill[i];
    breakfast++;
    break;
    case 2:
    printf("2 = lunch =250\n");
    price=250;
    bill[i]=bill[i]+price;
    total_bill[i]=bill[i];
    lunch++;
    break;
    case 3:
    printf("3 = diner =300\n");
    price=300;
    bill[i]=bill[i]+price;
    total_bill[i]=bill[i];
    diner++;
    break;
    case 4:
    printf("4 = skip =0\n");
    price=0;
    bill[i]=bill[i]+price;
    total_bill[i]=bill[i];
    break;
}
}

if(bill[i]>1000){
    if(breakfast==1 && lunch==1 && diner==1){
    dis_amount[i]=bill[i]-(bill[i]*10)/100;
    total_bill[i]=dis_amount[i];
    }
    else{
    dis_amount[i]=bill[i]-(bill[i]*5)/100;
    total_bill[i]=dis_amount[i];
    }
}
for(i=0;i<5;i++){
if (total_bill[i]>max){
    sec_max=max;
    max=total_bill[i];
     if(sec_max<max){
        sec_max=total_bill[i];
    }

}
printf("final bill:%d\n",total_bill[i]);
}

printf("the highest bill: %d\n",max);
printf("the 2nd  highest bill: %d\n",sec_max);
    return 0;
}
