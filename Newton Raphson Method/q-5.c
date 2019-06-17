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
  z=pow(u,3)+3*pow(u,2)-3;
  return(z);
  } 
  float df(float v)
  { 
   float z;
   z=3*pow(v,2)+6*v;
   return(z);
  }
/* OUTPUT:Enter the initial guss of the root
.5
-----------------------
n     x         f(x)
-----------------------
1  1.066667  1.626962
2  0.900876  0.165860
3  0.879720  0.002543
4  0.879385  0.000001
5  0.879385  -0.000000
The approximate root is given by 0.87939 */
















  
