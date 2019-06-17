/* METHOD : TRAPEZOIDAL METHOD */
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f (float u);
int main()
{ 
  float a,b,x,c;
  int n=1;
  x=0;
  printf("Enter the value of a and b where the root lies:\n");
  scanf("%f%f",&a,&b);
  do
  { c=x;
    x=(a*f(b)-b*(a))/(f(b)-f(a));
    if(f(a)*f(x)<0)
    { 
      b=x;
    }  
  else
  { 
    a=x;
    }
   printf("After %d iteration x=%f",n,x);
   n=n+1;		
   }while(fabs(x-c)>0.000001);
   printf("The approximate root of the given equation is %f",x);
   getch();
}
   float f(float u)
   { float z;
   	 z=u*u*u-2*u-5;
   	 return(z);
    }
