#include <stdio.h>
#include <string.h>

int main(void){

    char varable[10];
    int dec,i;
    int res=1;

    printf("Input one decimal number\n");
    scanf("%d",&dec);
    //printf("Input varable (char, int or long long)\n");
    //scanf("%s",varable);

   if(dec>=0){
    for(i=1;i<=dec;i++){
        res=res*i;
    }
   }else{
    for(i=1;i<=-dec;i++){
        res=res*i;
    }
   }

    if(dec>=0){
        printf("Factorial of %d is %d\n",dec,res);
    }else{
        printf("Factorial of %d is -%d\n",dec,res);
    }

    return 0;
}