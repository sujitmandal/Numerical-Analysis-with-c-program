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
  z=cos(u)-3*u+1;
  return(z);
  } 
  float df(float v)
  { 
   float z;
   z=-sin(v)-3;
   return(z);
  }
/* OUTPUT:Enter the initial guss of the root
0
-----------------------
n     x         f(x)
-----------------------
1  0.666667  -0.214113
2  0.607493  -0.001397
3  0.607102  -0.000000
4  0.607102  0.000000
The approximate root is given by 0.60710 */














  
