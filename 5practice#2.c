#include <stdio.h>
     void pak();
     void india();
int main(){
    char c;
    printf("ENTER COUNTRY:");
    scanf(" %c",&c);
    if(c=='p'){
        pak();
    }
    else{
        india();
    }
    return 0;
}
void pak(){
    printf("ASSLAMUALIKUM\n");
}
void india(){
    printf("NAMESTE");
}