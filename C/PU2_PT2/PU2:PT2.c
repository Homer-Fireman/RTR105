#include "stdio.h"

int main(void){
    unsigned char ui, result, c;

    printf("Please input 1 natuar number ");
    scanf("%c", &ui);

    
    printf("in binary it is ");
    for (c = 7; c >= 0; c--)
  {
    result = ui >> c;

    if (result & 1)
      printf("1");
    else
      printf("0");
    printf("\n");
    return 0;
  }
}