#include <stdio.h>
int main(){
//Ask 10 quiz answers. Count how many answers are correct.
char  quiz;
int i;
int count=0;
for(i=0;i<10;i++){
    printf("enter 'c' for correct and 'w' for wrong\n");
    scanf("%c",&quiz);
    if(quiz=='c'){
        printf("correct\n");
        count++;
    }
    else{
        printf("wrong\n");
    }
}
printf("%d answer are corret\n",count);
    return 0;
}