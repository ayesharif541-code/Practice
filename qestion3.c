#include <stdio.h>

int main() {
// Take 10 student marks and count how many students passed. Passing marks = 40.
int marks,n;int i=0;
int count=0;
while(i<10){
    printf("enter marks:\n");
    scanf("%d",&marks);
    if(marks >=40){
        printf("PASS\n");
        count++;
    }
    else 
    printf("fail");
    i++;
}
printf("%d student out of 10 is pass\n",count);
    return 0;
}