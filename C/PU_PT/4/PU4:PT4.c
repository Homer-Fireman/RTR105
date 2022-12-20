#include <stdio.h>
#include <string.h>

int main(void){

    char varable[15];
    long long int i =1;

    printf("Input varable (char, int or lli (long long int)) type\n");
    scanf("%s",varable);

    if(strcmp ("int", varable) == 0){

        int dec;
        int res=1;
        printf("Input one decimal number\n");
        scanf("%d",&dec);

        if(dec<0){
            printf("Error! Factorial of a negative number doesn't exist.\n");
            return 2;
        }else{
            while(i<=dec){
            res=res*i;
            i++;
            if(i>=5){
                if((res%10)!=0){
                printf("correctly calculate value of factorial of entered number with selected data type is not possible\n");
                return 3;
                }
            }
        }
        printf("Factorial of %d is %d\n",dec,res);
        }

        
        
    }else{
        if(strcmp ("char", varable) == 0){

            char dec;
            char res=1;
            printf("Input one decimal number\n");
            scanf("%hhd",&dec);

            if(dec<0){
                printf("Error! Factorial of a negative number doesn't exist.\n");
                return 2;
            }else{
                while(i<=dec){
                res=res*i;
                i++;
                if(i>=5){
                    if((res%10)!=0){
                    printf("correctly calculate value of factorial of entered number with selected data type is not possible\n");
                    return 3;
                    }
            }
            }
            printf("Factorial of %d is %d\n",dec,res);
            }

        }else{
                if(strcmp("lli", varable) == 0){

                    long long int dec;
                    long long int res=1;
                    printf("Input one decimal number\n");
                    scanf("%lld",&dec);

                    if(dec<0){
                        printf("Error! Factorial of a negative number doesn't exist.\n");
                        return 2;
                    }else{
                        while(i<=dec){
                        res=res*i;
                        i++;
                        if(i>=5){
                            if((res%10)!=0){
                            printf("correctly calculate value of factorial of entered number with selected data type is not possible\n");
                            return 3;
                            }
                        }
                    }
                    printf("Factorial of %lld is %lld\n",dec,res);
                    }

            }
        }
    }

    return 0;
}