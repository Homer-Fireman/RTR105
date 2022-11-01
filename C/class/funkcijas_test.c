#include <stdio.h>
#include <string.h>

char a;
char b;

char test();
void test2(char b); //void neko neatgriež

int main(void){
    test();
    printf("%hhd\n",a);
    test2(a);
}

char test(){
    a=1;
    return a;
}

void test2(char b){
    b++;
    printf("%hhd\n",b);
}