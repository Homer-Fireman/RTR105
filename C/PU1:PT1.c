#include "stdio.h"

int main(void){
    int a=0;
    int b=0;
    
    printf("Please input 1. integer");
    scanf("%d", &a);
    printf("Please input 2. integer");
    scanf("%d", &b);

    int c=a*b;

    printf("Integer multiplication is  %d\n", c);

    return 0;
}