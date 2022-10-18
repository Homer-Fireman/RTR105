#include "stdio.h"

int main(void){

    char a = 'd';
    int b = 2000;
    float c = 2.3;
    double d = -5.6e-4;

    printf("%f \n",b*d);
    printf("%d \n",++b);
    printf("%d \n",a/b);
    printf("%f (%ld bytes)\n",d);

    char aa = 40;
    char aa1= aa<<1; //reiz 2
    char aa2=aa>>1; // dalīts ar 2

    printf("%d\n%d\n",aa1,aa2);
    printf("%d\n%d\n",aa<<2,aa>>2); // reiz 2^2 un dalīts ar 2^2

    return 0;
}