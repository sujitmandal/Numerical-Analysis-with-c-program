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
  printf("The approximate root is given by %.4f",x1);
  getch();
}
  float f(float u)
  {
  float z;
  z=u*sin(u)+cos(u);
  return(z);
  } 
  float df(float v)
  { 
   float z;
   z=v*cos(v);
   return(z);
  }
/* OUTPUT:Enter the initial guss of the root
2
-----------------------
n     x         f(x)
-----------------------
1  3.685040  -2.761428
2  2.809547  -0.029529
3  2.798430  -0.000116
4  2.798386  -0.000000
5  2.798386  -0.000000
The approximate root is given by 2.7984 */



  
