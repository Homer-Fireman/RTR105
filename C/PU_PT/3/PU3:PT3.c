#include <stdio.h>
#include <string.h>

int main(void){

    int a,b,c;
    char sort[10];

    printf("input 1. int: \n");
    scanf("%d", &a);
    printf("input 2. int: \n");
    scanf("%d", &b);
    printf("input 3. int: \n");
    scanf("%d", &c);
    printf("Print input by biggest or smallest?\n");
    scanf("%s",sort);
    printf("Output when sorted by %s is:\n",sort);

    if(strcmp ("biggest", sort) == 0){
        if(a>b && a>c){
            printf("%d\n",a);
            if(b>c){
                printf("%d\n%d\n",b,c);
            }else{
                printf("%d\n%d\n",c,b);
            }
        }else{
            if(b>c){
                printf("%d\n",b);
                if(a>c){
                printf("%d\n%d\n",a,c);
                }else{
                    printf("%d\n%d\n",c,a);
                }
            }else{
                printf("%d\n",c);
                if(a>b){
                    printf("%d\n%d\n",a,b);
                }else{
                    printf("%d\n%d\n",b,a);
                }
            }
        }
    }else{
        if(a<b && a<c){
            printf("%d\n",a);
            if(b<c){
                printf("%d\n%d\n",b,c);
            }else{
                printf("%d\n%d\n",c,b);
            }
        }else{
            if(b<c){
                printf("%d\n",b);
                if(a<c){
                printf("%d\n%d\n",a,c);
                }else{
                    printf("%d\n%d\n",c,a);
                }
            }else{
                printf("%d\n",c);
                if(a<b){
                    printf("%d\n%d\n",a,b);
                }else{
                    printf("%d\n%d\n",b,a);
                }
            }
        }
    }
    
    
    
}