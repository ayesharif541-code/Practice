//CHAP #01(DATA TYPES)


#include <stdio.h>
int main(){
int a;
int b;
printf("enter the value of a\n");
scanf("%d",&a);
printf("enter the value of b\n");
scanf("%d",&b);
printf("the sum of a and b is %d\n ", a+b);
printf("the diffrence of a and b is%d\n ",a-b);
printf("the multipul of a and b is %d\n",a*b);
printf("the division of a and b is %d\n",a/b);

//QESTION NO 1 : CALCULATE THE AREA OF SQUARE;
int x;
printf("enter the value of x:\n");
scanf("%d",&x);
printf("the area of square is %d\n",x*x);
//QUESTION NO 2: CALCULATE THE AREA OF CIRCLE:
int radius;

printf("enter the value of radius\n");
scanf("%f",&radius);
printf("the area of the circle is : %f\n",3.14*radius*radius);
return 0;
}

