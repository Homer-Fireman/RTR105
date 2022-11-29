#include<stdio.h>
#include<math.h>

int main(){
    float a=0.01, b=1.5*M_PI, x, delta_x=1.e-3, fa, fb, fx;
    int k=0;

    fa=sin(a); fb=sin(b);
    if(fa*fb>0){
        printf("Intervālā [%.2f;%.2f] sin(x) funkcijai",a,b);
        printf("sakņu nav (vai tajā ir pāru sakņu skaits\n");
        return 1;
    }
    printf("sin(%7.3f)=%7.3f\t\t\t\t",a,sin(a));
    printf("sin(%7.3f)=%7.3f\n",b,sin(b));

    while ((b-a)>delta_x){
        k++; ////k=k+1;//k+=1;
        x = (a+b) / 2. ;
        if(fa* sin(x)>0) // pie a=0 −> funkca=0 −> reizinaajums i r p r e c i i z i 0
            a=x;
        else
            b=x;
        printf("%2d . iterācija : sin (%7.3f)=%7.3f \t",k,a,sin(a));
        printf(" sin(%7.3f)=%7.3f \t",x,sin(x));
        printf("sin(%7.3f )=%7.3f \n",b,sin(b));

        printf("Sakne atrodas pie x=%.3f , jo sin(x) ir %.3f \n",x,sin(x));
        return 0;
    }
    
    

}