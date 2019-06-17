/* METHOD : TRAPEZOIDAL METHOD */
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f (float y);
int main()
{
    int i,n;
    float a,b,x,h,s0,s1,p;
    printf("enter the lower limit\n");
    scanf("%f",&a);
    printf("enter the upper limit\n");
    scanf("%f",&b);
    printf("enter the number of sub-intervals\n");
    scanf("%d",&n);
    h=(b-a)/n;
    s0=0.0;
    s1=0.0;
     printf("--------------------------------------------------------------\n");
    printf("n\t                    x\t                     f(x)\t\n");
    printf("--------------------------------------------------------------\n");
    for(i=0;i<=n;i++)
    {
                     x=a+i*h;
     printf("%d\t      %f\t          %f(x)\t\n",i,x,f(x));
     if(i==0 || i==n)
     {
             s0=s0+f(x);
             }
     else
     { s1=s1+2*f(x);
     }
     }
     p=(s0+s1)*h/2;
     printf("the value of the intregation is %f",p);
     getch();
     }
     float f(float y)
     {
                  float u;
                  u=(1/y);
                  return (u);
     }
     
/* OUTPUT :  enter the lower limit
0.2
enter the upper limit
0.5
enter the number of sub-intervals
3
--------------------------------------------------------------
n                           x                        f(x)
--------------------------------------------------------------
0             0.200000            1.221403(x)
1             0.300000            1.349859(x)
2             0.400000            1.491825(x)
3             0.500000            1.648721(x)
the value of the intregation is 0.427675 */






 

          


   
                  
