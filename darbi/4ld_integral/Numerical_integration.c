#include <stdio.h>
#include <math.h>

int main()
{
double a, b, precision;
double rect_area, trap_area, simpson_area;
double x, width, fx;
int num_rect, i;

printf("Enter value of a: ");
scanf("%lf", &a);
printf("Enter value of b: ");
scanf("%lf", &b);
printf("Enter value of precision: ");
scanf("%lf", &precision);

num_rect = (b - a) / precision;
width = (b - a) / num_rect;

rect_area = 0;
for (i = 0; i < num_rect; i++)
{
x = a + i * width;
fx = cos(x * x);
if (fx > 0)
rect_area += fx * width;
}
printf("Area using rectangle rule: %lf\n", rect_area);

trap_area = 0;
for (i = 0; i < num_rect; i++)
{
x = a + i * width;
fx = cos(x * x);
trap_area += (fx + cos((x + width) * (x + width))) * width / 2;
}
printf("Area using trapezoidal rule: %lf\n", trap_area);

simpson_area = 0;
for (i = 0; i < num_rect; i++)
{
x = a + i * width;
fx = cos(x * x);
simpson_area += (fx + 4 * cos((x + width / 2) * (x + width / 2)) + cos((x + width) * (x + width))) * width / 6;
}
printf("Area using Simpson's rule: %lf\n", simpson_area);

return 0;
}