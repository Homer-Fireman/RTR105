#include<stdio.h>
#include<math.h>

double sinuss(double x){
    double a, S ;
    int k=0;

    a = pow(-1,k)*pow(x ,2*k+1) /(1.) ;
    S=a;
    printf("%.2f \t%8.2f \t%8.2f \n" ,x , a , S);
    k++;

    while (k<40)
    {
        a =  a * (-1) *x*x / ((2*k)*(2*k+1)) ;
        S = S + a ; 
        printf("%.2f \t%8.2f \t%8.2f \n",x,a,S);
        k++;
    }
    return S;
}



int  main(void){
    double x=2.05 ,y,yy;
     y = sin (x) ;
    printf("standarta funkcijai y=sin (%.2f)=%.2f \n",x,y);

    yy=sinuss(x);
    printf("lietotāja funcijas y=sin (%.2f)=%.2f \n",x,yy);
}