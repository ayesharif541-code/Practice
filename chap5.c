#include <stdio.h>
int main(){
    int grades=332;
    int *ptr=&grades;
    int **pptr=&ptr;
    printf("%d",**pptr);
    return 0;
}
