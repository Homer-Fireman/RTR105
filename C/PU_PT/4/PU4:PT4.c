#include <stdio.h>
#include <string.h>

int main(void){

    char varable[10];
    int dec;
    int i =1;
    int res=1;

    printf("Input one decimal number\n");
    scanf("%d",&dec);
    //printf("Input varable (char, int or long long)\n");
    //scanf("%s",varable);

   if(dec>=0){
    while(i<=dec){
        res=res*i;
        i++;
    }
   }else{
    while(i<=-dec){
        res=res*i;
        i++;
    }
   }

    if(dec>=0){
        printf("Factorial of %d is %d\n",dec,res);
    }else{
        printf("Factorial of %d is -%d\n",dec,res);
    }

    return 0;
}