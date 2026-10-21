#include <stdio.h>
int main(){
    int i;int max;int min;
int n[5];
printf("enter n:\n");
scanf("%d",&n[0]);
max=n[0];
min=n[0];

for(i=1;i<5;i++){
    printf("enter n:\n\n");
    scanf("%d",&n[i]);

if(n[i]>max){
    max=n[i];
}
if(n[i]<min){
    min=n[i]; 
}
}
printf("maximum :%d\n",max);
printf("minimum :%d\n",min);

return 0;
}