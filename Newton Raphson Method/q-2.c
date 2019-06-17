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
  z=4*(u-sin(u))-1;
  return(z);
  } 
  float df(float v)
  { 
   float z;
   z=4-4*cos(v);
   return(z);
  }
/* OUTPUT:Enter the initial guss of the root
.5
-----------------------
n     x         f(x)
-----------------------
1  2.374125  5.719237
2  1.542681  1.172305
3  1.241128  0.179912
4  1.174619  0.008304
5  1.171238  0.000021
6  1.171230  -0.000000
7  1.171230  -0.000000
The approximate root is given by 1.17123 */












  
