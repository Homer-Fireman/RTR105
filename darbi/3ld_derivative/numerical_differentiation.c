#include <stdio.h>
#include <math.h>

// Function to calculate f(x) = cos(x*x)
double f(double x)
{
    return cos(x*x);
}

// Function to calculate the first derivative of f(x) analytically
double df(double x)
{
    return -2*x*sin(x*x);
}

// Function to calculate the second derivative of f(x) analytically
double ddf(double x)
{
    return -2*(2*x*x*cos(x*x) - 1);
}

int main(void)
{
    // Declare variables
    double a, b, h, x, y, dy, ddy;
    int i, n;

    // Get values of a, b, and precision from the user
    printf("Enter value of a: ");
    scanf("%lf", &a);
    printf("Enter value of b: ");
    scanf("%lf", &b);
    printf("Enter precision: ");
    scanf("%lf", &h);

    // Calculate number of steps to take
    n = (int)((b-a)/h + 0.5);

    // Open file to save data
    FILE *fp = fopen("derivative.dat", "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Write data to file
    for (i = 0; i <= n; i++)
    {
        x = a + i*h;
        y = f(x);
        dy = df(x);
        ddy = ddf(x);

        fprintf(fp, "%lf %lf %lf %lf\n", x, y, dy, ddy);

        printf("x = %lf, f(x) = %lf, f'(x) = %lf, f''(x) = %lf\n", x, y, dy, ddy);
    }

    // Close file
    fclose(fp);

    return 0;
}
