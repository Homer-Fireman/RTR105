#include<stdio.h>
#include<math.h>
#define N 500

 long double cossinus( long double x){
    long double a, S ;
    int k=0;
    

    a = (long double)1.*pow(-1,k)*pow(x ,4*k) /(1.) ;
    S=a;
    printf("a%d = %.2f \t%8.2f \t%8.2f \n",k,x,a,S);
    k++;

    while (k<N+1)
    {
        a =  a * (-1) *x*x*x*x / ((4*k*k-2*k)) ;
        S = S + a ; 
        if(k==N-1||k==N){
            printf("a%d = %lf \t%le \t%lf \n",k,x,a,S);
        }
        k++;
        
    }
    return S;
}


int  main(void){
     long double x,y,yy;
    

    printf("cos(x^2) aprēķināšana:\nIevadiet argumentu x:");
    scanf("%lf",&x);
    y=cos(x*x);
    yy=cossinus(x);
    printf("sin(%lf^2) = %Lf\n",x,y);
    printf("sin(%lf^2) caur summu:  %Lf\n",x,yy);
    printf(" \n          500\n");
    printf("          ______\n");
    printf("          \\             k    4*k\n");
    printf("           \\        (-1) * x\n");
    printf("cos(x*x) ≈ >      _______________ \n");
    printf("           /         (2 * k)! \n");
    printf("          /_____\n");
    printf("           k=0\n");
    printf("\n");
    printf("                               4\n");
    printf("                            -x\n");
    printf("rekurences reizinātājs : __________\n");
    printf("                            2\n");
    printf("                          4k - 2k\n");
    

}