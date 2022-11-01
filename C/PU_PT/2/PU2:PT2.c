#include <stdio.h>

int main(void){

  char dec, i, res;

  printf("Please input 1 natuar number: \n");
  scanf("%hhd", &dec);
  printf("In BIN %hhd is ",dec);

  for (i = 7; i >= 0; i--){
    res = dec >> i;
    if (res & 1){
        printf("1");
    }
    else{
      printf("0");
    }
  }

  printf("\n");

  return 0;
}