#include <stdio.h>
#include "funcdef.h"

int main(void) {
print1(); 
print2(5); 

int num = memory(); 
printf("I can return: %d\n", num);

int res = math(1, 3); 
printf("quick math: %d\n", res);

return 0;
}
