#include <stdio.h>
#include <string.h>

int main(void){

    char a,b,c;
    char sort[11];

    printf("Input 3 letters with out space\n");
    scanf("%c%c%c",&a,&b,&c);
    printf("Print input ascending or descending?\n");
    scanf("%s",sort);
    printf("Output when sorted %s is:\n",sort);
    
    if(strcmp ("descending", sort) == 0){
        if(a>b && a>c){
            printf("%c\n",a);
            if(b>c){
                printf("%c\n%c\n",b,c);
            }else{
                printf("%c\n%c\n",c,b);
            }
        }else{
            if(b>c){
                printf("%c\n",b);
                if(a>c){
                printf("%c\n%c\n",a,c);
                }else{
                    printf("%c\n%c\n",c,a);
                }
            }else{
                printf("%c\n",c);
                if(a>b){
                    printf("%c\n%c\n",a,b);
                }else{
                    printf("%c\n%c\n",b,a);
                }
            }
        }
    }else{
        if(a<b && a<c){
            printf("%c\n",a);
            if(b<c){
                printf("%c\n%c\n",b,c);
            }else{
                printf("%c\n%c\n",c,b);
            }
        }else{
            if(b<c){
                printf("%c\n",b);
                if(a<c){
                printf("%c\n%c\n",a,c);
                }else{
                    printf("%c\n%c\n",c,a);
                }
            }else{
                printf("%c\n",c);
                if(a<b){
                    printf("%c\n%c\n",a,b);
                }else{
                    printf("%c\n%c\n",b,a);
                }
            }
        }
    }

    
}