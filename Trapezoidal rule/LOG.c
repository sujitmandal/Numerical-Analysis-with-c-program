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
                  u=log(y);
                  return (u);
     }
     
/* OUTPUT : enter the lower limit
4
enter the upper limit
5.2
enter the number of sub-intervals
5
--------------------------------------------------------------
n                           x                        f(x)
--------------------------------------------------------------
0             4.000000            1.386294(x)
1             4.240000            1.444563(x)
2             4.480000            1.499623(x)
3             4.720000            1.551809(x)
4             4.960000            1.601406(x)
5             5.200000            1.648659(x)
the value of the intregation is 1.827570


 */    
                  
