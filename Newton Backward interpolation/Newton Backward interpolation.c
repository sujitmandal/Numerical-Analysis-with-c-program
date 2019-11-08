/*
METHOD : Newton Backward interpolation
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

float fact(int a);

int main()
{
  float x[20],y[20][20],sum,p,u,temp;
  int i,n,j,k=0,f,m;
  float fact(int);

  printf("Enter the value of N : ");
  scanf("%d",&n);

  printf("\nEnter the elements of X :\n");
  for(i=0; i<n; i++)
  {
      scanf("%f",&x[i]);
  }
  printf("\nEnter the elements of Y :\n");
  for(i=0; i<n; i++)
  {
    scanf("%f",&y[k][i]);
  }

  printf("\nEnter the value of f(x): ");
  scanf("%f",&p);

for(i=1;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
     y[i][j]=y[i-1][j]-y[i-1][j-1];
    }
  }
  printf("\n________________________________________________________________\n");
  printf("\n  x(i)\t   y(i)\t    y1(i)    y2(i)    y3(i)    y4(i)     y5(i)");
  printf("\n________________________________________________________________\n");
  for(i=0;i<n;i++)
  {
    printf("\n %.3f",x[i]);
    for(j=0;j<=i;j++)
    {
     printf("   ");
     printf(" %.3f",y[j][i]);
    }
   printf("\n");
  }

  i=0;
  do
  {
   if(x[i]<p && p<x[i+1])
    k=1;
   else
    i++;
  }while(k != 1);
  f=i+1;
  u=(p-x[f])/(x[f]-x[f-1]);
  printf("\n\n u = %.3f ",u);

  n=n-i+1;
  sum=0;
  for(i=0;i<n;i++)
  {
   temp=1;
   for(j=0;j<i;j++)
   {
    temp = temp * (u + j);
   }
    m=fact(i);
    sum = sum + temp*(y[i][f]/m);
  }
  printf("\n\n f(%.2f) = %f ",p,sum);
  getch();
}

float fact(int a)
{
  float fac = 1;

  if (a == 0)
   return (1);
  else
   fac = a * fact(a-1);

  return(fac);
}
/*
OUTPUT: Enter the value of N : 5

Enter the elements of X :
3
4
2
8
9

Enter the elements of Y :
5
1
2
7
8

Enter the value of f(x): 3

________________________________________________________________

  x(i)     y(i)     y1(i)    y2(i)    y3(i)    y4(i)     y5(i)
________________________________________________________________

 3.000    5.000

 4.000    1.000    -4.000

 2.000    2.000    1.000    5.000

 8.000    7.000    5.000    4.000    -1.000

 9.000    8.000    1.000    -4.000    -8.000    -7.000


 u = -0.833

 f(3.00) = 2.582562
 */
