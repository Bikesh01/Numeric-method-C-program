#include<stdio.h>
#include<math.h>
#define e 0.001
// Bisection Method. The function is x^3 - x^2 + 2
double func(double x)
{
return x*x*x - x*x + 2;
}
// Derivative of the above function which is 3*x^x - 2*x
double derivFunc(double x)
{
return 3*x*x - 2*x;
}
// Function to find the root
void newtonRaphson(double x)
{
double h = func(x) / derivFunc(x);
printf("\n");
printf("deravitave divide value h %ld\n",h);
printf("\n");
while (abs(h) >= e)
{
h = func(x)/derivFunc(x);
// x(i+1) = x(i) - f(x) / f'(x)
x = x - h;
printf( "\n");
printf("the value of x %ld\n",x);
}
printf("\n");
printf("The value of the root is :%lf",x);
}
// Driver program to test above
int main()
{
double x0=-20; // Initial values assumed
// printf("enter the inital gusses\n");
// scanf("%ld",&x0);
newtonRaphson(x0);
return 0;
}