/* METHOD : NEWTON RAPHSON METHOD */
#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float u);
float df(float v);
int main()
{ 
  float x0,x1,c;
  int n=1;
  printf("Enter the initial guss of the root\n");
  scanf("%f",&x0);
  printf("-----------------------\n");
  printf("n     x         f(x)\t\n");
  printf("-----------------------\n");
  do
   { 
     x1=x0-(f(x0)/df(x0));
     printf ("%d  %f  %f\n",n,x1,f(x1));
     n=n+1;
     c=x0;
     x0=x1;
    }while (fabs(x0-c)>0.000001);
  printf("The approximate root is given by %.5f",x1);
  getch();
}
  float f(float u)
  {
  float z;
  z=pow(u,4)+pow(u,2)-80;
  return(z);
  } 
  float df(float v)
  { 
   float z;
   z=3*pow(v,3)+2*v;
   return(z);
  }
/* OUTPUT:Enter the initial guss of the root
2
-----------------------
n     x         f(x)
-----------------------
1  4.142857  231.740921
2  3.097097  21.598713
3  2.870497  -3.866694
4  2.920912  1.322094
5  2.904510  -0.394764
6  2.909487  0.123231
7  2.907940  -0.037963
8  2.908417  0.011748
9  2.908270  -0.003632
10  2.908315  0.001114
11  2.908301  -0.000352
12  2.908306  0.000120
13  2.908304  -0.000029
14  2.908305  0.000020
The approximate root is given by 2.90830 */











  
