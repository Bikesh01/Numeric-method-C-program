#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,j,i,x[20],y[20];
    float a,l[20],sum=0;
    printf("enter number of classes\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("enter the x variable for : %d\n ",i);
      scanf("%d",&x[i]);
      printf("enter the y frequency for : %d \n",i);
      scanf("%d",&y[i]);

    }
      printf("x variable\n");
 for(i=1;i<=n;i++)
    {
      printf(" %d",x[i]);
      
     
      }
      printf(" \n");
      printf("y frequency\n");
    for(i=1;i<=n;i++)
    {
      printf(" %d",y[i]);
      
     
      }
      printf(" \n");
      printf("enter polation point of x :\n");
     scanf("%f",&a);
      for ( i = 1; i <=n; i++)
      {
          for ( j = 1; j<=n; j++)
          { if (j!=i)
          {
                l[i]=(a-x[j])/(x[i]-x[j]);
          }   

          }
          
      }
      printf("lgrange value are \n");
      for ( i = 1; i <=n; i++)
      {
          for ( j = 1; i!=j; j++)
          {
              printf("%d\n",l[i]);

          }
          
      }
      for ( i = 1; i <=n; i++)
      {
          sum=sum+y[i]*l[i];
      }

     printf("the final sum of langrang interpration is : %d",sum); 
      
    return 0;
}