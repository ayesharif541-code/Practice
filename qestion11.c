#include <stdio.h>

int main() {
    int max=0;
    int min=100;
    int secand_max,secand_min,i;
    int marks[10];
    for(i=1;i<10;i++){
    printf("enter marks\n");
    scanf("%d",&marks[i]);
    if(marks[i]>max){
       secand_max=max;
        max=marks[i];
    }
    else if(marks[i]<max){
        secand_max=marks[i];
    }
    if(marks[i]<min){
         secand_min=min;
        min=marks[i];
    }
    else if(marks[i]>min){
        secand_min=marks[i];

    }
    }
    printf("maximum:%d\n",max);
    printf("minimum:%d\n",min);
    printf("2nd maximum:%d\n",secand_max);
    printf("2nd minimum:%d\n",secand_min);
    return 0;
}