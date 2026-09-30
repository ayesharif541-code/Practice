//CHAP#02(INSTRACTION AND OPREATER)




#include <stdio.h>
#include <math.h>
int main(){



//its a set of instraction that are executed in a sequence(sequence important)
int old_age=23;
int new_age;
printf("enter the old_age \n");
scanf("%d",&old_age);
new_age=old_age+1;
printf("my age is now %d\n",new_age);


//ARTHIMETIC OPREATER
int a=2;
int b =3; //poweris is in < meth.h> library
int power = pow(a,b);
printf("the power of a and b is %d\n ", power);


//if we want 3/2 in the form of decimal %f so 1.555but what if we use %d  so it neglect .555 and just give an answer of 1
printf("if we divide two number like 3/2 %d\n",3/2);
printf("if we divide two number like 3/2 %f\n",3.0/2.0);
return 0;    
}