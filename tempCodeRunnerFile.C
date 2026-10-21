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
int breakfast,lunch,diner;
