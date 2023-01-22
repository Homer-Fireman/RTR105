#include <stdio.h>
#include <math.h>

int main() {
    double a, b, precision;
    double x, fx, fdx, fddx;
    double fdx_fd, fddx_fd;
    FILE *derivativeFile;

    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the precision: ");
    scanf("%lf", &precision);

    derivativeFile = fopen("derivative.dat", "w");
    fprintf(derivativeFile, "x f(x) f'(x) (analytical) f'(x) (fd) f''(x) (analytical) f''(x) (fd)\n");

    for (x = a; x <= b; x += precision) {
        fx = cos(x*x);
        fdx = -2*x*sin(x*x);
        fddx = -2*sin(x*x) - 4*x*x*cos(x*x);

        printf("f(%.2lf) = %.2lf\n", x, fx);

        printf("f'(%.2lf) (analytical) = %.2lf\n", x, fdx);

        //forward difference calculation
        if (x + precision <= b) {
            double fx_next = cos((x+precision)*(x+precision));
            fdx_fd = (fx_next - fx) / precision;
            printf("f'(%.2lf) (forward difference) = %.2lf\n", x, fdx_fd);
        }

        printf("f''(%.2lf) (analytical) = %.2lf\n", x, fddx);

        //forward difference calculation
        if (x + precision <= b) {
            double fdx_next = -2*(x+precision)*sin((x+precision)*(x+precision));
            fddx_fd = (fdx_next - fdx) / precision;
            printf("f''(%.2lf) (forward difference) = %.2lf\n", x, fddx_fd);
        }

        fprintf(derivativeFile, "%.2lf %.2lf %.2lf %.2lf %.2lf %.2lf\n", x, fx, fdx, fdx_fd, fddx, fddx_fd);
    }

    fclose(derivativeFile);
    return 0;
}



//https://chat.openai.com/chat