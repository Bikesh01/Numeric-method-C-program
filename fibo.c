#include<stdio.h>
#include<conio.h>

int main()
{
  int a,b,c,i=0;
  scanf("%d",&a);
    b=0;
    c=1;
   for ( i = 0; i < a; i++)
   {
       int x=0;
       x=b+c+i;
       printf("%d\n",x);
   }
   
    return 0;
}