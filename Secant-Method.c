// secant method
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
# define f(x) x*x*x+3*x-5
int main()
{
float x0,x1,x2,e,f0,f1,f2;
int step=1,N;
printf("ener inital guess\n");
scanf("%f %f",&x0,&x1);
printf("ener tolerable error \n");
scanf("%f",&e);
printf("ener max iteration\n");
scanf("%d",&N);
printf("\nstep\t x0\t\t x1\t\t1 x2\t\t f(x2)\n");
do
{
f0=f(x0);
f1=f(x1);
if(f0==f1)
{
printf("mathematical error\n");
exit(0);
}
x2=x1-(x1-x0)*f1/(f1-f0);
f2=f(x2);
printf("%d\t %f\t%f\t%f\t%f\n",step,x0,x1,x2,f2);
x0=x1;
f0=f1;
x1=x2;
f1=f2;
step=step+1;
if (step>N)
{
printf("not convergent\n");
exit(0);
}
} while (fabs(f2)>e);
printf("\nroot is %f",x2);
return 0;

}
