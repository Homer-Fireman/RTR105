#include <stdio.h>
#include <math.h>

// Function prototype for f(x)-c
double f(double x, double c);

int main()
{
  // Declare variables for a, b, c,precision and funkca
  double a, b, c, precision;
  double funkca=f(a,c);

  // Prompt user for input values for a, b, c, and precision
  printf("Enter value for a: ");
  scanf("%lf", &a);
  printf("Enter value for b: ");
  scanf("%lf", &b);
  printf("Enter value for c: ");
  scanf("%lf", &c);
  printf("Enter value for precision: ");
  scanf("%lf", &precision);

  // Check if f(a) * f(b) > 0
  if (f(a,c) * f(b,c) > 0)
  {
    // Print a message indicating that there are no roots or a pair number of roots
    printf("There are no roots or a pair number of roots.\n");
  }
  else
  {
    // Calculate the value of x using the bisection method
    double x = (a + b) / 2.0;
    int iterations = 0;
    while (fabs(b-a) > precision)
    {
      if (funkca*f(x,c) > c)
      {
        a = x;
      }
      else
      {
        b = x;
      }
      x = (a + b) / 2.0;
      iterations++;
    }

    // Print the result
    printf("x = %lf\n", x);
    printf("f(x) = %lf\n", f(x,c));
    printf("Iterations: %d\n", iterations);
  }

  return 0;
}

// Function definition for f(x)
double f(double x, double c)
{
  // Return the value of f(x^2)
  return cos(x * x) - c;
}







//https://chat.openai.com/chat