#include "stdio.h"

int main(void){
    long int a;
    long int b;
    
    printf("Please input 1. integer");
    scanf("%ld", &a);
    printf("Please input 2. integer");
    scanf("%ld", &b);

    long int c=a*b;

    printf("Integer multiplication is  %ld\n", c);

    return 0;
}